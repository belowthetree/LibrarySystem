#pragma once
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <string.h>
#include <thread>
#include <mutex>
#include <algorithm>

const int avglen = 30;
using namespace std;

struct Book
{
	string id;
	string name;
	string author;
	string press;		//出版社
	string category;	//学科
	long pubdate;
	bool type;
	int num;
	float price;
};

struct BookNameIndex
{
	char name[avglen];
	long index;
};

class SearchTool
{
private:
	static string bookName;
	static void SubSearch(std::string n);
	static bool find(char s1[], char s2[]);

public:
	// 静态操作方法
	static std::vector<Book> SearchName(std::string name);
	static std::vector<Book> SearchNum(int num);
	static std::vector<Book> SearchAuthor(char author[10]);

	static void ltob(long n, char * s)
	{
		unsigned mask = 0xff;
		int len = sizeof(long);
		for (int i = 0; i < len; i++)
		{
			s[i] = (mask & n);
			n = (n >> 8);
		}
	}

	static void itob(int n, char * s)
	{
		unsigned mask = 0xff;
		int len = sizeof(int);
		for (int i = 0; i < len; i++)
		{
			s[i] = (mask & n);
			n = (n >> 8);
		}
	}

	static void ftob(float n, char *s)
	{
		unsigned mask = 0xff;
		unsigned * tmp = (unsigned *)& n;
		int len = sizeof(float);
		for (int i = 0; i < len; i++)
		{
			s[i] = (mask & *tmp);
			(*tmp) = (*tmp >> 8);
		}
	}

	static long btol(char *s)
	{
		long tmp = 0;
		unsigned mask = 0xff;
		int len = sizeof(long);
		for (int i = 0; i < len; i++)
		{
			tmp = (tmp << 8);
			tmp = tmp + unsigned char(s[len - i - 1]);
		}
		return tmp;
	}

	static int btoi(char *s)
	{
		int tmp = 0;
		unsigned mask = 0xff;
		int len = sizeof(int);
		for (int i = 0; i < len; i++)
		{
			tmp = (tmp << 8);
			tmp = tmp + unsigned char(s[len - i - 1]);
		}
		return tmp;
	}

	static float btof(char *s)
	{
		unsigned tmp = 0;
		unsigned mask = 0xff;
		int len = sizeof(int);
		for (int i = 0; i < len; i++)
		{
			tmp = (tmp << 8);
			tmp = tmp + unsigned char(s[len - i - 1]);
		}
		float *res = (float*)&tmp;
		return *res;
	}


public:
	SearchTool();
	~SearchTool();
};

