#pragma once
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <string.h>
#include <thread>
#include <mutex>
#include <algorithm>
#include "user.h"
//const int avglen = 30;
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
	int num; //数量
	float price;
};

struct BookNameIndex
{
	char name[avglen];
	long index;
};

struct BookNumIndex
{
	int num;
	long index;
};

class SearchTool
{
private:
	static int bookInfoSize;
	static string bookName;
	// 在书名索引中查找字符串 n
	static void SubSearch(std::string n);
	// 判断s1中是否有s2
	static bool find(char s1[], char s2[]);
	// 将content中的书本信息装入结构体并返回
	static Book bookup(char *content);
	static User userup(char *content);
	// 将s1按照offset、count切割后装入s2
	static void split(char *s1, char *s2, int offset, int count);
	// 判断size长度内 s1 与 s2 是否相同
	static bool cmp(char *s1, char *s2, int size);

public:
	// 按照书名查找
	static std::vector<Book> SearchBookName(std::string name);
	// 按照书本编号查找
	static std::vector<Book> SearchBookId(string id);
	// 按照作者查找
	static std::vector<Book> SearchBookAuthor(char author[10]);

	//按照id查找用户
	static User SearchUserId(string id);
	//按照姓名查找用户
	static std::vector<User> SearchUserName(std::string name);
	// 下方为长整型、整型、浮点型与字符串的转换
	static void ltob(long n, char * s)  //长整型转为char *
	{
		unsigned mask = 0xff;
		int len = sizeof(long);
		for (int i = 0; i < len; i++)
		{
			s[i] = (mask & n);
			n = (n >> 8);
		}
	}

	static void itob(int n, char * s)  //整型转为char*
	{
		unsigned mask = 0xff;
		int len = sizeof(int);
		for (int i = 0; i < len; i++)
		{
			s[i] = (mask & n);
			n = (n >> 8);
		}
	}

	static void ftob(float n, char *s)  //浮点型转为char *
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

	static long btol(char *s)  //char * 转为 长整型
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

	static int btoi(char *s) //char * 转为 整型
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

	static float btof(char *s)  //char * 转为 浮点
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
	static void stoc(string str,char p[avglen]){  //string 转为 char
		int i;
		for (i = 0; i < str.length(); ++i)
		{
			p[i] = str[i];
		}
		p[i] = '\0';
	}
public:
	SearchTool();
	~SearchTool();
};
