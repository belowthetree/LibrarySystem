#include "pch.h"
#include "GenerateData.h"
#include "SearchTool.h"
#include <fstream>


void GenerateData::CreateBook(vector<Book> book)
{
	// һ��������ݳ��ȣ�ǰ���� string ����ʱ�涨����Ϊ avglen
	int size = book_info_size;
	long addr = 0;
	fstream out(BookFile, ios::out | ios::binary | ios::app);
	addr = out.tellp();
	for (vector<Book>::iterator it = book.begin(); it != book.end(); it++)
	{
		// �洢�鱾��Ϣ����϶࣬���� Tool.cpp ��
		bookdown(&(*it), &out);
	}
	out.close();
	out.open(BookIdIndexFile, ios::out | ios::binary | ios::app);
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

			s[0] = 0;
			out.write(s, 1);
		}
	}
	out.close();
	addr = tmp_addr;
	out.open(BookNameIndexFile, ios::out | ios::binary | ios::app);
	for (int i = 0; i < len; i++)
	{
		char s[100];
		out.write(book[i].name.c_str(), avglen);

		//��ַ
		long idx = addr * size;
		ltob(idx, s);
		out.write(s, sizeof(long));
	}
	out.close();
}

// �Ḳ��ԭ���ļ�
void GenerateData::CreateUser(vector<User> user)
{
	// ���� Uer ����������Ҫ���ֽ���
	int size = user_info_size;
	ofstream out("User.dat", ios::out | ios::binary | ios::trunc);
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

		out.write((*it).sex, 1);
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
