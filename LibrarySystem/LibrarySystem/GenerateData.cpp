#include "pch.h"
#include "GenerateData.h"
#include "SearchTool.h"
#include <fstream>
#include"NewDefine.h"

void GenerateData::CreateBook(vector<Book> book)
{
	// һ��������ݳ��ȣ�ǰ���� string ����ʱ�涨����Ϊ avglen
	int size = book_info_size;
	long addr = 0;
	fstream out(BookFile, ios::out | ios::binary | ios::trunc);
	addr = out.tellp();
	for (vector<Book>::iterator it = book.begin(); it != book.end(); it++)
	{
		// ��������ԭ���������
		(*it).num = rand() % 10 + 1;
		// �洢�鱾��Ϣ����϶࣬���� Tool.cpp ��
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

			//��ַ
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

		//��ַ
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
		//����д������
		//ǰ���� �ַ��� �����ȹ涨Ϊ user_avglen
		out.write((*it).id, user_avglen);
		out.write((*it).realName, user_avglen);
		out.write((*it).major, user_avglen);
		out.write((*it).grade, user_avglen);
		out.write((*it).pwd, user_avglen);
		out.write((*it).phone, user_avglen);
		out.write((*it).email, user_avglen);

		out.write((*it).sex, 2);
		//��Ϊ����û��ֱ�Ӵ�Ϊ�����ƣ�������ת��װ����ʱ���� tmp
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

		//��ַ
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