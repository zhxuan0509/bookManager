#include<iostream>
#include<iomanip>
#include<string>
#include"book.h"
#include"manage.h"
#include"reader.h"
using namespace std;
void main()
{
	int key;
	BookRecord r;
	r.set_count();
	r.set_re_count();
	cout<<"		************欢迎进入汇文图书馆***********"<<endl;
	cout<<"		*	1：管理员登录"<<endl;
	cout<<"		*	2：会员读者登录"<<endl;
	cout<<"		*	3：一般读者查询"<<endl;
	cout<<"		*	0：退出图书馆管理系统"<<endl;
	cout<<"		*****************************************"<<endl;
	cout<<"请输入选项："<<endl;
	cin>>key;
	while(key)
	{
		switch(key)
		{
		case 1:
			{
				r.manage();//管理员操作
			break;
			}
		case 2:
			{
				r.reader_handle();//读者会员操作
			break;
			}
		case 3://一般读者操作
			{
				cout<<"		******欢迎进入一般读者查询系统******"<<endl;
				cout<<"		1：显示全部图书信息"<<endl;
				cout<<"		2：精确查询图书信息"<<endl;
				cout<<"		0：退出图书查询系统"<<endl;
				cout<<"		**********************************"<<endl;
				cout<<"请输入选项"<<endl;
				int i;
				cin >>i;
				while(i)
				{
					switch(i)
					{
					case 1:
						{r.bookshow();
							break;
						}
					case 2:
						{r.bookfind();
						    break;
						}
					default:break;
					}
					cout<<"		**********************************"<<endl;
					cout<<"		1：显示全部图书信息"<<endl;
					cout<<"		2：精确查询图书信息"<<endl;
					cout<<"		0：退出图书查询系统"<<endl;
					cout<<"		**********************************"<<endl;
					cout<<"请继续输入一般会员操作的选项"<<endl;
					cin >>i;
				}
			}

		default: printf("输入选项错误，请您输入正确的选项！\n");break;
		}
		//system("cls");
		cout<<"		****************************************"<<endl;
		cout<<"		*	1：管理员登录"<<endl;	
		cout<<"		*	2：会员读者登录"<<endl;
		cout<<"		*	3：一般读者查询"<<endl;
		cout<<"		*	0：退出图书馆管理系统"<<endl;
		cout<<"		****************************************"<<endl;
		cout<<"请继续输入进入汇文图书馆选项："<<endl;
		cin>>key;
	}
	return;
}

