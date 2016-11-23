#ifndef READER_H
#define READER_H
#include<iostream>
#include<string>
#include"book.h"

using namespace std;
#define MAX_READER 100
#define MAX_BORROW 3
class Reader
{
public:
	Reader();
	void add_reader1(string,int,string);//添加读者基本信息>>姓名、编号、电话——欠款、借书数默认

	void display1();//显示读者基本信息
	void display2();//显示读者的借书信息

	void input_name(string);
	string get_name();
	void input_num(int);
	int get_num();
	void input_tel(string);
	string get_tel();
	void set_br_sum();//增加借书数量
 	void cut_br_sum();//减少借书数量
	int get_br_sum();
	void input_debt(double);
	double get_debt();

	int br_book[MAX_BORROW+1];
private:
	string name;
	int number;
	string tel_num;
	int br_sum;//借阅书的总数
	double debt;//欠款额
	int b_year;//时间
	int b_month;
	int b_day;
	int re_year;
	int re_month;
	int re_day;
 
};
#endif