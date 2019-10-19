#pragma once
#include <vector>
#include <map>
#include <string.h>
#include <thread>
#include <mutex>
#include <algorithm>
#include "GenerateData.h"

using namespace std;

class SearchTool
{
public:
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
	static int bookInfoSize;
	// ������������
	static std::vector<pair<Book, long>> SearchBookName(std::string name);
	// �����鱾��Ų���
	static pair<Book, long> SearchBookId(char id[avglen]);
	// ����ISBN����
	static pair<Book, long> SearchBookISBN(char id[avglen]);
	// ����ĳһ��������
	static vector<pair<BookIdIndex, long>> SearchIdOfBook(long addr);

public:
	SearchTool();
	~SearchTool();
};

