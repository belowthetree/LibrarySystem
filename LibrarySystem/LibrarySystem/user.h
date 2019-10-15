#pragma once
#include <string>
#include <string.h>
using namespace std;

const int avglen = 30;

struct User
{
	string id;
	string name;
	string realname;
	string major;		//专业
	string grade;	//年级
	string pwd;
	string phone;
	string email;
	int age;
	char sex[2];
};

struct UserNameIndex
{
	char name[avglen];
	long index;
};

struct UserNumIndex
{
	int num;
	long index;
};
//class User 
//{
//private:
//	string id;  //学号
//	string name;  //昵称
//	string realName; //真实姓名
//	string major; //专业
//	string grade; //年级
//	string pwd;  //密码
//	int age; //年龄
//	char sex; //性别
//	string phone; //手机号
//	string email; //邮箱
//public:
//	User(string id_, string name_, string realName_, string major_, string grade_
//		, string pwd_, int age_, char sex_, string phone_, string email_) {
//		id = id_;
//		name = name_;
//		realName = realName_;
//		major = major_;
//		grade = grade_;
//		pwd = pwd_;
//		age = age_;
//		sex = sex_;
//		phone = phone_;
//		email = email_;
//	}
//	string GetId() {
//		return id;
//	}
//	string GetName() {
//		return name;
//	}
//	string GetRealName() {
//		return realName;
//	}
//	string GetMajor() {
//		return major;
//	}
//	string GetGrade() {
//		return grade;
//	}
//	string GetPwd() {
//		return pwd;
//	}
//	int GetAge() {
//		return sex;
//	}
//	char GetSex() {
//		return sex;
//	}
//	string GetPhone() {
//		return phone;
//	}
//	string Getemail() {
//		return email;
//	}
//
//	void SetId(string id_) {
//		id = id_;
//	}
//	void SetName(string name_) {
//		name = name_;
//	}
//	void SetRealName(string realName_) {
//		realName = realName_;
//	}
//	void SetMajor(string major_) {
//		major = major_;
//	}
//	void SetGrade(string grade_) {
//		grade = grade_;
//	}
//	void SetPwd(string pwd_) {
//		pwd = pwd_;
//	}
//	void SetAge(int age_) {
//		age = age_;
//	}
//	void SetSex(int sex_) {
//		sex = sex_;
//	}
//	void SetPhone(string phone_) {
//		phone = phone_;
//	}
//	void SetEmail(string email_) {
//		email = email_;
//	}
//};
