// borrow.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
using namespace std;

int n = 1000000;
int cnt = 0;

void print()
{
	ofstream out("Book.dat", ios::out | ios::binary | ios::trunc);
	int size = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);
	for (int j = 0; j < 2; j++)
	{
		char tmp[9];
		/*for (int i = 0; i < avglen; i++)
			out2 << "a";
		int a = out.tellp();
		SearchTool::ltob(out.tellp(), tmp);
		out2.write(tmp, sizeof(long));*/

		for (int k = 0; k < 5; k++)
			for (int i = 0; i < avglen; i++)
				out << 'a';
		tmp[8] = '\0';
		SearchTool::ltob(5, tmp);
		out.write(tmp, sizeof(long));
		tmp[0] = 0;
		out.write(tmp, 1);
		SearchTool::itob(10, tmp);
		out.write(tmp, 4);
		SearchTool::ftob(4.5, tmp);
		out.write(tmp, 4);
	}
	out.close();
	ofstream out2("BookNumIndex.dat", ios::out | ios::binary | ios::trunc);

	int idx = 10;
	char s[100];
	SearchTool::itob(idx, s);
	out2.write(s, 4);
	idx = size;
	SearchTool::ltob(idx, s);
	out2.write(s, 4);

	out2.close();
}

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
void GenerateBookData(vector<Book> book)
{
	// 一本书的数据长度，前五项 string 型暂时规定长度为 avglen
	int size = 5 * avglen + sizeof(long) + 1 + sizeof(int) + sizeof(float);
	ofstream out("Book.dat", ios::out | ios::binary | ios::trunc);
	for (vector<Book>::iterator it = book.begin(); it != book.end(); it++)
	{
		char tmp[200];
		//前五项 string ，长度规定为 avglen
		out.write((*it).id.c_str(), avglen);
		out.write((*it).name.c_str(), avglen);
		out.write((*it).author.c_str(), avglen);
		out.write((*it).press.c_str(), avglen);
		out.write((*it).category.c_str(), avglen);

		//出版日期
		SearchTool::ltob((*it).pubdate, tmp);
		out.write(tmp, sizeof(long));
		//type
		tmp[0] = (*it).type;
		out.write(tmp, 1);
		//编号
		SearchTool::itob((*it).num, tmp);
		out.write(tmp, 4);
		//价格
		SearchTool::ftob((*it).price, tmp);
		out.write(tmp, 4);
	}
	out.close();
	out.open("BookIdIndex.dat", ios::out | ios::binary | ios::trunc);
	int len = book.size();
	for (int i = 0; i < len; i++)
	{
		// 编号暂时是整型，如果是string，请用下面的代码
		/*
		out.write((*it).num, num_len);
		*/
		char s[100];
		for (int j = 0; j < book[i].id.size(); j++) {
			s[j] = book[i].id[j];
		}
		out.write(s, avglen);

		//地址
		long idx = i * size;
		SearchTool::ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
	out.open("BookNameIndex.dat", ios::out | ios::binary | ios::trunc);
	//int len = book.size();
	for (int i = 0; i < len; i++)
	{
		// 编号暂时是整型，如果是string，请用下面的代码
		/*
		out.write((*it).num, num_len);
		*/
		char s[100];
		for (int j = 0; j < book[i].name.size(); j++) {
			s[j] = book[i].name[j];
		}
		out.write(s, avglen);

		//地址
		long idx = i * size;
		SearchTool::ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
}
void GenerateUserData(vector<User> user)
{
	int size = 8 * avglen + sizeof(int) + 2;
	ofstream out("User.dat", ios::out | ios::binary | ios::trunc);
	for (vector<User>::iterator it = user.begin(); it != user.end(); it++)
	{
		char tmp[200];
		//前五项 string ，长度规定为 avglen
		out.write((*it).id.c_str(), avglen);
		out.write((*it).name.c_str(), avglen);
		out.write((*it).realname.c_str(), avglen);
		out.write((*it).major.c_str(), avglen);
		out.write((*it).grade.c_str(), avglen);
		out.write((*it).pwd.c_str(), avglen);
		out.write((*it).phone.c_str(), avglen);
		out.write((*it).email.c_str(), avglen);


		//年龄
		SearchTool::itob((*it).age, tmp);
		out.write(tmp, 4);
		//年龄
		out.write((*it).sex,2);
	}
	out.close();
	out.open("UserIdIndex.dat", ios::out | ios::binary | ios::trunc);
	int len = user.size();
	for (int i = 0; i < len; i++)
	{
		// 编号暂时是整型，如果是string，请用下面的代码
		char s[100];
		for (int j = 0; j < user[i].id.size(); j++) {
			s[j] = user[i].id[j];
		}
		out.write(s,avglen);
		
		/*int num = user[i].num;
		char s[100];
		SearchTool::itob(num, s);
		out.write(s, 4);*/

		//地址
		long idx = i * size;
		SearchTool::ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
	out.open("UserNameIndex.dat", ios::out | ios::binary | ios::trunc);
	//int len = book.size();
	for (int i = 0; i < len; i++)
	{

		char s[100];
		for (int j = 0; j < user[i].realname.size(); j++)
			s[j] = user[i].name[j];
		out.write(s, avglen);

		//地址
		long idx = i * size;
		SearchTool::ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
}
int main()
{
	//clock_t time = clock();
	//print();
	//cout << double(clock() - time) / CLOCKS_PER_SEC << endl;
	//time = clock();
	//read();
	//string s1 = "2111", s2 = "1112";
	//cout << (s1 > s2) << endl;
	//print();
	//read();
	//cout << double(clock() - time) / CLOCKS_PER_SEC << endl;

	/*long a = 10;
	int b = 12;
	float c = 4.5;
	char tmp[10];*/

	/*SearchTool::ltob(a, tmp);
	a = SearchTool::btol(tmp);
	SearchTool::itob(b, tmp);
	b = SearchTool::btoi(tmp);
	SearchTool::ftob(c, tmp);
	c = SearchTool::btof(tmp);
	cout << c << endl;*/

	//SearchTool::SearchName("aa");

	/*vector<Book> book=SearchTool::SearchBookNum(10);
	Book book1 = book.front();
	cout << book1.name<<"    "<<book1.id;*/

	vector<Book> book;
	Book book1;
	book1.id = "10000010";
	book1.author = "郑莉 董渊 何江舟";
	book1.name = "C++语言课程设计";
	book1.category = "计算机科学与技术";
	book1.num = 123;
	book1.press = "清华大学出版社";
	book1.price = 49.00;
	book1.type = false;
	book1.pubdate = 20100904;
	book.push_back(book1);
	GenerateBookData(book);
	
	string name = "C++语言课程设计";
	string id = "10000010";
	vector<Book> book3 = SearchTool::SearchBookId(id);
	Book book2 = book3.front();
	std::cout << book2.name << "    " << book2.id<<endl;

	//vector<User> user;
	//User user1;
	//user1.id = "1710021048";
	//user1.name = "左云浩";
	//user1.major = "环境工程";
	//user1.age = 21;
	//user1.email = "943271361@qq.com";
	//user1.grade = "2017级";
	//user1.phone = "17685780726";
	//user1.pwd = "12345678";
	//user1.realname = "左云浩";
	//user1.sex[2] = { 'm' };
	//user.push_back(user1);
	//GenerateUserData(user);
	//string id = "17100021048";
	//User user2 = SearchTool::SearchUserId(id);
	//std::cout << user2.name << endl;

	/*thread th1(cal);
	thread th2(cal);

	th1.join();
	th2.join();*/

	return 0;
}

