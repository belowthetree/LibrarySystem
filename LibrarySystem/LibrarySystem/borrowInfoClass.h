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
	char borrowDate[20];//�������� 
	char backDate[20];//Ӧ�ù黹���� 
	char realBackDate[20];//ʵ�ʹ黹���� 
	int isBack;//�Ƿ�黹,0��ʾδ�黹,1��ʾ�Ѿ��黹 
};
void ReadInfo();//��ʾ���������ʷ(������ʾ)
void ReverseReadInfo();//��ʾ���½�����ʷ(������ʾ)
void SaveInfo(string userId, string userName,string bookId, string bookName);
void ReadEndInfo();//��ʾ����ͼ�� 
void ReadInfoById(char* TmpId);//�����û�id�鿴������ʷ