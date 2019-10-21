#pragma once
#include "Data.h"
#include "SearchTool.h"
class ModifyTool
{
public:
	// 修改某类书
	static void ChangeBookFile(pair<Book, long> book);
	// 增加某类书
	static void AddBookFile(Book book);
	// 增加某本书
	static void AddBookIdFile(BookIdIndex bookid);
	// 修改某本书（一般是修改借阅情况）
	static void ChangeBookIdFile(BookIdIndex bookid, char preid[]);

	// 修改某个用户
	static void ChangeUserFile(pair<User, long> user);
	// 增加某个用户
	static void AddUserFile(User user);

public:
	ModifyTool();
	~ModifyTool();
};

