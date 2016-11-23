#include<iostream>
#include<string>
#include"reader.h"
#include"book.h"
using namespace std;
Reader ::Reader()
{
	name="空";
	number=0;
	tel_num="空";

	br_sum=0;//借阅书的总数
	debt=0.0;//欠款额
	b_year=0;
	b_month=0;
	b_day=0;
	re_year=0;
	re_month=0;
	re_day=0;
}
	//void borrow_book();
	//void return_book();
	void demand_book();//查询借书信息
	void demand_news();//查询个人信息

	void Reader ::add_reader1(string nam,int num,string tel)//添加读者基本信息>>姓名、编号、电话——借书数、欠款默认
	{
		name=nam;
		number=num;
		tel_num=tel;
		for(int i=1;i<=MAX_BORROW;i++)//数组下标从 1 开始
			br_book[i]=-1;
		br_sum=0;
		debt=0.0;
	}
	void Reader ::display1()//打印出读者基本信息
	{
		//cout <<"********下面显示出读者基本信息********"<<endl;
		cout <<"读者姓名:"<<name<<"  读者编号:"<<number<<"  联系方式:"<<tel_num<<"  借书总数:"<<br_sum<<"  欠款额:"<<debt<<endl<<endl;
		return;
	}
	void Reader ::display2()//★？时间信息
	{
		cout <<"********下面显示读者的借书信息********"<<endl<<endl;
		//cout<<"借书时间："<<b_year<<"/"<<b_month<<"/"<<b_day<<"还书时间："<<re_year<<"/"<<re_month<<"/"<<re_day<<endl<<endl;
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
	void Reader ::set_br_sum() //借书的数量
	{
		br_sum+=1;
	}
	void Reader ::cut_br_sum()//减少借书数量
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
