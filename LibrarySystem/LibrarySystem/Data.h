#pragma once
#include<string>
#include<fstream>

using namespace std;
// 书籍信息
const int avglen = 30;
const int book_info_size = 5 * avglen + sizeof(long) + sizeof(int) * 2 + sizeof(float);
const int book_id_size = avglen + sizeof(long) + 1;
const int book_name_size = sizeof(long) + avglen;
const string BookFile = "Book.dat";
const string BookNameIndexFile = "BookNameIndex.dat";
const string BookIdIndexFile = "BookIdIndex.dat";

struct Book
{
	char id[avglen];			//ISBN
	char name[avglen];		//书名
	char author[avglen];		//作者
	char press[avglen];		//出版社
	char category[avglen];	//学科
	long pubdate;		//出版日期
	int borrowNum;		//当前借出的数量
	int num;			//当前数量
	float price;		//价格
};

struct BookNameIndex
{
	char name[avglen];	//书名
	long index;			//地址
};

struct BookIdIndex
{
	char id[avglen];			//书本编号
	long index;		//地址
	char isBorrowed[1];	//是否借出
};

// 用户信息
const string UserFile = "User.dat";
const int user_avglen = 30;
const int user_info_size = user_avglen * 7 + sizeof(int) + 2;

struct User
{
	char id[user_avglen];		//学工号
	char realName[user_avglen];	//真实姓名
	char major[user_avglen];	//专业
	char grade[user_avglen];	//年纪
	char pwd[user_avglen];		//密码
	char phone[user_avglen];	//手机
	char email[user_avglen];	//邮箱
	char sex[2];			 //性别
	int age;					//年龄
};

void ltob(long n, char * s);
void itob(int n, char * s);
void ftob(float n, char *s);
long btol(char *s);
int btoi(char *s);
float btof(char *s);
void stoc(string str, char *s);
bool cmp(char*s1, char*s2, int size);

// 将输入的书籍写入文件
void bookdown(Book* book, fstream*io);

// 从字符串中提取用户信息
User userup(char *content);
// 将用户信息写入文件
void userdown(User *user, fstream *io);

// 返回字符串中的 BookIdIndex
BookIdIndex idup(char *content);

// 切分工具，将 s1 从 offset 开始 count 个字符放入 s2
void split(char * s1, char *s2, int offset, int count);