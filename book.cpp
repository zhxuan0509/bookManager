#include<iostream>
#include<string>
#include"book.h"
using namespace std;
Book ::Book()
{
	bookname="��";
	author="��";
	bookID=0;
	bookcompany="��";
	flag=1;
}
void Book ::add_book(string bookn,string au,int Id,string bookc)
{
	bookname=bookn;
	author=au;
	bookID=Id;
	bookcompany=bookc;
	flag=1;
}

void Book ::input_bookname(string bookn)
{
	bookname=bookn;
}
string Book ::get_bookname()
{
	return bookname;
}

void Book ::input_author(string au)
{
	author=au;
}
string Book ::get_author()
{
	return author;
}

void Book ::input_bookID(int id)
{
	bookID=id;
}
int Book ::get_bookID()
{
	return bookID;
}

void Book ::input_bookcompany(string bookc)
{
	bookcompany=bookc;
}
string Book ::get_bookcompany()
{
	return bookcompany;
}

void Book ::set_flag(int a)
{
	flag=a;
}
int Book ::get_flag()
{
	return flag;
}

void Book ::display()
{
	cout<<"������"<<bookname<<"  ���ߣ�"<<author<<"  ��ţ�"<<bookID<<"  �����磺"<<bookcompany<<" ͼ���־��"<<flag<<endl;
}
