#pragma once
#include "Data.h"

class DeleteTool
{
private:
	static char book_file[30];
	static char bookName_file[30];
	static char bookId_file[30];

public:
	static void ClearBookId(long addr);
	static bool DeleteBook(long addr);
	static void ClearBookName(long addr);

public:
	DeleteTool();
	~DeleteTool();
};

