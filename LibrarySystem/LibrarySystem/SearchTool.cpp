#include "pch.h"
#include "SearchTool.h"


std::vector<long> index;
std::mutex mm;

string SearchTool::bookName = "Book.dat";

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

void split(char * s1, char *s2, int offset, int count)
{
	for (int k = 0, i = offset; k < count; i++)
		s2[k++] = s1[i];
	s2[count] = '\0';
}

// ���õ����鱾��Ϣװ��һ��Book�ṹ�岢����
Book kup(char * content)
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
	split(content, t, avglen * 5 + sizeof(long) + 1 + sizeof(int),sizeof(int));
	tmp.price = SearchTool::btof(t);
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
			mm.lock();
			index.push_back(btol(t));
			mm.unlock();
		}
	}
}

std::vector<Book> SearchTool::SearchName(std::string name)
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
	int size = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);
	char tmp[500];
	std::ifstream in("Book.dat", std::ios::in | std::ios::binary);
	for (std::vector<long>::iterator it = index.begin(); it != index.end(); it++)
	{
		in.seekg((*it), std::ios::beg);
		in.read(tmp, size);
		tmp[size] = '\0';
		book.push_back(kup(tmp));
	}

	return book;
}

std::vector<Book> SearchTool::SearchNum(int num)
{
	std::vector<Book> book;
	return book;
}

std::vector<Book> SearchTool::SearchAuthor(char author[10])
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

