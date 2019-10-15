#pragma once
#include <string>
#include <string.h>
using namespace std;

class borrowInfo {
private:
	string bookId;
	string bookName;
	string userName;
	string userId;
	string startTime;
	string endTime;
	string realBackTime;
	bool reback;
public:
	borrowInfo(string bookId_, string bookName_, string userName_, string userId_
		, string startTime_, string endTime_, string realBackTime_, bool reback_) {
		bookId = bookId_;
		bookName = bookName_;
		userName = userName_;
		userId = userId_;
		startTime = startTime_;
		endTime = endTime_;
		realBackTime = realBackTime_;
		reback = reback_;
	}
	string GetBookId() {
		return bookId;
	}
	string GetBookName() {
		return bookName;
	}
	string GetUserName() {
		return userName;
	}
	string GetStartTime() {
		return startTime;
	}
	string GetEndTime() {
		return endTime;
	}
	string GetRealBackTime() {
		return realBackTime;
	}
	bool GetReback() {
		return reback;
	}
	void SetBookId(string bookId_) {
		bookId = bookId_;
	}
	void SetBookName(string bookName_) {
		bookName = bookName_;
	}
	void SetUserName(string userName_) {
		userName = userName_;
	}
	void SetUserId(string userId_) {
		userId = userId_;
	}
	void SetStartTime(string startTime_) {
		startTime = startTime_;
	}	
	void SetEndTime(string endTime_) {
		endTime = endTime_;
	}
	void SetRealBackTime(string realBackTime_) {
		realBackTime = realBackTime_;
	}
	void SetReback(bool reback_) {
		reback = reback_;
	}
};

