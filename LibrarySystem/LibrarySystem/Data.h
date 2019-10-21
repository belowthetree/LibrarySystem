#pragma once
#include<string>
#include<fstream>

using namespace std;
// �鼮��Ϣ
const int avglen = 30;
const int book_info_size = 5 * avglen + sizeof(long) + sizeof(int) * 2 + sizeof(float);
const int book_id_size = sizeof(int) + sizeof(long) + 1;
const int book_name_size = sizeof(long) + avglen;
const string BookFile = "Book.dat";
const string BookNameIndexFile = "BookNameIndex";
const string BookIdIndexFile = "BookIdIndex";

struct Book
{
	string id;			//ISBN
	string name;		//����
	string author;		//����
	string press;		//������
	string category;	//ѧ��
	//bool type;			//
	long pubdate;		//��������
	int borrowNum;		//��ǰ���������
	int num;			//��ǰ����
	float price;		//�۸�
};

struct BookNameIndex
{
	char name[avglen];	//����
	long index;			//��ַ
};

struct BookIdIndex
{
	char id[avglen];			//�鱾���
	long index;		//��ַ
	char isBorrowed[1];	//�Ƿ���
};

// �û���Ϣ
const string UserFile = "User.dat";
const int user_avglen = 30;
const int user_info_size = user_avglen * 6 + sizeof(int) + sizeof(long) + 1;

struct User
{
	long id;					//ѧ����
	char realName[user_avglen];	//��ʵ����
	char major[user_avglen];	//רҵ
	char grade[user_avglen];	//���
	char pwd[user_avglen];		//����
	char phone[user_avglen];	//�ֻ�
	char email[user_avglen];	//����
	char sex[1];					//�Ա�
	int age;					//����
};

void ltob(long n, char * s);
void itob(int n, char * s);
void ftob(float n, char *s);
long btol(char *s);
int btoi(char *s);
float btof(char *s);
bool cmp(char*s1, char*s2, int size);

// ��������鼮д���ļ�
void bookdown(Book* book, fstream*io);

// ���ַ�������ȡ�û���Ϣ
User userup(char *content);
// ���û���Ϣд���ļ�
void userdown(User *user, fstream *io);

// �����ַ����е� BookIdIndex
BookIdIndex idup(char *content);

// �зֹ��ߣ��� s1 �� offset ��ʼ count ���ַ����� s2
void split(char * s1, char *s2, int offset, int count);