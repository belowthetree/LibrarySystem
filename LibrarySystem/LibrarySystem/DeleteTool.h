#pragma once
#include "Data.h"

class DeleteTool
{
private:
	// 测试用变量，不用管
	static char book_file[30];
	static char bookName_file[30];
	static char bookId_file[30];

public:
	// 清除某类书的所有编号索引
	static void ClearBookId(long addr);
	// 删除某类书
	static bool DeleteBookFile(long addr);
	// 删除某本书
	static void DeleteBookIdFile(char id[avglen]);
	// 删除某类书书名索引
	static void ClearBookName(long addr);

public:
	DeleteTool();
	~DeleteTool();
};

