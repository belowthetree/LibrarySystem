#pragma once
#include<string>
#include<fstream>

using namespace std;
const int avglen = 30;
const int book_info_size = 5 * avglen + sizeof(long) + 1 + sizeof(int) * 2 + sizeof(float);
const string BookFile = "Book.dat";
const string BookNameIndexFile = "BookNameIndex";
const string BookIdIndexFile = "BookIdIndex";

struct Book
{
	string id;
	string name;
	string author;
	string press;		//出版社
	string category;	//学科
	bool type;
	long pubdate;
	int borrowNum;
	int num;
	float price;
};

struct BookNameIndex
{
	char name[avglen];
	long index;
};

struct BookNumIndex
{
	int num;
	long index;
};

const int user_avglen = 30;

struct User
{
	char nickName[user_avglen];
	char realName[user_avglen];
	char major[user_avglen];
	char grade[user_avglen];
	char pwd[user_avglen];
	char phone[user_avglen];
	char email[user_avglen];
	char sex;
	int age;
	long id;
};

void ltob(long n, char * s);
void itob(int n, char * s);
void ftob(float n, char *s);
long btol(char *s);
int btoi(char *s);
float btof(char *s);

void bookdown(Book* book, fstream*io);
