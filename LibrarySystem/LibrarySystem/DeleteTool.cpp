#include "pch.h"
#include "DeleteTool.h"
#include "SearchTool.h"

char DeleteTool::book_file[30] = "t.dat";
char DeleteTool::bookName_file[30] = "ttt.dat";
char DeleteTool::bookId_file[30] = "tt.dat";

// ɾ��ĳ����
bool DeleteTool::DeleteBookFile(long addr)
{
	fstream io(BookFile, ios::in | ios::out | ios::binary);
	io.seekg(addr, ios::beg);
	char tmp[300];
	Book book;
	if (!io.eof())
	{
		io.read(tmp, SearchTool::bookInfoSize);
		book = SearchTool::bookup(tmp);
		if (book.num > 1)
		{
			io.seekp(addr, ios::beg);
			book.num--;
			bookdown(&book, &io);
		}
		else
		{
			io.seekp(addr, ios::beg);
			char t[avglen];
			memset(t, -1, avglen);
			io.write(t, 1);
		}
	}
	else
	{
		io.close();
		return false;
	}
	ClearBookName(addr);
	ClearBookId(addr);
	io.close();
	return false;
}

// ɾ��ĳ����
void DeleteTool::DeleteBookIdFile(char id[avglen])
{
	fstream io(BookIdIndexFile, ios::in | ios::out | ios::binary);
	char tmp[500];

	while (!io.eof())
	{
		io.read(tmp, book_id_size);
		if (SearchTool::cmp(tmp, id, avglen))
		{
			long addr = io.tellg();
			addr -= book_id_size;
			io.seekp(addr, ios::beg);
			memset(tmp, -1, avglen);
			io.write(tmp, avglen);
			break;
		}
	}
	
	io.close();
}

// ������������еĶ�Ӧ������
void DeleteTool::ClearBookName(long addr)
{
	fstream io(BookFile, ios::in | ios::out | ios::binary);
	long t;
	io.seekg(0, ios::beg);//��λ����ͷ
	io.seekp(0, ios::beg);
	char tmp[avglen + sizeof(long) + 5];
	char tmp_addr[avglen];

	ltob(addr, tmp_addr);

	while (!io.eof())
	{
		io.read(tmp, book_name_size);
		// �� tmp ����ȡ����ַ������ tmp������ο� split ����
		SearchTool::split(tmp, tmp, avglen, sizeof(long));

		if (SearchTool::cmp(tmp, tmp_addr, avglen))// �жϵ�ַ�Ƿ�һ��
		{
			// ��ȡ����
			long tmp_addr = io.tellg();
			io.seekp(tmp_addr - book_name_size, ios::beg);
			// �� ID ȫ���� -1 ��Ϊɾ����־
			memset(tmp, -1, avglen + 5);
			io.write(tmp, avglen + sizeof(long));
			break;
		}
	}
	io.close();
}

// ���ĳ�������б������
void DeleteTool::ClearBookId(long addr)
{
	fstream io(BookIdIndexFile, ios::in | ios::out | ios::binary);
	long t;
	while (!io.eof())
	{
		char tmp[avglen + sizeof(long) + 5];
		io.read(tmp, book_id_size);
		SearchTool::split(tmp, tmp, avglen, sizeof(long));
		t = btol(tmp);
		if (t == addr)
		{
			// ��ȡ����
			long tmp_addr = io.tellg();
			io.seekp(tmp_addr - book_id_size, ios::beg);
			// ȫ���� -1
			memset(tmp, -1, avglen + 5);
			io.write(tmp, avglen + sizeof(long));
			break;
		}
	}
	io.close();
}

DeleteTool::DeleteTool()
{
}

DeleteTool::~DeleteTool()
{
}
