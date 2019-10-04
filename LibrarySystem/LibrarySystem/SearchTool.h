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
	string press;		//������
	string category;	//ѧ��
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
	// �����������в����ַ��� n
	static void SubSearch(std::string n);
	// �ж�s1���Ƿ���s2
	static bool find(char s1[], char s2[]);
	// ��content�е��鱾��Ϣװ��ṹ�岢����
	static Book bookup(char *content);
	// ��s1����offset��count�и��װ��s2
	static void split(char *s1, char *s2, int offset, int count);
	// �ж�size������ s1 �� s2 �Ƿ���ͬ
	static bool cmp(char *s1, char *s2, int size);

public:
	// ������������
	static std::vector<Book> SearchBookName(std::string name);
	// �����鱾��Ų���
	static std::vector<Book> SearchBookNum(int num);
	// �������߲���
	static std::vector<Book> SearchBookAuthor(char author[10]);

	// �·�Ϊ�����͡����͡����������ַ�����ת��
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

