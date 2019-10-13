#include "pch.h"
#include "DeleteTool.h"
#include "SearchTool.h"

char DeleteTool::book_file[30] = "t.dat";
char DeleteTool::bookName_file[30] = "ttt.dat";
char DeleteTool::bookId_file[30] = "tt.dat";

bool DeleteTool::DeleteBook(long addr)
{
	fstream io(book_file, ios::in | ios::out | ios::binary);
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

void DeleteTool::ClearBookName(long addr)
{
	fstream io(bookName_file, ios::in | ios::out | ios::binary);
	long t;
	io.seekg(0, ios::beg);
	io.seekp(0, ios::beg);
	while (!io.eof())
	{
		char tmp[avglen + sizeof(long) + 5];
		io.read(tmp, sizeof(long) + avglen);
		SearchTool::split(tmp, tmp, avglen, sizeof(long));
		t = btol(tmp);
		if (t == addr)
		{
			memset(tmp, -1, avglen + 5);
			io.write(tmp, avglen + sizeof(long));
			break;
		}
		io.seekp(avglen + sizeof(long), ios::cur);
	}
	io.close();
}

void DeleteTool::ClearBookId(long addr)
{
	fstream io(bookId_file, ios::in | ios::out | ios::binary);
	long t;
	while (!io.eof())
	{
		char tmp[avglen + sizeof(long) + 5];
		io.read(tmp, sizeof(long) + avglen);
		SearchTool::split(tmp, tmp, avglen, sizeof(long));
		t = btol(tmp);
		if (t == addr)
		{
			memset(tmp, -1, avglen + 5);
			io.write(tmp, avglen + sizeof(long));
			break;
		}
		io.seekp(avglen + sizeof(long), ios::cur);
	}
	io.close();
}

DeleteTool::DeleteTool()
{
}


DeleteTool::~DeleteTool()
{
}
