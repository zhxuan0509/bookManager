#include"manage.h"
#include"book.h"
#include"reader.h"
#include<iostream>
#include<string>
using namespace std;//manage
void BookRecord ::bookadd()
{
	int n;
	cout<<"��������ͼ����Ӳ�����ȷ�����ͼ��������� 0 ����"<<endl;
	cin>>n;
	while(n)
	{
	string bookn;
	cout<<"������������(string)"<<endl;
	cin>>bookn;

	string au;
	cout<<"����������������(string)"<<endl;
	cin>>au;
	
	int id;
	cout<<"��������ţ�(int)"<<endl;
	cin>>id;
	
	string bookc;
	cout<<"��������������ƣ�(string)"<<endl;
	cin>>bookc;
	book[count].add_book(bookn,au,id,bookc);
	count++;
	cout<<"ͼ����ӳɹ���ȷ���������ͼ��������� 0 ����"<<endl;
	cin>>n;
	}
	return ;
}
void BookRecord ::bookshow()
{cout<<"	*****ͼ��ݵ������鼮����*****"<<endl;
	int i;
	for(i = 0;i < count;i++)//count�ڴ�����Ϊȫ�ֱ���
	{
		book[i].display( );
	}
}

void BookRecord ::bookfind()
{	int i,j,id;
	string bn,au,bc;
	cout<<"*****��ӭ����ͼ�龫ȷ��ѯϵͳ*****"<<endl;
	cout<<"		1��������ѯ"<<endl;
	cout<<"		2�����߲�ѯ"<<endl;
	cout<<"		3����Ų�ѯ"<<endl;
	cout<<"		4���������ѯ"<<endl;
	cout<<"		0���˳���ѯ"<<endl;
	cout<<"�������ѯ�ؼ��֣�"<<endl;
	cin >> i;
	while(i)
	{
		switch(i)
		{
		case 1:
			{int f=0;
				cout<<"����Ҫ��ѯ��������"<<endl;
				cin >>bn;
				for(j=0;j<count;j++)
				{
					if(bn==book[j].get_bookname())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"�����ҵ��鲻���ڣ�"<<endl;
				break;
			 }
		case 2:
			{int f=0;
				cout<<"����Ҫ��ѯ������������"<<endl;
				cin >>au;
				for(j=0;j<count;j++)
				{
					if(au==book[j].get_author())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"�����ҵ��鲻���ڣ�"<<endl;
				break;
			 }
		case 3:
			{int f=0;
				cout<<"����Ҫ��ѯ����ţ�"<<endl;
				cin >>id;
				for(j=0;j<count;j++)
				{
					if(id==book[j].get_bookID())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"�����ҵ��鲻���ڣ�"<<endl;
				break;
			 }
		case 4:
			{int f=0;
				cout<<"����Ҫ��ѯ�ĳ���������"<<endl;
				cin >>bc;
				for(j=0;j<count;j++)
				{
					if(bc==book[j].get_bookcompany())
					{
						f=1;
						book[j].display();
					}
				}
				if(f==0) cout<<"�����ҵ��鲻���ڣ�"<<endl;
				break;
			 }
		case 0: return ;

		default: printf("����ѡ���������������ȷ��ѡ�\n");break;
		}
		cout<<"����������ѯ�鼮ѡ�"<<endl;
		cin>>i;
	}
}
int BookRecord ::checkbook(int id)//������Ƿ���ڡ����ص���������
{	int i=0,j;
	for(j=0;j<count;j++)
	{
		if(id==book[j].get_bookID())
		{
			i=1;
			return j;//����ڡ��򷵻���������
		}
	}
	if(i==0) 
		cout<<"���������Ų����ڻ����Ѿ������ߣ�"<<endl;
			return -1;//�鲻���ڡ��򷵻�-1

}

void BookRecord ::bookdelete()
{
	cout <<"	*****ע��!**���ڽ���ɾ��������������ѡ��!!*****"<<endl;
	int i,j,m,id;
	string bookname;
	cout<<"	1:����ѡ��ɾ����	 2:���ѡ��ɾ���� 0:�˳�ɾ������"<<endl;
	cout<<"������ѡ��"<<endl;
	cin >>i;
	while(i)
	{
		switch(i)
		{
		case 1:cout<<"������Ҫɾ��������"<<endl;
				cin >>bookname;
				for(j=0;j<count;j++)
				{
					if(bookname==book[j].get_bookname())
					{
						for(m=j;m<count;m++)
							book[m]=book[m+1];		//
						count-=1;
						cout<<"	ͼ��ɾ���ɹ���"<<endl;
					}
				}
				break;
		case 2:cout<<"������Ҫɾ�������"<<endl;
				cin>>id;
				for(j=0;j<count;j++)
				{
					if(id==book[j].get_bookID())
					{
						for(m=j;m<count;m++)
							book[m]=book[m+1];		//
						count-=1;
						cout<<"	ͼ��ɾ���ɹ���"<<endl;
					}
				}
				break;
		default: printf("����ѡ���������������ȷ��ѡ�\n");break;
		}
		cout <<"����Ҫɾ�������������ɾ����ѯ����"<<endl;
		cin >>i;
	}
}

void BookRecord ::readeradd()
{
	int n,num;
	string nam,tel;
	cout <<"����������ӻ�Ա������ȷ������������� 0 ����"<<endl;
	cin >>n;
	while(n)
	{
		cout <<"������Ҫ������������(string)"<<endl;
		cin >>nam;
		cout <<"�����봴�����ߺ�(int)"<<endl;
		cin >>num;
		cout <<"�����������ϵ�绰(string)"<<endl;
		cin >>tel;
		reader[re_count].add_reader1(nam,num,tel);
		re_count++;
		cout <<"��Ա��ӳɹ���ȷ����������������� 0 ����"<<endl;
		cin >>n;
	}
	//return;
}
void BookRecord ::readershow()
{	if(re_count==0)//
	cout<<"	û��������ѯ�Ķ�����Ϣ��"<<endl<<endl;
	else
	cout<<"	***********ͼ��ݵ����ж�������***********"<<endl<<endl;
	int i;
	for(i = 0;i < re_count;i++)//count�ڴ�����Ϊȫ�ֱ���
	{
		cout <<"���� "<<i+1<<"��";
		reader[i].display1( );
	}
}
int BookRecord ::checkreader(int num)//�������Ƿ���ڡ��β�Ϊ���ߺš��������صĶ��� �����
{int i=0,j;
	for(j=0;j<re_count;j++)
	{
		if(num==reader[j].get_num())
		{
			i=1;
			return j;//���ߴ��ڡ��򷵻ض��������
		}
	}
	if(i==0)
		cout <<"����Ķ��߲�����"<<endl;
			return -1;//���߲����ڡ��򷵻�-1
}

void BookRecord ::borrow_book()//�������
{
	cout<<"	 ******����������******"<<endl;
	int ID,num,a,b,i;//ID��š�num���ߺ�
	cout <<"��ֱ��������(ID)�Ͷ��ߺ�(number)"<<endl;
	cin >>ID;
	cin >>num;
	a=checkreader(num);//�õ�����������
	b=checkbook(ID);//�õ����������
	if((a != -1)&&(b != -1)&&book[b].get_flag())//?
	{
		if(reader[a].get_debt()<30.0)
			if(reader[a].get_br_sum()<3)
			{
				book[b].set_flag(0);//�ѽ����ı�־λ��Ϊ0
				reader[a].set_br_sum();//������Ӧ�Ľ�����Ŀ��1
				i=reader[a].get_br_sum();
				reader[a].br_book[i]=b;//
				cout<<"����ɹ���"<<endl;
			}
			else
			cout <<"	�����Ѿ����鳬�������������ٽ����"<<endl<<endl;
		else
		cout <<"	����Ƿ���30Ԫ�����ܽ���"<<endl<<endl;
	}
	else cout<<"	���鲻�ɹ���"<<endl<<endl;
}

void BookRecord ::return_book()//�������
{
	cout <<"	********��ӭ���뻹��ϵͳ********"<<endl;
	int num,ID,a,b,k,L;//a����ͼ��������ţ�b���ն����������
	cout <<"��ֱ������������ ID �� ���ߺ�"<<endl;
	cin>>ID;
	cin >>num;
	b=checkbook(ID);//�õ����������
	a=checkreader(num);//�õ�����������
	if((a!=-1) &&(b!=-1))
	{
		for(k=1;k<=reader[a].get_br_sum();k++)
			if(b==reader[a].br_book[k])
				for(L=k;L<=reader[a].get_br_sum();L++)
				{
				reader[a].br_book[L]=reader[a].br_book[L+1];
				book[b].set_flag(1);//�ѻ���������Ϊ1
				reader[a].cut_br_sum();//������Ӧ�Ľ�������1
				cout<<"����ɹ���"<<endl;
				}
	}
	else cout<<"���鲻�ɹ�������"<<endl;
}

void BookRecord ::readerdelete()
{
cout <<"	*****ע��!**���ڽ���ɾ��������������!!*****"<<endl<<endl;
	int i,j,m,num;
	string Readername;
	cout<<"	1��������ѡ��ɾ���� 2�����ߺ�ѡ��ɾ���� 0���˳�ɾ��"<<endl;
	cout<<"������ѡ��"<<endl;
	cin >>i;
	while(i)
	{
		switch(i)
		{
		case 1:cout<<"������Ҫɾ���Ķ�����"<<endl;
				cin >>Readername;
				for(j=0;j<re_count;j++)
				{
					if(Readername==reader[j].get_name())
					{
						for(m=j;m<re_count;m++)
							reader[m]=reader[m+1];		//
						re_count-=1;
						cout<<"	��Ա�ɹ�ɾ����"<<endl;
					}
				}
				break;
		case 2:cout<<"������Ҫɾ���Ķ��ߺ�"<<endl;
				cin>>num;
				for(j=0;j<re_count;j++)
				{
					if(num==reader[j].get_num())
					{
						for(m=j;m<re_count;m++)
							reader[m]=reader[m+1];		//
						re_count-=1;
						cout<<"	��Ա�ɹ�ɾ����"<<endl;
					}
				}
				break;
		default: printf("����ѡ���������������ȷ��ѡ�\n");break;
		}
		cout <<"���������ɾ����ѯ����"<<endl;
		cin >>i;
	}
}

void BookRecord ::reader_handle()//���߻�Ա��������
{	int id,i;
	cout <<"	********��ӭ������߻�Ա��¼����********"<<endl<<endl;
	cout<<"���������Ķ��ߺ�"<<endl;
	cin >>id;
	i=checkreader(id);//iΪ���������
	if(i>=0)
	{	int j;
		cout <<"	********��Ա���߻�ӭ����������ͼ���********"<<endl;
		cout <<"	1����ѯ������Ϣ	2����ѯ������Ϣ"<<endl;
		cout <<"	3:�߼���ѯ����	4����ʾȫ������"<<endl;
		cout <<"	0���˳���Ա��¼"<<endl;
		cout <<"	****************************************"<<endl;
		cout <<"�����������ѡ��"<<endl;
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
						else cout <<"�û�û�н�����Ϣ��"<<endl;
						break;
				case 3:bookfind();
						 break;
				case 4:bookshow();
						 break;
				default:printf("����ѡ���������������ȷ��ѡ�\n");break;
			}
			cout <<"	****************************************"<<endl;
			cout <<"	1����ѯ������Ϣ	2����ѯ������Ϣ"<<endl;
			cout <<"	3:�߼���ѯ����	4����ʾȫ������"<<endl;
			cout <<"	0���˳���Ա��¼"<<endl;
			cout <<"	****************************************"<<endl;
			cout <<"�������������Ա����ѡ��"<<endl;
			cin >>j;
		}

		return;

	}
	else cout <<"������û�������!"<<endl<<endl;

}
void BookRecord ::manage()//����Ա����
{
	string i;
	cout<<"���������Ա��½����"<<endl;
	cin >>i;
	if(i=="py")
	{	cout<<"		****��ӭ�������ϵͳ*****"<<endl;
		cout<<"		1��ͼ�����"<<endl;
		cout<<"		2: ���߹���"<<endl;
		cout<<"		0���˳�ͼ�����ϵͳ"<<endl;
		cout<<"		**********************"<<endl;
		cout<<"������ѡ��"<<endl;
		int j;
		cin >>j;
		while(j)
		{
			switch(j)
			{
			case 1://ͼ�����
				{
					cout<<"	****��ӭ����ͼ�����ϵͳ****"<<endl;
					cout<<"	1������ͼ��	2��ɾ��ͼ��"<<endl;
					cout<<"	3����ʾ���в���	4����ȷ��ѯ����"<<endl;
					cout<<"	0:�˳�ͼ�����ϵͳ"<<endl;
					cout<<"	***************************"<<endl;
					cout<<"������ѡ��"<<endl;
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
							default: printf("����ѡ���������������ȷ��ѡ�\n");break;
							}
						cout<<"	***************************"<<endl;
						cout<<"	1������ͼ��	2��ɾ��ͼ��"<<endl;
						cout<<"	3����ʾ���в���	4����ȷ��ѯ����"<<endl;
						cout<<"	0:�˳�ͼ�����ϵͳ"<<endl;
						cout<<"	***************************"<<endl;
						cout<<"����������ͼ������ѡ��"<<endl;
						cin >>m;
					}
				}break;
			case 2://���߹���
				{
				cout<<"	****��ӭ������߹���ϵͳ****"<<endl;
				cout<<"	1���������	2��ɾ������"<<endl;
				cout<<"	3���鿴���ж��� 4�����߽���	"<<endl;
				cout<<"	5�����߻���	0:�˳����߹���ϵͳ"<<endl;
				cout<<"	***************************"<<endl;
				cout<<"������ѡ��"<<endl;
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
							case 4:borrow_book();//����
									break;
							case 5:return_book();//����
									break;
							default: printf("����ѡ���������������ȷ��ѡ�\n");break;
							}
						cout<<"	***************************"<<endl;
						cout<<"	1���������	2��ɾ������"<<endl;
						cout<<"	3���鿴���ж��� 4�����߽���	"<<endl;
						cout<<"	5�����߻���	0:�˳����߹���ϵͳ"<<endl;
						cout<<"	***************************"<<endl;
						cout<<"���������Զ��߹���ѡ��"<<endl;
						cin >>n;
					}
				}break;
			default: printf("����ѡ���������������ȷ��ѡ�\n");break;
			}
			cout<<"		**********************"<<endl;
			cout<<"		1��ͼ�����"<<endl;
			cout<<"		2: ���߹���"<<endl;
			cout<<"		0���˳�ͼ�����ϵͳ"<<endl;
			cout<<"		**********************"<<endl;
			cout<<"������������ѡ��"<<endl;
			cin >>j;
		}
	}
	else cout<<"	�����������Ȩ��¼��"<<endl;
	return;
}

