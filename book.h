#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
using namespace std;
#define MAX_BOOK 500
class Book
{
public:
	Book();
	void add_book(string,string,int,string);

	void del_book();
	void find_book();
	void display();

	void input_bookname(string);
	string get_bookname();
	void input_author(string);
	string get_author();
	void input_bookID(int);
	int get_bookID();
	void input_bookcompany(string);
	string get_bookcompany();
	void set_flag(int);
	int get_flag();
private:
	string bookname;//����
	string author;//����
	int bookID;//���
	string bookcompany;//������
	int flag;//ͼ���־��1�����ڼ��ϣ� 0 ������
};
#endif
