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
	void set_count()//ͼ�����ͳ�Ƴ�ʼ��
	{
		count=0;
	}
	void bookadd();
	void bookdelete();
	void bookshow();
	void bookfind();
	int checkbook(int);//������Ƿ���ڡ��������

	void reader_handle();//��Ա��������

	void manage();//����Ա��������

	void readeradd();//
	void readershow();
	int checkreader(int);//�������Ƿ���ڡ����ض��ߺ�
	void borrow_book();//
	void return_book();//

	void readerdelete();//
	void set_re_count()//��������ͳ�Ƴ�ʼ��
	{
		re_count=0;
	}
private:
	Book book[MAX_BOOK];//ͼ��
	int count;

	Reader reader[MAX_READER];//����
	int re_count;
};
#endif