#ifndef MANAGE_H
#define MANEGE_H
#include"book.h"
#include"reader.h"
#include<iostream>
#include<string>
using namespace std;
class BookRecord
{
public:
	void set_count()//图书册数统计初始化
	{
		count=0;
	}
	void bookadd();
	void bookdelete();
	void bookshow();
	void bookfind();
	int checkbook(int);//检查书是否存在、返回书号

	void reader_handle();//会员操作函数

	void manage();//管理员操作函数

	void readeradd();//
	void readershow();
	int checkreader(int);//检查读者是否存在、返回读者号
	void borrow_book();//
	void return_book();//

	void readerdelete();//
	void set_re_count()//读者人数统计初始化
	{
		re_count=0;
	}
private:
	Book book[MAX_BOOK];//图书
	int count;

	Reader reader[MAX_READER];//读者
	int re_count;
};
#endif