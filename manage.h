#pragma once
#ifndef MANAGE_H
#define MANAGE_H
#include<iostream>//ʹ�ñ�׼���������
#include<fstream>//ʹ���ļ���
#include<sstream>//ʹ��string��
using namespace std;//ʹ�����ռ�
class manage
{
private:
	string number;//��¼����
	string code;//����
public:
	manage();//Ĭ�Ϲ��캯��
	int getManage();//������¼����
	void reviseInformation();//�����޸���Ϣ����
	void deleteBook();//����ɾ���鼮����
    void add(); //��������鼮����
	void revise();//�����޸��鼮��Ϣ����
	void addReader();//�������Ӷ��ߺ���
	void deleteReader();//����ɾ�����ߺ���
	~manage();//��������
};
#endif
