#include "book.h"
book::book()//���캯��
	{ 
	    bookName="δ��ֵ";
	    bookISBN=NULLID;
	}

string book::getName()const//�������
{
	return bookName;
}

string book::getbookAuthor()const//�������
	{
		return bookAuthor;
    }

string book::getbookISBN()const//���ISBN
	{
		return bookISBN;
	}

string book::gettype()const//�������
	{
		return type;
	}

string book::getbookPress()const//��ó�����
	{
		return bookPress;
	}

int book::getbookStatue()const//���״̬
	{
		return bookStatue;
	}

void book::setName(string a)//�趨����
	{
		bookName=a;
	}

void book::setAuthor(string b)//�趨����
	{
		bookAuthor=b;
	}

void book::setISBN(string c)//�趨ISBN��
	{
		bookISBN=c;
    }

void book::settype(string d)//�趨����
	{
		type=d;
	}

void book::setPress(string e)//�趨������
	{
		bookPress=e;
	}

void book::setStatue(int f=0)//�趨״̬
	{
		bookStatue=f;
	}
	
void book::readBookInformation()//�����鼮��Ϣ����
	{
    cout<<"������������"<<endl;//��������
	cin>>bookName;
	
    cout<<"��������������"<<endl;//����������
    cin>>bookAuthor;

	cout<<"������ISBN�룺"<<endl;//����ISBN��
	cin>>bookISBN;

	cout<<"���������"<<endl;//�������
	cin>>type;

	cout<<"����������磺"<<endl;//���������
	cin>>bookPress;

	cout<<"������״̬��(0�����ڹݣ�1������)"<<endl;//����״̬
	cin>>bookStatue;
	}

void book::printBookInformation()//����鼮��Ϣ����
	{
		cout<<"������"<<bookName<<endl;//�������
		cout<<"���ߣ�"<<bookAuthor<<endl;//�������
		cout<<"ISBN�룺"<<bookISBN<<endl;//���ISBN��
		cout<<"���"<<type<<endl;//������
		cout<<"�����磺"<<bookPress<<endl;//���������
		changeStatue();//����״̬�ı亯��
	}

void book::changeStatue()//�ж�״̬
	{
	if(bookStatue==0)
		{
			cout<<"״̬���ڹ�"<<endl;//���״̬
		}
		else
		{
			cout<<"״̬�����"<<endl;//���״̬
		}
		
	}

book::~book()
	{
    }