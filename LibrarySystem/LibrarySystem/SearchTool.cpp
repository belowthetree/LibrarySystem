#include "pch.h"
#include "SearchTool.h"

std::vector<long> index;
std::mutex mm;

string SearchTool::bookName = "Book.dat";

int SearchTool::bookInfoSize = book_info_size;

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
	char t[avglen + 5];
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
	tmp.pubdate = btol(t);
	split(content, t, avglen * 5 + sizeof(long), sizeof(int));
	tmp.borrowNum = btoi(t);
	split(content, t, avglen * 5 + sizeof(long) + sizeof(int), sizeof(int));
	tmp.num = btoi(t);
	split(content, t, avglen * 5 + sizeof(long) + sizeof(int) * 2,sizeof(float));
	tmp.price = btof(t);
	return tmp;
}

// �Դ���Ĺؼ��ʽ���������������������ʹ�ã�
void SearchTool::SubSearch(std::string n)
{
	std::ifstream in(BookNameIndexFile, std::ios::in | std::ios::binary);
	int size = avglen + sizeof(long);
	char *name = const_cast<char*>(n.c_str());
	int len = strlen(name);
	char tmp_name[50];

	while (!in.eof())
	{
		in.read(tmp_name, size);
		tmp_name[size] = '\0';

		if (cmp(tmp_name, name, avglen))
		{
			char t[15];
			// �ҵ�֮�󽫵�ַ�� t 
			for (int i = avglen, k = 0; i < size; i++)
				t[k++] = tmp_name[i];
			// �˴�������������ֹ���̵߳������ͬʱ����index
			mm.lock();
			index.push_back(btol(t));
			mm.unlock();
		}
	}
}

// �������������鱾��Ϣ
std::vector<pair<Book, long>> SearchTool::SearchBookName(std::string name)
{
	std::vector<pair<Book, long>> book;
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
		std::string name2 = name.substr(len / 2, len);
		std::thread th1(SubSearch, name1);
		std::thread th2(SubSearch, name2);

		th1.join();
		th2.join();
	}
	else
	{
		std::string name1 = name.substr(0, len / 3);
		std::string name2 = name.substr(len / 3, len / 3 * 2);
		std::string name3 = name.substr(len / 3 * 2, len);
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
	std::ifstream in(BookFile, std::ios::in | std::ios::binary);
	// �ҵ���װ�� book ��
	for (std::vector<long>::iterator it = index.begin(); it != index.end(); it++)
	{
		in.seekg((*it), std::ios::beg);
		in.read(tmp, bookInfoSize);
		tmp[bookInfoSize] = '\0';
		// bookup ���ڽ�����ת���� Book
		book.push_back(pair<Book, long>(bookup(tmp), (*it)));
	}

	return book;
}

// ���ձ�Ų����鱾��Ϣ
pair<Book, long> SearchTool::SearchBookId(char id[avglen])
{
	ifstream io(BookIdIndexFile, ios::in | ios::binary);
	pair<Book, long> book;
	book.second = -1;
	// �õ�һ����Ŷ�Ӧ�Ĵ�С��Id + ��ַ
	int size = book_id_size;
	char tmp[500];

	while (!io.eof())
	{
		io.read(tmp, size);
		tmp[size] = '\0';
		if (find(tmp, id))//�жϱ���Ƿ�ƥ��
		{
			//	����ź͵�ַ�ֿ�
			split(tmp, id, avglen, sizeof(long));
			long idx = btol(id);
			//	��ʼ���Ҷ�Ӧ�鱾��Ϣ
			ifstream in(bookName, ios::in | ios::binary);
			in.seekg(idx, ios::beg);
			in.read(tmp, bookInfoSize);
			// bookup ����Ϣװ�� Book ������
			book = pair<Book, long>(bookup(tmp), idx);
			return book;
		}
	}
	return book;
}

// ����ISBN���ң����û�У��򷵻� book.second = -1;
pair<Book, long> SearchTool::SearchBookISBN(char id[avglen])
{
	fstream io(BookFile, ios::in | ios::binary);
	pair<Book, long> book;
	char tmp[book_info_size];
	book.second = -1;

	while (!io.eof())
	{
		io.read(tmp, book_info_size);
		if (cmp(tmp, id, avglen))
		{
			book.first = bookup(tmp);
			book.second = io.tellg();
			book.second -= book_info_size;
			break;
		}
	}
	io.close();

	return book;
}

// ����ĳ���������鱾
vector<pair<BookIdIndex, long>> SearchTool::SearchIdOfBook(long addr)
{
	fstream io(BookIdIndexFile, ios::in | ios::binary);
	long t;
	char tmp[avglen + sizeof(long) + 5];
	char tmp_addr[avglen + 5];
	vector<pair<BookIdIndex, long>> bookId;

	while (!io.eof())
	{
		io.read(tmp, book_id_size);
		SearchTool::split(tmp, tmp_addr, avglen, sizeof(long));
		t = btol(tmp_addr);
		if (t == addr)
		{
			BookIdIndex tmp_id = idup(tmp);
			bookId.push_back(pair<BookIdIndex, long>(tmp_id, t));
		}
	}
	
	return bookId;
}

pair<User, long> SearchTool::SearchUserId(char id[])
{
	pair<User, long> user;
	fstream io(UserFile, ios::in | ios::binary);
	char tmp[user_info_size + 1];

	while (!io.eof())
	{
		io.read(tmp, user_info_size);
		if (cmp(tmp, id, sizeof(long)))
		{
			user.first = userup(tmp);
			user.second = io.tellg();
			user.second -= user_info_size;
			break;
		}
	}

	io.close();
	return user;
}

SearchTool::SearchTool()
{
}

SearchTool::~SearchTool()
{
}

