#include"manage.h"
#include"book.h"
#include"reader.h"
#include<iostream>
#include<string>
using namespace std;//manage
void BookRecord ::bookadd()
{
	int n;
	cout<<"即将进行图书添加操作，确定添加图书请输入非 0 整数"<<endl;
	cin>>n;
	while(n)
	{
	string bookn;
	cout<<"请输入书名：(string)"<<endl;
	cin>>bookn;

	string au;
	cout<<"请输入作者姓名：(string)"<<endl;
	cin>>au;
	
	int id;
	cout<<"请输入书号：(int)"<<endl;
	cin>>id;
	
	string bookc;
	cout<<"请输入出版社名称：(string)"<<endl;
	cin>>bookc;
	book[count].add_book(bookn,au,id,bookc);
	count++;
	cout<<"图书添加成功！确定继续添加图书请输入非 0 整数"<<endl;
	cin>>n;
	}
	return ;
}
void BookRecord ::bookshow()
{cout<<"	*****图书馆的所有书籍如下*****"<<endl;
	int i;
	for(i = 0;i < count;i++)//count在此类中为全局变量
	{
		book[i].display( );
	}
}

void BookRecord ::bookfind()
{	int i,j,id;
	string bn,au,bc;
	cout<<"*****欢迎进入图书精确查询系统*****"<<endl;
	cout<<"		1：书名查询"<<endl;
	cout<<"		2：作者查询"<<endl;
	cout<<"		3：书号查询"<<endl;
	cout<<"		4：出版社查询"<<endl;
	cout<<"		0：退出查询"<<endl;
	cout<<"请输入查询关键字："<<endl;
	cin >> i;
	while(i)
	{
		switch(i)
		{
		case 1:
			{int f=0;
				cout<<"输入要查询的书名："<<endl;
				cin >>bn;
				for(j=0;j<count;j++)
				{
					if(bn==book[j].get_bookname())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"您查找的书不存在！"<<endl;
				break;
			 }
		case 2:
			{int f=0;
				cout<<"输入要查询的作者姓名："<<endl;
				cin >>au;
				for(j=0;j<count;j++)
				{
					if(au==book[j].get_author())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"您查找的书不存在！"<<endl;
				break;
			 }
		case 3:
			{int f=0;
				cout<<"输入要查询的书号："<<endl;
				cin >>id;
				for(j=0;j<count;j++)
				{
					if(id==book[j].get_bookID())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"您查找的书不存在！"<<endl;
				break;
			 }
		case 4:
			{int f=0;
				cout<<"输入要查询的出版社名："<<endl;
				cin >>bc;
				for(j=0;j<count;j++)
				{
					if(bc==book[j].get_bookcompany())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"您查找的书不存在！"<<endl;
				break;
			 }
		case 0: return ;

		default: printf("输入选项错误，请您输入正确的选项！\n");break;
		}
		cout<<"请继续输入查询书籍选项："<<endl;
		cin>>i;
	}
}
int BookRecord ::checkbook(int id)//检查书是否存在。传回的书的数组号
{	int i=0,j;
	for(j=0;j<count;j++)
	{
		if(id==book[j].get_bookID())
		{
			i=1;
			return j;//书存在、则返回书的数组号
		}
	}
	if(i==0) 
		cout<<"您输入的书号不存在或者已经被借走！"<<endl;
			return -1;//书不存在、则返回-1

}

void BookRecord ::bookdelete()
{
	cout <<"	*****注意!**现在进行删除操作，请慎重选择!!*****"<<endl;
	int i,j,m,id;
	string bookname;
	cout<<"	1:书名选择删除法	 2:书号选择删除法 0:退出删除操作"<<endl;
	cout<<"请输入选择法"<<endl;
	cin >>i;
	while(i)
	{
		switch(i)
		{
		case 1:cout<<"请输入要删除的书名"<<endl;
				cin >>bookname;
				for(j=0;j<count;j++)
				{
					if(bookname==book[j].get_bookname())
					{
						for(m=j;m<count;m++)
							book[m]=book[m+1];		//
						count-=1;
						cout<<"	图书删除成功！"<<endl;
					}
				}
				break;
		case 2:cout<<"请输入要删除的书号"<<endl;
				cin>>id;
				for(j=0;j<count;j++)
				{
					if(id==book[j].get_bookID())
					{
						for(m=j;m<count;m++)
							book[m]=book[m+1];		//
						count-=1;
						cout<<"	图书删除成功！"<<endl;
					}
				}
				break;
		default: printf("输入选项错误，请您输入正确的选项！\n");break;
		}
		cout <<"若还要删除，请继续输入删除查询方法"<<endl;
		cin >>i;
	}
}

void BookRecord ::readeradd()
{
	int n,num;
	string nam,tel;
	cout <<"即将进行添加会员操作，确定操作请输入非 0 整数"<<endl;
	cin >>n;
	while(n)
	{
		cout <<"请输入要创建读者姓名(string)"<<endl;
		cin >>nam;
		cout <<"请输入创建读者号(int)"<<endl;
		cin >>num;
		cout <<"请输入读者联系电话(string)"<<endl;
		cin >>tel;
		reader[re_count].add_reader1(nam,num,tel);
		re_count++;
		cout <<"会员添加成功，确定继续操作请输入非 0 整数"<<endl;
		cin >>n;
	}
	//return;
}
void BookRecord ::readershow()
{	if(re_count==0)//
	cout<<"	没有您所查询的读者信息！"<<endl<<endl;
	else
	cout<<"	***********图书馆的所有读者如下***********"<<endl<<endl;
	int i;
	for(i = 0;i < re_count;i++)//count在此类中为全局变量
	{
		cout <<"读者 "<<i+1<<"：";
		reader[i].display1( );
	}
}
int BookRecord ::checkreader(int num)//检查读者是否存在。形参为读者号、函数传回的读者 数组号
{int i=0,j;
	for(j=0;j<re_count;j++)
	{
		if(num==reader[j].get_num())
		{
			i=1;
			return j;//读者存在、则返回读者数组号
		}
	}
	if(i==0)
		cout <<"输入的读者不存在"<<endl;
			return -1;//读者不存在、则返回-1
}

void BookRecord ::borrow_book()//借书操作
{
	cout<<"	 ******进入借书操作******"<<endl;
	int ID,num,a,b,i;//ID书号、num读者号
	cout <<"请分别输入书号(ID)和读者号(number)"<<endl;
	cin >>ID;
	cin >>num;
	a=checkreader(num);//得到读者数组编号
	b=checkbook(ID);//得到书的数组编号
	if((a != -1)&&(b != -1)&&book[b].get_flag())//?
	{
		if(reader[a].get_debt()<30.0)
			if(reader[a].get_br_sum()<3)
			{
				book[b].set_flag(0);//把借出书的标志位设为0
				reader[a].set_br_sum();//读者相应的借书数目加1
				i=reader[a].get_br_sum();
				reader[a].br_book[i]=b;//
				cout<<"借书成功！"<<endl;
			}
			else
			cout <<"	读者已经借书超过三本，不能再借出！"<<endl<<endl;
		else
		cout <<"	读者欠款超过30元，不能借书"<<endl<<endl;
	}
	else cout<<"	借书不成功！"<<endl<<endl;
}

void BookRecord ::return_book()//还书操作
{
	cout <<"	********欢迎进入还书系统********"<<endl;
	int num,ID,a,b,k,L;//a接收图书数组序号，b接收读者数组序号
	cout <<"请分别输入所还书的 ID 和 读者号"<<endl;
	cin>>ID;
	cin >>num;
	b=checkbook(ID);//得到书的数组编号
	a=checkreader(num);//得到读者数组编号
	if((a!=-1) &&(b!=-1))
	{
		for(k=1;k<=reader[a].get_br_sum();k++)
			if(b==reader[a].br_book[k])
				for(L=k;L<=reader[a].get_br_sum();L++)
				{
				reader[a].br_book[L]=reader[a].br_book[L+1];
				book[b].set_flag(1);//把还的书标记设为1
				reader[a].cut_br_sum();//读者相应的借书量减1
				cout<<"还书成功！"<<endl;
				}
	}
	else cout<<"还书不成功！！！"<<endl;
}

void BookRecord ::readerdelete()
{
cout <<"	*****注意!**现在进行删除操作，请慎重!!*****"<<endl<<endl;
	int i,j,m,num;
	string Readername;
	cout<<"	1：读者名选择删除法 2：读者号选择删除法 0：退出删除"<<endl;
	cout<<"请输入选择法"<<endl;
	cin >>i;
	while(i)
	{
		switch(i)
		{
		case 1:cout<<"请输入要删除的读者名"<<endl;
				cin >>Readername;
				for(j=0;j<re_count;j++)
				{
					if(Readername==reader[j].get_name())
					{
						for(m=j;m<re_count;m++)
							reader[m]=reader[m+1];		//
						re_count-=1;
						cout<<"	会员成功删除！"<<endl;
					}
				}
				break;
		case 2:cout<<"请输入要删除的读者号"<<endl;
				cin>>num;
				for(j=0;j<re_count;j++)
				{
					if(num==reader[j].get_num())
					{
						for(m=j;m<re_count;m++)
							reader[m]=reader[m+1];		//
						re_count-=1;
						cout<<"	会员成功删除！"<<endl;
					}
				}
				break;
		default: printf("输入选项错误，请您输入正确的选项！\n");break;
		}
		cout <<"请继续输入删除查询方法"<<endl;
		cin >>i;
	}
}

void BookRecord ::reader_handle()//读者会员操作函数
{	int id,i;
	cout <<"	********欢迎进入读者会员登录界面********"<<endl<<endl;
	cout<<"请输入您的读者号"<<endl;
	cin >>id;
	i=checkreader(id);//i为读者数组号
	if(i>=0)
	{	int j;
		cout <<"	********会员读者欢迎您来到汇文图书馆********"<<endl;
		cout <<"	1：查询基本信息	2：查询借书信息"<<endl;
		cout <<"	3:高级查询藏书	4：显示全部藏书"<<endl;
		cout <<"	0：退出会员登录"<<endl;
		cout <<"	****************************************"<<endl;
		cout <<"请您输入操作选项"<<endl;
		cin >>j;
		while(j)//j!=0
		{
			switch(j)
			{
				case 1:
						reader[i].display1();
						break;
				case 2:int n;
						if(reader[i].get_br_sum()!=0)
						{
							for(n=1;n<=reader[i].get_br_sum();n++)
								book[reader[i].br_book[n]].display();
						}
						else cout <<"用户没有借书信息！"<<endl;
						break;
				case 3:bookfind();
						 break;
				case 4:bookshow();
						 break;
				default:printf("输入选项错误，请您输入正确的选项！\n");break;
			}
			cout <<"	****************************************"<<endl;
			cout <<"	1：查询基本信息	2：查询借书信息"<<endl;
			cout <<"	3:高级查询藏书	4：显示全部藏书"<<endl;
			cout <<"	0：退出会员登录"<<endl;
			cout <<"	****************************************"<<endl;
			cout <<"请您继续输入会员操作选项"<<endl;
			cin >>j;
		}

		return;

	}
	else cout <<"输入的用户不存在!"<<endl<<endl;

}
void BookRecord ::manage()//管理员操作
{
	string i;
	cout<<"请输入管理员登陆密码"<<endl;
	cin >>i;
	if(i=="py")
	{	cout<<"		****欢迎进入管理系统*****"<<endl;
		cout<<"		1：图书管理"<<endl;
		cout<<"		2: 读者管理"<<endl;
		cout<<"		0：退出图书管理系统"<<endl;
		cout<<"		**********************"<<endl;
		cout<<"请输入选项"<<endl;
		int j;
		cin >>j;
		while(j)
		{
			switch(j)
			{
			case 1://图书管理
				{
					cout<<"	****欢迎进入图书管理系统****"<<endl;
					cout<<"	1：增添图书	2：删除图书"<<endl;
					cout<<"	3：显示所有藏书	4：精确查询藏书"<<endl;
					cout<<"	0:退出图书管理系统"<<endl;
					cout<<"	***************************"<<endl;
					cout<<"请输入选项"<<endl;
					int m;
					cin >>m;
					while(m)
					{
						switch(m)
							{
							case 1:bookadd();
								break;
							case 2:
								bookdelete();
							   	break;
							case 3:bookshow();
								 break;
							case 4:bookfind();
								 break;
							default: printf("输入选项错误，请您输入正确的选项！\n");break;
							}
						cout<<"	***************************"<<endl;
						cout<<"	1：增添图书	2：删除图书"<<endl;
						cout<<"	3：显示所有藏书	4：精确查询藏书"<<endl;
						cout<<"	0:退出图书管理系统"<<endl;
						cout<<"	***************************"<<endl;
						cout<<"请继续输入对图书管理的选项"<<endl;
						cin >>m;
					}
				}break;
			case 2://读者管理
				{
				cout<<"	****欢迎进入读者管理系统****"<<endl;
				cout<<"	1：增添读者	2：删除读者"<<endl;
				cout<<"	3：查看所有读者 4：读者借书	"<<endl;
				cout<<"	5：读者还书	0:退出读者管理系统"<<endl;
				cout<<"	***************************"<<endl;
				cout<<"请输入选项"<<endl;
				int n;
				cin >>n;
				while(n)
					{
						switch(n)
							{
							case 1:
								readeradd();break;
							case 2:
								readerdelete();
								break;
							case 3:readershow();
									break;
							case 4:borrow_book();//借书
									break;
							case 5:return_book();//还书
									break;
							default: printf("输入选项错误，请您输入正确的选项！\n");break;
							}
						cout<<"	***************************"<<endl;
						cout<<"	1：增添读者	2：删除读者"<<endl;
						cout<<"	3：查看所有读者 4：读者借书	"<<endl;
						cout<<"	5：读者还书	0:退出读者管理系统"<<endl;
						cout<<"	***************************"<<endl;
						cout<<"请继续输入对读者管理选项"<<endl;
						cin >>n;
					}
				}break;
			default: printf("输入选项错误，请您输入正确的选项！\n");break;
			}
			cout<<"		**********************"<<endl;
			cout<<"		1：图书管理"<<endl;
			cout<<"		2: 读者管理"<<endl;
			cout<<"		0：退出图书管理系统"<<endl;
			cout<<"		**********************"<<endl;
			cout<<"请继续输入操作选项"<<endl;
			cin >>j;
		}
	}
	else cout<<"	密码错误，您无权登录！"<<endl;
	return;
}

