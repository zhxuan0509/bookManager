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
	void add_reader1(string,int,string);//��Ӷ��߻�����Ϣ>>��������š��绰����Ƿ�������Ĭ��

	void display1();//��ʾ���߻�����Ϣ
	void display2();//��ʾ���ߵĽ�����Ϣ

	void input_name(string);
	string get_name();
	void input_num(int);
	int get_num();
	void input_tel(string);
	string get_tel();
	void set_br_sum();//���ӽ�������
 	void cut_br_sum();//���ٽ�������
	int get_br_sum();
	void input_debt(double);
	double get_debt();

	int br_book[MAX_BORROW+1];
private:
	string name;
	int number;
	string tel_num;
	int br_sum;//�����������
	double debt;//Ƿ���
	int b_year;//ʱ��
	int b_month;
	int b_day;
	int re_year;
	int re_month;
	int re_day;
 
};
#endif