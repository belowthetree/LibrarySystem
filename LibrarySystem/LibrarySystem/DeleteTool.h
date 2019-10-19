#pragma once
#include "Data.h"

class DeleteTool
{
private:
	// �����ñ��������ù�
	static char book_file[30];
	static char bookName_file[30];
	static char bookId_file[30];

public:
	// ���ĳ��������б������
	static void ClearBookId(long addr);
	// ɾ��ĳ����
	static bool DeleteBookFile(long addr);
	// ɾ��ĳ����
	static void DeleteBookIdFile(char id[avglen]);
	// ɾ��ĳ������������
	static void ClearBookName(long addr);

public:
	DeleteTool();
	~DeleteTool();
};

