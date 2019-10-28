#include "pch.h"
#include "Data.h"
// 下方为长整型、整型、浮点型与字符串的转换
void ltob(long n, char * s)
{
	unsigned mask = 0xff;
	int len = sizeof(long);
	for (int i = 0; i < len; i++)
	{
		s[i] = (mask & n);
		n = (n >> 8);
	}
}

void itob(int n, char * s)
{
	unsigned mask = 0xff;
	int len = sizeof(int);
	for (int i = 0; i < len; i++)
	{
		s[i] = (mask & n);
		n = (n >> 8);
	}
}

void ftob(float n, char *s)
{
	unsigned mask = 0xff;
	unsigned * tmp = (unsigned *)& n;
	int len = sizeof(float);
	for (int i = 0; i < len; i++)
	{
		s[i] = (mask & *tmp);
		(*tmp) = (*tmp >> 8);
	}
}

long btol(char *s)
{
	long tmp = 0;
	unsigned mask = 0xff;
	int len = sizeof(long);
	for (int i = 0; i < len; i++)
	{
		tmp = (tmp << 8);
		tmp = tmp + unsigned char(s[len - i - 1]);
	}
	return tmp;
}

int btoi(char *s)
{
	int tmp = 0;
	unsigned mask = 0xff;
	int len = sizeof(int);
	for (int i = 0; i < len; i++)
	{
		tmp = (tmp << 8);
		tmp = tmp + unsigned char(s[len - i - 1]);
	}
	return tmp;
}

float btof(char *s)
{
	unsigned tmp = 0;
	unsigned mask = 0xff;
	int len = sizeof(int);
	for (int i = 0; i < len; i++)
	{
		tmp = (tmp << 8);
		tmp = tmp + unsigned char(s[len - i - 1]);
	}
	float *res = (float*)&tmp;
	return *res;
}

void stoc(string str, char *s) {  //string 转为 char
	int i;
	for (i = 0; i < str.length(); ++i)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
}

bool cmp(char * s1, char * s2, int size)
{
	for (int i = 0; i < size; i++)
		if (s1[i] != s2[i])
			return false;
	return true;
}

void bookdown(Book* it, fstream*io)
{
	char tmp[200];
	//前五项 string ，长度规定为 avglen
	io->write((*it).id, avglen);
	io->write((*it).name, avglen);
	io->write((*it).author, avglen);
	io->write((*it).press, avglen);
	io->write((*it).category, avglen);

	//其他数据依次写入
	ltob((*it).pubdate, tmp);
	io->write(tmp, sizeof(long));
	itob((*it).borrowNum, tmp);
	io->write(tmp, 4);
	itob((*it).num, tmp);
	io->write(tmp, 4);
	ftob((*it).price, tmp);
	io->write(tmp, sizeof(float));
}

User userup(char *content)
{
	User tmp;
	char t[avglen + 5];

	split(content, t, 0, avglen);
	strcpy_s(tmp.id, t);
	split(content, t, avglen * 1, avglen);
	strcpy_s(tmp.realName, t);
	split(content, t, avglen * 2, avglen);
	strcpy_s(tmp.major, t);
	split(content, t, avglen * 3, avglen);
	strcpy_s(tmp.grade, t);
	split(content, t, avglen * 4, avglen);
	strcpy_s(tmp.pwd, t);
	split(content, t, avglen * 5, avglen);
	strcpy_s(tmp.phone, t);
	split(content, t, avglen * 6, avglen);
	strcpy_s(tmp.email, t);
	split(content, t, avglen * 7, 2);
	strcpy_s(tmp.sex, t);
	split(content, t, avglen * 7 + 2, sizeof(int));
	tmp.age = btoi(t);
	return tmp;
}

void userdown(User *user, fstream *io)
{
	char tmp[user_avglen + 5];
	io->write(user->id, user_avglen);
	io->write(user->realName, user_avglen);
	io->write(user->major, user_avglen);
	io->write(user->grade, user_avglen);
	io->write(user->pwd, user_avglen);
	io->write(user->phone, user_avglen);
	io->write(user->email, user_avglen);
	io->write(user->sex, 2);
	itob(user->age, tmp);
	io->write(tmp, sizeof(int));
}

BookIdIndex idup(char *content)
{
	BookIdIndex id;
	char tmp[avglen];
	split(content, id.id, 0, avglen);
	split(content, tmp, avglen, sizeof(long));
	id.index = btol(tmp);
	split(content, tmp, avglen + sizeof(long), 1);
	id.isBorrowed[0] = tmp[0];
	return id;
}

void split(char * s1, char *s2, int offset, int count)
{
	for (int k = 0, i = offset; k < count; i++)
		s2[k++] = s1[i];
	s2[count] = '\0';
}