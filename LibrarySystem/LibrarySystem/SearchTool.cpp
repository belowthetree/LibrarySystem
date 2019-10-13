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
	tmp.type = content[avglen * 5 + sizeof(long)];
	split(content, t, avglen * 5 + sizeof(long) + 1, sizeof(int));
	tmp.borrowNum = btoi(t);
	split(content, t, avglen * 5 + sizeof(long) + sizeof(int) + 1, sizeof(int));
	tmp.num = btoi(t);
	split(content, t, avglen * 5 + sizeof(long) + 1 + sizeof(int) * 2,sizeof(float));
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

		if (find(tmp_name, name))
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
		book.push_back(bookup(tmp));
	}

	return book;
}

// ���ձ�Ų����鱾��Ϣ
std::vector<Book> SearchTool::SearchBookId(char id[avglen])
{
	ifstream io(BookIdIndexFile, ios::in | ios::binary);
	std::vector<Book> book;
	// �õ�һ����Ŷ�Ӧ�Ĵ�С��Id + ��ַ
	int size = avglen + sizeof(long);
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
			book.push_back(bookup(tmp));
			return book;
		}
	}
	return book;
}

SearchTool::SearchTool()
{
}

SearchTool::~SearchTool()
{
}

