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
	cout<<"		************��ӭ�������ͼ���***********"<<endl;
	cout<<"		*	1������Ա��¼"<<endl;
	cout<<"		*	2����Ա���ߵ�¼"<<endl;
	cout<<"		*	3��һ����߲�ѯ"<<endl;
	cout<<"		*	0���˳�ͼ��ݹ���ϵͳ"<<endl;
	cout<<"		*****************************************"<<endl;
	cout<<"������ѡ�"<<endl;
	cin>>key;
	while(key)
	{
		switch(key)
		{
		case 1:
			{
				r.manage();//����Ա����
			break;
			}
		case 2:
			{
				r.reader_handle();//���߻�Ա����
			break;
			}
		case 3://һ����߲���
			{
				cout<<"		******��ӭ����һ����߲�ѯϵͳ******"<<endl;
				cout<<"		1����ʾȫ��ͼ����Ϣ"<<endl;
				cout<<"		2����ȷ��ѯͼ����Ϣ"<<endl;
				cout<<"		0���˳�ͼ���ѯϵͳ"<<endl;
				cout<<"		**********************************"<<endl;
				cout<<"������ѡ��"<<endl;
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
					cout<<"		1����ʾȫ��ͼ����Ϣ"<<endl;
					cout<<"		2����ȷ��ѯͼ����Ϣ"<<endl;
					cout<<"		0���˳�ͼ���ѯϵͳ"<<endl;
					cout<<"		**********************************"<<endl;
					cout<<"���������һ���Ա������ѡ��"<<endl;
					cin >>i;
				}
			}

		default: printf("����ѡ���������������ȷ��ѡ�\n");break;
		}
		//system("cls");
		cout<<"		****************************************"<<endl;
		cout<<"		*	1������Ա��¼"<<endl;	
		cout<<"		*	2����Ա���ߵ�¼"<<endl;
		cout<<"		*	3��һ����߲�ѯ"<<endl;
		cout<<"		*	0���˳�ͼ��ݹ���ϵͳ"<<endl;
		cout<<"		****************************************"<<endl;
		cout<<"���������������ͼ���ѡ�"<<endl;
		cin>>key;
	}
	return;
}

