#pragma once
#ifndef BOOK_H
#define BOOK_H
#include<iostream>//ʹ�ñ�׼���������
#include<sstream>//ʹ��string��
#include<iomanip>//��ʽ���
#define NULLID "0"//�궨��
using namespace std;//ʹ�����ռ�
class book
{
private:
	string bookName;//����
	string bookAuthor;//����
	string bookISBN;//ISBN��
	string type;//���
	int bookStatue;//�鼮״̬
	string bookPress;//������

public:
	book();//���캯��
	string getName()const;//�������
	string getbookAuthor()const;//�������
    string getbookISBN()const;//���ISBN
	string gettype()const;//�������
	string getbookPress()const;//��ó�����
	int getbookStatue()const;//��ȡ״̬
	
	void setName(string a);//�趨����
	void setAuthor(string b);//�趨����
	void setISBN(string c);//�趨ISBN��
	void settype(string d);//�趨����
	void setPress(string e);//�趨������
	void setStatue(int f);//�趨״̬

	void readBookInformation();//�����鼮��Ϣ����	
	void printBookInformation();//����鼮��Ϣ����
	void changeStatue();//�ж�״̬
	
	~book();//��������
	
};
#endif



