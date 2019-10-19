#include "pch.h"
#include "ModifyTool.h"


void ModifyTool::ChangeBookFile(pair<Book, long> book)
{
	ofstream out(BookFile, ios::out | ios::binary);

	out.seekp(book.second, ios::beg);
	bookdown(&book.first, (fstream*)(&out));
	out.close();
}

void ModifyTool::AddBookFile(Book book)
{
	fstream io(BookFile, ios::out | ios::binary | ios::in);
	char * addr;
	long addr_l = 0;
	char mask[avglen];
	char tmp[500];
	memset(mask, -1, avglen);
	//搜索书本具体信息
	while (!io.eof())
	{
		io.read(tmp, avglen);
		//查看是否有已删除的信息
		if (cmp(tmp, mask, avglen))
		{
			io.seekg(-avglen, ios::cur);
			break;
		}
		io.seekg(book_info_size - avglen, ios::cur);
	}
	addr_l = io.tellg();
	ltob(addr_l, addr);
	bookdown(&book, &io);
	io.close();
	//添加书名索引
	io.open(BookNameIndexFile, ios::out | ios::binary | ios::in);
	while (!io.eof())
	{
		io.read(tmp, avglen);
		if (cmp(tmp, mask, avglen))
		{
			io.seekg(-avglen, ios::cur);
			break;
		}
		io.seekg(sizeof(long), ios::cur);
	}
	io.write(book.name.c_str(), avglen);
	io.write(addr, sizeof(long));
	io.close();
}

void ModifyTool::AddBookIdFile(BookIdIndex bookid)
{
	fstream io(BookIdIndexFile, ios::in | ios::out | ios::binary);
	char tmp[500];
	long addr = -1;
	char mask[avglen + 5];
	memset(mask, -1, avglen + 5);

	while (!io.eof())
	{
		io.read(tmp, book_id_size);
		if (SearchTool::cmp(tmp, mask, avglen))
		{
			io.seekg(-book_id_size, ios::cur);
			break;
		}
	}
	addr = io.tellg();
	io.seekp(addr, ios::beg);

	io.write(bookid.id, avglen);
	ltob(bookid.index, tmp);
	io.write(tmp, sizeof(long));
	io.write(bookid.isBorrowed, 1);

	io.close();
}

void ModifyTool::ChangeBookIdFile(BookIdIndex bookid, char preid[])
{
	fstream io(BookIdIndexFile, ios::in | ios::out | ios::binary);
	char tmp[500];
	char tmp_addr[20];

	while (!io.eof())
	{
		io.read(tmp, book_id_size);
		if (SearchTool::cmp(tmp, preid, avglen))
		{
			io.seekg(-book_id_size, ios::cur);
			long addr = io.tellg();
			io.seekp(addr, ios::beg);

			io.write(bookid.id, avglen);
			io.seekp(sizeof(long));
			io.write(bookid.isBorrowed, 1);
			break;
		}
	}
	io.close();
}



ModifyTool::ModifyTool()
{
}


ModifyTool::~ModifyTool()
{
}
