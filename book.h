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
	string bookname;//书名
	string author;//作者
	int bookID;//书号
	string bookcompany;//出版社
	int flag;//图书标志：1代表在架上； 0 代表借出
};
#endif
