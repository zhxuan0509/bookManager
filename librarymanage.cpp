#include<iostream>
#include<string>
#include"book.h"
#include"bookrecord.h"
#include"reader.h"
using namespace std;
void manage(BookRecord r)
{string i;
 //BookRecord r;
	cout<<"请输入管理员登陆密码"<<endl;
	cin >>i;
	if(i=="py")
	{cout<<"**************欢迎进入管理系统**************"<<endl<<endl;
		cout<<"		1：图书管理"<<endl<<endl;
		cout<<"		2: 读者管理"<<endl<<endl;
		cout<<"		0：退出图书管理系统"<<endl;
		cout<<"		请输入选项"<<endl;
		int j;
		cin >>j;
		switch(j)
		{
		case 1:
			{cout<<"****欢迎进入图书管理系统****"<<endl;
			cout<<"1：增添图书		2：删除图书		0:退出图书管理系统"<<endl<<endl;
			cout<<"			请输入选项"<<endl;
			int i;
			cin >>i;
			switch(i)
			{
			case 1:r.set_count();
			r.bookadd();break;
			case 2:
				break;
			case 0:return;
			default: break;
			}
			}
		case 2:
			{
			}
		case 0:return;
		default: break;
		}
	}
	else cout<<"密码错误，您无权登录！"<<endl;
	return;
}