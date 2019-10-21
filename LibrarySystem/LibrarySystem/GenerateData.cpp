#include "pch.h"
#include "GenerateData.h"
#include "SearchTool.h"
#include <fstream>

void GenerateData::CreateBook(vector<Book> book)
{
	// 一本书的数据长度，前五项 string 型暂时规定长度为 avglen
	int size = book_info_size;
	fstream out(BookFile, ios::out | ios::binary | ios::app);
	for (vector<Book>::iterator it = book.begin(); it != book.end(); it++)
	{
		// 存储书本信息代码较多，放入 Tool.cpp 中
		bookdown(&(*it), &out);
	}
	out.close();
	out.open(BookIdIndexFile, ios::out | ios::binary | ios::app);
	int len = book.size();
	for (int i = 0; i < len; i++)
	{
		char s[100];
		out.write(book[i].id.c_str(), avglen);

		//地址
		long idx = i * size;
		ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
	out.open(BookNameIndexFile, ios::out | ios::binary | ios::app);
	for (int i = 0; i < len; i++)
	{
		char s[100];
		out.write(book[i].name.c_str(), avglen);

		//地址
		long idx = i * size;
		ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
}

void GenerateData::CreateUser(vector<User> user)
{
	// 计算 Uer 所有数据需要的字节数
	int size = 7 * user_avglen + 10 + sizeof(int);
	ofstream out("User.dat", ios::out | ios::binary | ios::trunc);
	for (vector<User>::iterator it = user.begin(); it != user.end(); it++)
	{
		char tmp[200];
		//依次写入数据
		//前几项 字符串 ，长度规定为 user_avglen
		out.write((*it).id.c_str(), user_avglen);
		out.write((*it).name.c_str(), user_avglen);
		out.write((*it).major.c_str(), user_avglen);
		out.write((*it).grade.c_str(), user_avglen);
		out.write((*it).pwd.c_str(), user_avglen);
		out.write((*it).phone.c_str(), user_avglen);
		out.write((*it).email.c_str(), user_avglen);
		//因为数字没法直接存为二进制，所以先转换装进临时数组 tmp
		itob((*it).age, tmp);
		out.write(tmp, sizeof(int));
		out.write((*it).sex.c_str(),10);
	}
	out.close();
	int len = user.size();
	out.open("UserIdIndex.dat", ios::out | ios::binary | ios::app);
	for (int i = 0; i < len; i++)
	{
		char tmp[100];
		out.write(user[i].id.c_str(), user_avglen);

		//地址
		long idx = i * size;
		ltob(idx, tmp);
		out.write(tmp, sizeof(long));
	}
	out.close();
}

GenerateData::GenerateData()
{

}

GenerateData::~GenerateData()
{
}
