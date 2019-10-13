#pragma once
#include<vector>
#include"Data.h"
using namespace std;

class GenerateData
{
public:	
	static void CreateBook(vector<Book> book);
	static void CreateUser(vector<User> user);
	
public:
	GenerateData();
	~GenerateData();
};

