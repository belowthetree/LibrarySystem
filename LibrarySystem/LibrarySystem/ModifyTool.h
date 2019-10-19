#pragma once
#include "Data.h"
#include "SearchTool.h"
class ModifyTool
{
public:
	// �޸�ĳ����
	static void ChangeBookFile(pair<Book, long> book);
	// ����ĳ����
	static void AddBookFile(Book book);
	// ����ĳ����
	static void AddBookIdFile(BookIdIndex bookid);
	// �޸�ĳ���飨һ�����޸Ľ��������
	static void ChangeBookIdFile(BookIdIndex bookid, char preid[]);

public:
	ModifyTool();
	~ModifyTool();
};
