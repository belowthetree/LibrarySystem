#include "pch.h"
#include "GenerateData.h"
#include "SearchTool.h"
#include <fstream>
#include"NewDefine.h"

void GenerateData::CreateBook(vector<Book> book)
{
	// 一本书的数据长度，前五项 string 型暂时规定长度为 avglen
	int size = book_info_size;
	long addr = 0;
	fstream out(BookFile, ios::out | ios::binary | ios::trunc);
	addr = out.tellp();
	for (vector<Book>::iterator it = book.begin(); it != book.end(); it++)
	{
		// 由于数据原因，数量随机
		(*it).num = rand() % 10 + 1;
		// 存储书本信息代码较多，放入 Tool.cpp 中
		bookdown(&(*it), &out);
	}
	out.close();
	out.open(BookIdIndexFile, ios::out | ios::binary | ios::trunc);
	int len = book.size();
	long tmp_addr = addr;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < book[i].num; j++)
		{
			char s[100];
			memset(s, 0, 100);
			itob(j + i * 30, s);
			out.write(s, avglen);

			//地址
			long idx = addr * size;
			ltob(idx, s);
			out.write(s, sizeof(long));
			addr += size;

			s[0] = 0;
			out.write(s, 1);
		}
	}
	out.close();
	addr = tmp_addr;
	out.open(BookNameIndexFile, ios::out | ios::binary | ios::trunc);
	for (int i = 0; i < len; i++)
	{
		char s[100];
		out.write(book[i].name, avglen);

		//地址
		long idx = addr * size;
		ltob(idx, s);
		out.write(s, sizeof(long));
		addr += size;
	}
	out.close();
}

void GenerateData::CreateUser(vector<User> user)
{
	int size = user_info_size;
	long addr = 0;
	ofstream out("User.dat", ios::out | ios::binary | ios::trunc);
	addr = out.tellp();
	for (vector<User>::iterator it = user.begin(); it != user.end(); it++)
	{
		char tmp[200];
		//依次写入数据
		//前几项 字符串 ，长度规定为 user_avglen
		out.write((*it).id, user_avglen);
		out.write((*it).realName, user_avglen);
		out.write((*it).major, user_avglen);
		out.write((*it).grade, user_avglen);
		out.write((*it).pwd, user_avglen);
		out.write((*it).phone, user_avglen);
		out.write((*it).email, user_avglen);

		out.write((*it).sex, 2);
		//因为数字没法直接存为二进制，所以先转换装进临时数组 tmp
		itob((*it).age, tmp);
		out.write(tmp, sizeof(int));
	}
	out.close();
	int len = user.size();
	out.open("UserIdIndex.dat", ios::out | ios::binary | ios::app);
	for (int i = 0; i < len; i++)
	{
		char tmp[100];
		out.write(user[i].id, user_avglen);

		//地址
		long idx = addr * size;
		ltob(idx, tmp);
		out.write(tmp, sizeof(long));
		addr += size;
	}
	out.close();
}

GenerateData::GenerateData()
{

}

GenerateData::~GenerateData()
{
}