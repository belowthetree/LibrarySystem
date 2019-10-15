#include "pch.h"
#include "SearchTool.h"


std::vector<long> index;
std::mutex mm;

string SearchTool::bookName = "Book.dat";
int SearchTool::bookInfoSize = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);
int userInfoSize = 8 * avglen + sizeof(int) + 2;
//�ж�s1�����ֲ����Ƿ����Ӵ�s2
bool SearchTool::find(char s1[], char s2[])
{
	int len = strlen(s2);
	bool same;
	for (int i = 0; i + len < avglen; i++)
	{
		same = true;
		for (int k = 0; k < len; k++)
		{
			if (s1[i + k] != s2[k])
			{
				same = false;
				break;
			}
		}
		if (same)
			return true;
	}
	return false;
}
//����offset��count�з�s1��洢��s2��
void SearchTool::split(char * s1, char *s2, int offset, int count)
{
	for (int k = 0, i = offset; k < count; i++)
		s2[k++] = s1[i];
	s2[count] = '\0';
}
//�鿴s1������û��s2��
bool SearchTool::cmp(char * s1, char * s2, int size)
{
	for (int i = 0; i < size; i++)
		if (s1[i] != s2[i])
			return false;
	return true;
}

// ���õ����鱾��Ϣװ��һ��Book�ṹ�岢����
Book SearchTool::bookup(char * content)
{
	Book tmp;
	char t[50];

	split(content, t, 0, avglen);
	tmp.id = t;
	split(content, t, avglen, avglen);
	tmp.name = t;
	split(content, t, avglen * 2, avglen);
	tmp.author = t;
	split(content, t, avglen * 3, avglen);
	tmp.press = t;
	split(content, t, avglen * 4, avglen);
	tmp.category = t;
	split(content, t, avglen * 5, sizeof(long));
	tmp.pubdate = SearchTool::btol(t);
	tmp.type = content[avglen * 5 + sizeof(long)];
	split(content, t, avglen * 5 + sizeof(long) + 1, 1 + sizeof(int));
	tmp.num = SearchTool::btoi(t);
	split(content, t, avglen * 5 + sizeof(long) + 1 + sizeof(int), sizeof(int));
	tmp.price = SearchTool::btof(t);
	return tmp;
}
// ���õ����û���Ϣװ��һ��User�ṹ�岢����
User SearchTool::userup(char * content) {
	User tmp;
	char t[50];
	split(content, t, 0, avglen);
	tmp.id = t;
	split(content, t, avglen, avglen);
	tmp.name = t;
	split(content, t, avglen * 2, avglen);
	tmp.realname = t;
	split(content, t, avglen * 3, avglen);
	tmp.major = t;
	split(content, t, avglen * 4, avglen);
	tmp.grade = t;
	split(content, t, avglen * 5, avglen);
	tmp.pwd = t;
	split(content, t, avglen * 6, avglen);
	tmp.phone = t;
	split(content, t, avglen * 7, avglen);
	tmp.email = t;
	split(content, t, avglen * 8, sizeof(int));
	tmp.age = SearchTool::btoi(t);
	split(content, t, avglen * 8 + sizeof(int),2);
	for (int i = 0; i < 2; i++) {
		tmp.sex[i] = t[i];
	}
	return tmp;
}

// �Դ���Ĺؼ��ʽ���������������������ʹ�ã�
void SearchTool::SubSearch(std::string n)
{
	std::ifstream in("BookNameIndex.dat", std::ios::in | std::ios::binary);
	int size = avglen + sizeof(long);
	char *name = const_cast<char*>(n.c_str());
	int len = strlen(name);
	char tmp_name[50];

	while (!in.eof())
	{
		in.read(tmp_name, size);
		tmp_name[size] = '\0';


		if (find(tmp_name, name))
		{
			char t[15];
			for (int i = avglen, k = 0; i < size; i++)
				t[k++] = tmp_name[i];
			// �˴�������������ֹ���̵߳������ͬʱ����index
			mm.lock();
			index.push_back(btol(t));
			mm.unlock();
		}
	}
}

std::vector<Book> SearchTool::SearchBookName(std::string name)
{
	std::vector<Book> book;
	int len = name.size();
	// �����������йؼ��ֲ��
	if (len <= 3)
	{
		std::thread th1(SubSearch, name);
		th1.join();
	}
	else if (len <= 5)
	{
		std::string name1 = name.substr(0, len / 2);
		std::string name2 = name.substr(len / 2, len - len/2);
		std::thread th1(SubSearch, name1);
		std::thread th2(SubSearch, name2);

		th1.join();
		th2.join();
	}
	else
	{
		std::string name1 = name.substr(0, len / 3);
		std::string name2 = name.substr(len / 3, len / 3 );
		//string ttt = name.substr(3, 4);
		std::string name3 = name.substr(len / 3 * 2, len/3);
		std::thread th1(SubSearch, name1);
		std::thread th2(SubSearch, name2);
		std::thread th3(SubSearch, name3);

		th1.join();
		th2.join();
		th3.join();
	}

	// ɾ���ظ��ĵ�ַ
	std::sort(index.begin(), index.end());
	std::vector<long>::iterator end = std::unique(index.begin(), index.end());
	index.erase(end, index.end());

	// ���ݵ�ַ�����鱾��Ϣ
	Book tmp_book;
	char tmp[500];
	std::ifstream in("Book.dat", std::ios::in | std::ios::binary);
	for (std::vector<long>::iterator it = index.begin(); it != index.end(); it++)
	{
		in.seekg((*it), std::ios::beg);
		in.read(tmp, bookInfoSize);
		tmp[bookInfoSize] = '\0';
		book.push_back(bookup(tmp));
	}

	return book;
}

std::vector<Book> SearchTool::SearchBookId(string id)
{
	ifstream io("BookIdIndex.dat", ios::in | ios::binary);
	std::vector<Book> book;
	int size = avglen + sizeof(long);
	char tmp[500];
	char n[30];
	stoc(id,n);

	while (!io.eof())
	{
		io.read(tmp, size);
		tmp[size] = '\0';
		if (cmp(tmp,n,avglen))//�ҵ�ƥ���֮��ֱ�Ӹ��ݵ�ַ��ȡ�鱾��Ϣ
		{
			split(tmp, n, avglen , sizeof(long));
			long idx = btol(n);
			ifstream in(bookName, ios::in | ios::binary);
			in.seekg(idx, ios::beg);
			in.read(tmp, bookInfoSize);
			book.push_back(bookup(tmp));
			return book;
		}
	}
	return book;
}

// �������������û���Ϣ
std::vector<User> SearchTool::SearchUserName(string name)
{
	std::vector<User> user;
	std::ifstream in("UserNameIndex.dat", std::ios::in | std::ios::binary);
	int size = avglen + sizeof(long);
	char *n = const_cast<char*>(name.c_str());
	int len = strlen(n);
	char tmp_name[50];
	while (!in.eof())
	{
		in.read(tmp_name, size);
		tmp_name[size] = '\0';

		if (find(tmp_name, n))
		{
			char t[15];
			for (int i = avglen, k = 0; i < size; i++)
				t[k++] = tmp_name[i];
			index.push_back(btol(t));
		}
	}
	// ɾ���ظ��ĵ�ַ
	std::sort(index.begin(), index.end());
	std::vector<long>::iterator end = std::unique(index.begin(), index.end());
	index.erase(end, index.end());

	// ���ݵ�ַ�����û���Ϣ
	User tmp_user;
	char tmp[500];
	std::ifstream ins("User.dat", std::ios::in | std::ios::binary);
	for (std::vector<long>::iterator it = index.begin(); it != index.end(); it++)
	{
		ins.seekg((*it), std::ios::beg);
		ins.read(tmp, userInfoSize);
		tmp[userInfoSize] = '\0';
		user.push_back(userup(tmp));
	}
	return user;
}

User SearchTool::SearchUserId(string id) {
	ifstream io("UserIdIndex.dat", ios::in | ios::binary);
	User user;
	int size = size = avglen + sizeof(long);
	char tmp[500];
	char n[30];
	stoc(id,n);
	while (!io.eof())
	{
		io.read(tmp, size);
		tmp[size] = '\0';
		if (cmp(tmp,n,avglen))//�ҵ�ƥ���֮��ֱ�Ӹ��ݵ�ַ��ȡ�鱾��Ϣ
		{
			split(tmp, n, avglen, sizeof(long));
			long idx = btol(n);
			ifstream in("User.dat", ios::in | ios::binary);
			in.seekg(idx, ios::beg);
			in.read(tmp, userInfoSize);
			user=userup(tmp);
			return user;
		}
	}
	return user;
}


std::vector<Book> SearchTool::SearchBookAuthor(char author[10])
{
	std::vector<Book> book;
	return book;
}

SearchTool::SearchTool()
{
}


SearchTool::~SearchTool()
{
}