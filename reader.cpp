#include<iostream>
#include<string>
#include"reader.h"
#include"book.h"
using namespace std;
Reader ::Reader()
{
	name="��";
	number=0;
	tel_num="��";

	br_sum=0;//�����������
	debt=0.0;//Ƿ���
	b_year=0;
	b_month=0;
	b_day=0;
	re_year=0;
	re_month=0;
	re_day=0;
}
	//void borrow_book();
	//void return_book();
	void demand_book();//��ѯ������Ϣ
	void demand_news();//��ѯ������Ϣ

	void Reader ::add_reader1(string nam,int num,string tel)//��Ӷ��߻�����Ϣ>>��������š��绰������������Ƿ��Ĭ��
	{
		name=nam;
		number=num;
		tel_num=tel;
		for(int i=1;i<=MAX_BORROW;i++)//�����±�� 1 ��ʼ
			br_book[i]=-1;
		br_sum=0;
		debt=0.0;
	}
	void Reader ::display1()//��ӡ�����߻�����Ϣ
	{
		//cout <<"********������ʾ�����߻�����Ϣ********"<<endl;
		cout <<"��������:"<<name<<"  ���߱��:"<<number<<"  ��ϵ��ʽ:"<<tel_num<<"  ��������:"<<br_sum<<"  Ƿ���:"<<debt<<endl<<endl;
		return;
	}
	void Reader ::display2()//�ʱ����Ϣ
	{
		cout <<"********������ʾ���ߵĽ�����Ϣ********"<<endl<<endl;
		//cout<<"����ʱ�䣺"<<b_year<<"/"<<b_month<<"/"<<b_day<<"����ʱ�䣺"<<re_year<<"/"<<re_month<<"/"<<re_day<<endl<<endl;
	}
	
	void Reader ::input_name(string nam)
	{
		name=nam;
	}
	string Reader ::get_name()
	{
		return name;
	}
	void Reader ::input_num(int num)
	{
		number=num;
	}
	int Reader ::get_num()
	{
		return number;
	}
	void Reader ::input_tel(string telphone)
	{
		tel_num=telphone;
	}
	string Reader ::get_tel()
	{
		return tel_num;
	}
//	void Reader ::set_br_sum(int su)
//	{
//		br_sum=su;
//	}
	void Reader ::set_br_sum() //���������
	{
		br_sum+=1;
	}
	void Reader ::cut_br_sum()//���ٽ�������
	{
		br_sum-=1;
	}
	int Reader ::get_br_sum()
	{
		return br_sum;
	}
	void Reader ::input_debt(double deb)
	{
		debt=deb;
	}
	double Reader ::get_debt()
	{
		return debt;
	}
