#include "pch.h"
#include "ModifyTool.h"

// �޸�ĳ����
void ModifyTool::ChangeBookFile(pair<Book, long> book)
{
	ofstream out(BookFile, ios::out | ios::binary);

	out.seekp(book.second, ios::beg);
	bookdown(&book.first, (fstream*)(&out));
	out.close();
}

// ����ĳ����
void ModifyTool::AddBookFile(Book book)
{
	fstream io(BookFile, ios::out | ios::binary | ios::in);
	char * addr;
	long addr_l = 0;
	char mask[avglen];
	char tmp[500];
	memset(mask, -1, avglen);
	//�����鱾������Ϣ
	while (!io.eof())
	{
		io.read(tmp, avglen);
		//�鿴�Ƿ�����ɾ������Ϣ
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
	//�����������
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

// ����ĳ����
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

// �޸�ĳ����
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

// �޸�ĳ���û�
void ModifyTool::ChangeUserFile(pair<User, long> user)
{
	fstream io(UserFile, ios::in | ios::out | ios::binary);

	io.seekg(user.second, ios::beg);
	userdown(&user.first, &io);

	io.close();
}

//����ĳ���û�
void ModifyTool::AddUserFile(User user)
{
	fstream io(UserFile, ios::in | ios::out | ios::binary);
	char tmp[user_info_size + 5];
	char mask[user_avglen + 5];
	long addr = -1;

	memset(mask, -1, user_avglen);

	while (!io.eof())
	{
		io.read(tmp, user_info_size);
		if (cmp(tmp, mask, user_avglen))
		{
			addr = io.tellg();
			break;
		}
	}
	io.seekg(ios::end, ios::beg);
	if (addr == -1)
		addr = io.tellg();

	io.seekp(addr, ios::beg);
	userdown(&user, &io);

	io.close();
}


ModifyTool::ModifyTool()
{
}


ModifyTool::~ModifyTool()
{
}
