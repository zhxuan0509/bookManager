#include<iostream>
#include<string>
#include"book.h"
#include"bookrecord.h"
#include"reader.h"
using namespace std;
void manage(BookRecord r)
{string i;
 //BookRecord r;
	cout<<"���������Ա��½����"<<endl;
	cin >>i;
	if(i=="py")
	{cout<<"**************��ӭ�������ϵͳ**************"<<endl<<endl;
		cout<<"		1��ͼ�����"<<endl<<endl;
		cout<<"		2: ���߹���"<<endl<<endl;
		cout<<"		0���˳�ͼ�����ϵͳ"<<endl;
		cout<<"		������ѡ��"<<endl;
		int j;
		cin >>j;
		switch(j)
		{
		case 1:
			{cout<<"****��ӭ����ͼ�����ϵͳ****"<<endl;
			cout<<"1������ͼ��		2��ɾ��ͼ��		0:�˳�ͼ�����ϵͳ"<<endl<<endl;
			cout<<"			������ѡ��"<<endl;
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
	else cout<<"�����������Ȩ��¼��"<<endl;
	return;
}