﻿// 草稿2017-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <string.h>
#include <Windows.h>
#include <sstream>
#include "SearchTool.h"
#include "DeleteTool.h"

using namespace std;

int cnt = 0;

void read()
{
	ifstream in("Book.dat", ios::in | ios::binary);
	char str[500];
	int size = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);
	in.seekg(0, in.end);
	long len = in.tellg();
	in.seekg(0, ios::beg);

	in.read(str, len);
	in.seekg(0, ios::beg);

	while (!in.eof())
	{
		long t = in.tellg();
		in.read(str, size);
		str[size] = '\0';
		cout << str << endl;
	}

	in.close();
}

struct BookAuthorIndex
{
	char author[10];
	long index;
};

struct BookNameLostIndex
{
	bool valid;
	long index;
};

struct BookNumLostIndex
{
	bool valid;
	long index;
};

struct AuthorLostIndex
{
	bool valid;
	long index;
};

std::mutex m;

int c = 0;

void cal()
{
	m.lock();
	cout << "我是：" << c++ << endl;
	Sleep(5000);
	m.unlock();
}

int main()
{
	//vector<Book> book;
	//Book b;
	//b.author = "作者";
	//b.category = "类型";
	//b.id = 10;
	//b.name = "C++";
	//b.borrowNum = 0;
	//b.num = 20;
	//b.press = "出版";
	//b.price = 5.5;
	//b.pubdate = 20190102;
	//b.type = true;
	//book.push_back(b);
	//GenerateData::CreateBook(book);

	User user;
	memset(user.id, 0, user_avglen);
	memset(user.email, 0, user_avglen);
	memset(user.grade, 0, user_avglen);
	memset(user.major, 0, user_avglen);
	memset(user.phone, 0, user_avglen);
	memset(user.pwd, 0, user_avglen);
	memset(user.realName, 0, user_avglen);
	memcpy(user.id, "12345", 5);
	user.age = 13;
	memcpy(user.email, "@168.com", 8);
	memcpy(user.grade, "大一", 4);
	memcpy(user.major, "轮机", 4);
	memcpy(user.phone, "138238", 6);
	memcpy(user.pwd, "password", 8);
	memcpy(user.sex, "0", 1);
	memcpy(user.realName, "Name", 4);

	vector<User> us;
	us.push_back(user);

	GenerateData::CreateUser(us);
	char id[user_info_size + 5] = "12345";
	SearchTool::SearchUserId(id);

	//SearchTool::SearchBookId(10);
	//SearchTool::SearchBookName("C");
	//DeleteTool::DeleteBook(0);
	//SearchTool::SearchBookName("C");

	/*thread th1(cal);
	thread th2(cal);

	th1.join();
	th2.join();*/

	return 0;
}
