#include "pch.h"
#include"Data.h"
// �·�Ϊ�����͡����͡����������ַ�����ת��
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

void bookdown(Book* it, fstream*io)
{
	char tmp[200];
	//ǰ���� string �����ȹ涨Ϊ avglen
	io->write((*it).id.c_str(), avglen);
	io->write((*it).name.c_str(), avglen);
	io->write((*it).author.c_str(), avglen);
	io->write((*it).press.c_str(), avglen);
	io->write((*it).category.c_str(), avglen);

	//������������д��
	ltob((*it).pubdate, tmp);
	io->write(tmp, sizeof(long));
	tmp[0] = (*it).type;
	io->write(tmp, 1);
	itob((*it).borrowNum, tmp);
	io->write(tmp, 4);
	itob((*it).num, tmp);
	io->write(tmp, 4);
	ftob((*it).price, tmp);
	io->write(tmp, 4);
}