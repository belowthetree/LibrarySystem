#include "pch.h"
#include "SearchTool.h"


std::vector<long> index;
std::mutex mm;

string SearchTool::bookName = "Book.dat";

int SearchTool::bookInfoSize = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);

//判断s1中名字部分是否有子串s2
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
//按照offset、count切分s1后存储到s2中
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

// 将得到的书本信息装进一个Book结构体并返回
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
	split(content, t, avglen * 5 + sizeof(long) + 1 + sizeof(int),sizeof(int));
	tmp.price = SearchTool::btof(t);
	return tmp;
}

// 对传入的关键词进行搜索（仅限书名搜索使用）
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
			// 此处动用了锁，防止多线程的情况下同时调用index
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
	// 根据字数进行关键字拆分
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

	// 删除重复的地址
	std::sort(index.begin(), index.end());
	std::vector<long>::iterator end = std::unique(index.begin(), index.end());
	index.erase(end, index.end());

	// 根据地址查找书本信息
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

// 按照编号查找书本信息
std::vector<Book> SearchTool::SearchBookNum(int num)
{
	ifstream io("BookNumIndex.dat", ios::in | ios::binary);
	std::vector<Book> book;
	int size = sizeof(int) + sizeof(long);
	char tmp[500];
	char n[20];
	itob(num, n);//将编号转换为字符串

	while (!io.eof())
	{
		io.read(tmp, size);
		tmp[size] = '\0';
		if (cmp(tmp, n, sizeof(int)))//找到匹配的之后直接根据地址获取书本信息
		{
			split(tmp, n, sizeof(int), sizeof(long));
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

