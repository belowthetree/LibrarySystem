#include <cstring>
#include"borrowInfoClass.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>
static long SumOfBorrowInfo = 0;		//借阅记录总条数

void ReadInfo()
{
	BorrowInfo myBorrowInfo;
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "读取失败";
	}
	while (file.read((char *)&myBorrowInfo,sizeof(myBorrowInfo))) { //一直读到文件结束
		cout << myBorrowInfo.userId << " " << myBorrowInfo.userName << " " << myBorrowInfo.bookId << "	" 
			<< myBorrowInfo.bookName << " " <<myBorrowInfo.borrowDate << " " 
			<<myBorrowInfo.backDate<< " " << endl;
			SumOfBorrowInfo++;
	}
	file.close();
}

void ReverseReadInfo()
{
	BorrowInfo TmpmyBorrowInfo;
	SumOfBorrowInfo = 0;
	ifstream fileCount("borrowInfo.dat", ios::in | ios::binary);
	if (!fileCount)
	{
		cout << "读取失败";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //一直读到文件结束
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "读取失败";
	}
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //一直读到文件结束
		count++;
	}
	file.close();
	int TmpCount = count;
	for (TmpCount = count-1; TmpCount >=0; TmpCount--) {
		cout << myBorrowInfo[TmpCount].userId << " " << myBorrowInfo[TmpCount].userName << " " 
			<< myBorrowInfo[TmpCount].bookId << "	" << myBorrowInfo[TmpCount].bookName << " " 
			<<myBorrowInfo[TmpCount].borrowDate << " " <<myBorrowInfo[TmpCount].backDate << " "
			<< endl;
	}
	delete[] myBorrowInfo;
}

void SaveInfo(char* userId, char* userName, char* bookId, char* bookName)
{
	BorrowInfo OneTimeBorrow;
	int avglen = 30;
	char borrowDate[20];
	char backDate[20];
	char userid[30];
	char username[30];
	char bookid[30];
	char bookname[30];
	strcpy(userid,userId);
	strcpy(username,userName);
	strcpy(bookid,bookId);
	strcpy(bookname,bookName);
	ofstream file("borrowInfo.dat", ios::out | ios::app | ios::binary);
	if (!file)
	{
		cout << "借阅信息保存失败";
	}
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	sprintf(borrowDate, "%4d-%02d-%02d\n", sys.wYear, sys.wMonth, sys.wDay);
	if ((sys.wMonth + 1) > 12) {
		sys.wYear += 1;
		sys.wMonth = 1;
	}
	else {
		sys.wMonth += 1;
	}
	sprintf(backDate, "%4d-%02d-%02d\n", sys.wYear, sys.wMonth, sys.wDay);

	strcpy(OneTimeBorrow.userId,userid);
	strcpy(OneTimeBorrow.userName, username);
	strcpy(OneTimeBorrow.bookId,bookid);
	strcpy(OneTimeBorrow.bookName,bookname);
	strcpy(OneTimeBorrow.borrowDate,borrowDate);
	strcpy(OneTimeBorrow.backDate,backDate);
	//strcpy(OneTimeBorrow.backDate,"2019-10-21");//应该归还日期 
	OneTimeBorrow.isBack = 0;//0表示未归还 
	file.write((char*)(&OneTimeBorrow), sizeof(OneTimeBorrow));
	SumOfBorrowInfo++;
	file.close();
	cout << "借阅信息保存成功";
}

void ReadInfoById(char* TmpId){
	BorrowInfo TmpmyBorrowInfo;
	SumOfBorrowInfo = 0;
	ifstream fileCount("borrowInfo.dat", ios::in | ios::binary);
	if (!fileCount)
	{
		cout << "读取失败";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //一直读到文件结束
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "读取失败";
	}
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //一直读到文件结束
		count++;
	}
	file.close();
	int TmpCount = count;
	for (TmpCount = count-1; TmpCount >=0; TmpCount--) {
		if(strcmp(myBorrowInfo[TmpCount].userId,TmpId)==0)
		{
			cout << myBorrowInfo[TmpCount].userId << " " << myBorrowInfo[TmpCount].userName << " " 
			<< myBorrowInfo[TmpCount].bookId << "	" << myBorrowInfo[TmpCount].bookName << " " 
			<<myBorrowInfo[TmpCount].borrowDate << " " <<myBorrowInfo[TmpCount].backDate<< endl;
			}
	}
	delete[] myBorrowInfo;
};

void ReadEndInfo(){//有待测试
	BorrowInfo TmpmyBorrowInfo;
	SumOfBorrowInfo = 0;
	ifstream fileCount("borrowInfo.dat", ios::in | ios::binary);
	if (!fileCount)
	{
		cout << "读取失败";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //一直读到文件结束
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	int* endInfo = new int[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "读取失败";
	}
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	char nowDate[20];
	sprintf(nowDate, "%4d-%02d-%02d\n", sys.wYear, sys.wMonth, sys.wDay);
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //一直读到文件结束
		endInfo[count] = strcmp(nowDate,myBorrowInfo[count].backDate);
		//nowDate>backDate返回>0表示已经超期 
		if(myBorrowInfo[count].isBack==1){
			endInfo[count]=-1;//使得endInfo大于0即可
			continue;
		}//0表示未归还,1表示已经归还 
		count++;
	}
	file.close();
	int TmpCount = count;
	for (TmpCount = count-1; TmpCount >=0; TmpCount--) {
		if(endInfo[TmpCount]>0)
		{
			cout << myBorrowInfo[TmpCount].userId << " " << myBorrowInfo[TmpCount].userName << " " 
			<< myBorrowInfo[TmpCount].bookId << "	" << myBorrowInfo[TmpCount].bookName << " " 
			<<myBorrowInfo[TmpCount].borrowDate << " " <<myBorrowInfo[TmpCount].backDate<< endl;
			}
	}
	delete[] myBorrowInfo;
	delete[] endInfo;
};

int main(){
	//保存测试 成功 
	/*char userId[]="111467423";
	char userName[]="111467423AAA";
	char bookId[]="114216743BBB";
	char bookName[]="AS167414D66345";
	SaveInfo(userId,userName,bookId,bookName);*/
	
	//读取测试 成功 
	/*ReadInfo();//显示最早借阅历史(正序显示)
	ReverseReadInfo();//显示最新借阅历史(倒序显示)*/
	
	//显示超期图书测试 成功 
	//ReadEndInfo();
	
	//按照用户id查看借阅历史测试 成功 
	/*char TmpId[]="1114423";
	ReadInfoById(TmpId);*/
	
	//控制台保留 
	/*string TmpEnd;
	cin >> TmpEnd;*/
	
	return 0;
}
