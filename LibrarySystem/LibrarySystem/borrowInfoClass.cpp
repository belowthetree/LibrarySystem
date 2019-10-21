#include <cstring>
#include"borrowInfoClass.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>
static long SumOfBorrowInfo = 0;		//���ļ�¼������

void ReadInfo()
{
	BorrowInfo myBorrowInfo;
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "��ȡʧ��";
	}
	while (file.read((char *)&myBorrowInfo,sizeof(myBorrowInfo))) { //һֱ�����ļ�����
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
		cout << "��ȡʧ��";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //һֱ�����ļ�����
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "��ȡʧ��";
	}
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //һֱ�����ļ�����
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
		cout << "������Ϣ����ʧ��";
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
	//strcpy(OneTimeBorrow.backDate,"2019-10-21");//Ӧ�ù黹���� 
	OneTimeBorrow.isBack = 0;//0��ʾδ�黹 
	file.write((char*)(&OneTimeBorrow), sizeof(OneTimeBorrow));
	SumOfBorrowInfo++;
	file.close();
	cout << "������Ϣ����ɹ�";
}

void ReadInfoById(char* TmpId){
	BorrowInfo TmpmyBorrowInfo;
	SumOfBorrowInfo = 0;
	ifstream fileCount("borrowInfo.dat", ios::in | ios::binary);
	if (!fileCount)
	{
		cout << "��ȡʧ��";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //һֱ�����ļ�����
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "��ȡʧ��";
	}
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //һֱ�����ļ�����
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

void ReadEndInfo(){//�д�����
	BorrowInfo TmpmyBorrowInfo;
	SumOfBorrowInfo = 0;
	ifstream fileCount("borrowInfo.dat", ios::in | ios::binary);
	if (!fileCount)
	{
		cout << "��ȡʧ��";
	}
	while (fileCount.read((char *)&TmpmyBorrowInfo,sizeof(TmpmyBorrowInfo))) { //һֱ�����ļ�����
			SumOfBorrowInfo++;
	}
	fileCount.close();
	BorrowInfo* myBorrowInfo = new BorrowInfo[SumOfBorrowInfo];
	int* endInfo = new int[SumOfBorrowInfo];
	ifstream file("borrowInfo.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "��ȡʧ��";
	}
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	char nowDate[20];
	sprintf(nowDate, "%4d-%02d-%02d\n", sys.wYear, sys.wMonth, sys.wDay);
	int count = 0;
	while (file.read((char *)&myBorrowInfo[count],sizeof(myBorrowInfo[count]))) { //һֱ�����ļ�����
		endInfo[count] = strcmp(nowDate,myBorrowInfo[count].backDate);
		//nowDate>backDate����>0��ʾ�Ѿ����� 
		if(myBorrowInfo[count].isBack==1){
			endInfo[count]=-1;//ʹ��endInfo����0����
			continue;
		}//0��ʾδ�黹,1��ʾ�Ѿ��黹 
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
	//������� �ɹ� 
	/*char userId[]="111467423";
	char userName[]="111467423AAA";
	char bookId[]="114216743BBB";
	char bookName[]="AS167414D66345";
	SaveInfo(userId,userName,bookId,bookName);*/
	
	//��ȡ���� �ɹ� 
	/*ReadInfo();//��ʾ���������ʷ(������ʾ)
	ReverseReadInfo();//��ʾ���½�����ʷ(������ʾ)*/
	
	//��ʾ����ͼ����� �ɹ� 
	//ReadEndInfo();
	
	//�����û�id�鿴������ʷ���� �ɹ� 
	/*char TmpId[]="1114423";
	ReadInfoById(TmpId);*/
	
	//����̨���� 
	/*string TmpEnd;
	cin >> TmpEnd;*/
	
	return 0;
}
