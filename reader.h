#pragma once
#ifndef READER_H
#define READER_H
#include<iostream>//ʹ�ñ�׼���������
#include<fstream>//ʹ���ļ���
#include<sstream>//ʹ��string��
using namespace std;//ʹ�����ռ�
class reader
{
private:
    string name;//����
    string number;//ѧ��
    string code;//����
public:
	reader(void);

	void setName(string n);//�趨����
	void setNumber(string nu);//�趨ѧ��
	void setCode(string c);//�趨����

	string getName()const;//�������
	string getNumber()const;//���ѧ��
	string getCode()const;//�������

	int getInformation();//��֤ѧ����Ϣ
	void reviseCode();//�޸�����
	void search();//������ѯ����
	void borrowBook();//�������麯��
	void returnBook();//�������麯��

	~reader(void);
};
#endif

