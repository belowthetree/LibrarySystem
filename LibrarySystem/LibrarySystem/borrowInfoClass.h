#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct BorrowInfo
{
	char userId[30];
	char userName[30];
	char bookId[30];
	char bookName[30];
	char borrowDate[20];//借阅日期 
	char backDate[20];//应该归还日期 
	char realBackDate[20];//实际归还日期 
	int isBack;//是否归还,0表示未归还,1表示已经归还 
};
void ReadInfo();//显示最早借阅历史(正序显示)
void ReverseReadInfo();//显示最新借阅历史(倒序显示)
void SaveInfo(string userId, string userName,string bookId, string bookName);
void ReadEndInfo();//显示超期图书 
void ReadInfoById(char* TmpId);//按照用户id查看借阅历史
