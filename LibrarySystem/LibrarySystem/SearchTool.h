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
	// 在书名索引中查找字符串 n
	static void SubSearch(std::string n);
	// 判断s1中是否有s2
	static bool find(char s1[], char s2[]);
	// 将content中的书本信息装入结构体并返回
	static Book bookup(char *content);
	// 将s1按照offset、count切割后装入s2
	static void split(char *s1, char *s2, int offset, int count);
	// 判断size长度内 s1 与 s2 是否相同
	static bool cmp(char *s1, char *s2, int size);

public:
	static int bookInfoSize;
	// 按照书名查找
	static std::vector<pair<Book, long>> SearchBookName(std::string name);
	// 按照书本编号查找
	static pair<Book, long> SearchBookId(char id[avglen]);
	// 按照ISBN查找
	static pair<Book, long> SearchBookISBN(char id[avglen]);
	// 查找某一类所有书
	static vector<pair<BookIdIndex, long>> SearchIdOfBook(long addr);

public:
	SearchTool();
	~SearchTool();
};

