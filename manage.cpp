#include "manage.h"
#include"book.h"
manage::manage()//��������
{

}

int manage::getManage()//��¼����
{
	cout<<"��ӭ��½ͼ�����ϵͳ��"<<endl;
	string a,b;
	cout<<"�������˺ţ�"<<endl;
	cin>>a;
	cout<<"���������룺"<<endl;
	cin>>b;
	string n,c;
    ifstream in("manage.txt");//���ļ�
	int i=0;//��ǩ���ж��˺ŵĴ������
    do
     {
	   if(in.eof())//�ļ�β�ͽ���
       break;
	   
	   string s;
	   getline(in,s);//����ÿһ��
       istringstream sin(s);//����sin��
       sin>>n>>c;
	   if((a==n)&&(c==b))//�ж��Ƿ����
         {
			 i=1;
		     return 1;//������ֵ      
             cout<<"��½�ɹ���"<<endl;
			 break; 
					            
         }
     }
	while(!in.eof());//�ж��Ƿ��ļ�β

    if(i==0)//δ�ҵ��˺�
	cout<<"���벻��ȷ��" <<endl;
    return 0;//���ؼ�ֵ
    in.close();//�ر��ļ�
}

void manage::reviseInformation()//�޸���Ϣ����
{
  int t=0;//��ǩ���Ƿ���ڸ��˺�
  string a,b,c,d;
  cout<<"�����������Ϣ��"<<endl;
  cout<<"�˺ţ�"<<endl;
  cin>>c;
  cout<<"���룺"<<endl;
  cin>>d;
  ifstream in("manage.txt");//���ļ�
  string s1;
  while( getline(in,s1))//��������
     {
		istringstream sin(s1);//����sin��
        sin>>a>>b;
	    ofstream out("manage1.txt",ios::app);//���ļ�
        if((a==c)&&(b==d))//���ڸ��˺�
          {
		    t=1;
		    string m,p;
			cout<<"�������޸ĺ����Ϣ:" <<endl;
			cout<<"������"<<endl;
			cin>>m;
			cout<<"���룺"<<endl;
			cin>>p;
            out<<m<<" "<<p<<endl; 
			cout<<"�޸ĳɹ�"<<endl;
		  }
		  else
			  out<<a<<" "<<b<<endl;//δ�޸�
		      out.close();//�ر��ļ�
	 }
		in.close();//�ر��ļ�

		ifstream filein("manage1.txt");//���ĵ�
		ofstream fileout("manage.txt",ios::out);//���ĵ����������
		string s;
		while(getline(filein,s))//���޸ĺ������д���ļ���ȥ
		{
			fileout<<s<<endl;
		}
		filein.close();//�ر��ļ�
		fileout.close();//�ر��ļ�

		if(t==0)//�����ڸ��˺�
        {
	       cout<<"�������"<<endl;
	    }
		 system("del manage1.txt");
}

void manage::add()//��������鼮����
{
	book book1;//ʵ��������
	ofstream fileout("store.txt",ios::app);//���ļ�
	if(!fileout)
	{
		cout<<"���ܴ��ļ���"<<"store.txt"<<endl;
	}
	else
	{ 
	cout<<"�������鱾������Ϣ��"<<endl;
    book1.readBookInformation();//������Ϣ
	fileout<<book1.getName()<<" "<<book1.getbookAuthor()<<" "<<book1.getbookISBN()<<" "<<book1.gettype()
		<<" "<<book1.getbookPress()<<" "<<book1.getbookStatue()<<endl;//д����Ϣ
	}
	fileout.close();//�ر��ļ�
	
}

void manage::revise()//�����޸��鼮��Ϣ����
{
	book book1;//ʵ��������
	ifstream filein("store.txt");//���ļ�
	if(!filein)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
	}
	else
	{
		cout<<"�������޸��鼮�ĵ�������"<<endl;
		int n=0;//��ǩ���Ƿ����Ȿ��
		string t;//��������
		cin>>t;
		do
		{   int v;//�������
			string x,y,z,u,w;
		    string s;
			getline(filein,s);//����ÿһ��
			istringstream sin(s);
			sin>>x;//��s�е�һ���ַ�����a
            ofstream fileout("restore.txt",ios::app);//д�����ļ���ȥ
			
			if(t!=x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			fileout<<s<<endl;//д������

			if(t==x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			{
				n=1;
				sin>>y>>z>>u>>w>>v;//��һ���ַ�������
				book1.setName(x);//�趨����
				book1.setAuthor(y);//�趨����
				book1.setISBN(z);//�趨ISBN��
				book1.settype(u);//�趨����
				book1.setPress(w);//�趨������
				book1.setStatue(v);//�趨״̬
				cout<<"ԭ�鼮��ϢΪ:"<<endl;
				book1.printBookInformation();//���

				cout<<"�������޸ĺ���鼮��Ϣ��"<<endl;
				 book1.readBookInformation();//���¶���
				 fileout<<book1.getName()<<" "<<book1.getbookAuthor()<<" "<<book1.getbookISBN()<<" "<<book1.gettype()
					 <<" "<<book1.getbookPress()<<" "<<book1.getbookStatue()<<endl;//д�뵽�ļ�
				 fileout.close();//�ر��ļ�
			}
			
		}
		while(!filein.eof());//�ж��Ƿ��ļ�β
		if(n==0)//�������Ȿ��
		cout<<"δ�ҵ�Ҫ�޸ĵ��鼮��"<<endl;
	}
	filein.close();//�ر�

	ifstream filei("restore.txt");//���ĵ�
	ofstream fileout("store.txt",ios::out);//���ĵ����������

	for(string s;getline(filei,s);)//���޸ĺ������д���ļ���ȥ
	{
		fileout<<s<<endl;
	}
	filei.close();//�ر��ļ�
	fileout.close();//�ر��ļ�
	system("del restore.txt");//ɾ���ļ�����
}


void manage::deleteBook()
{
	book book2;//ʵ��������
	ifstream filein("store.txt");//���ļ�
	if(!filein)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
	}
	else
	{
		cout<<"������ɾ���鼮�ĵ�������"<<endl;
		int n=0;//��ǩ���Ƿ����Ȿ��
		string t;//��������
		cin>>t;
		do
		{   int v;//�������
			string x,y,z,u,w;
		    string s;
			getline(filein,s);//����ÿһ��
			istringstream sin(s);
			sin>>x;//��s�е�һ���ַ�����a
            ofstream fileout("restore.txt",ios::app);//д�����ļ���ȥ
			
			if(t!=x)//�ж��Ƿ�Ϊɾ���ĵط�
			fileout<<s<<endl;//д������

			if(t==x)//�ж��Ƿ�Ϊɾ���ĵط�
			{
				n=1;
				sin>>y>>z>>u>>w>>v;//��һ���ַ�������
				book2.setName(x);//�趨����
				book2.setAuthor(y);//�趨����
				book2.setISBN(z);//�趨ISBN��
				book2.settype(u);//�趨����
				book2.setPress(w);//�趨������
				book2.setStatue(v);//�趨״̬
				cout<<"ԭ�鼮��ϢΪ:"<<endl;
				book2.printBookInformation();//���

				cout<<"�Ƿ�ɾ������Y���ǣ�N����"<<endl;
				char a;//�������
				cin>>a;
				if(a=='Y')
				{
					cout<<"ɾ���ɹ���"<<endl;
				}
			    if(a=='N')
				{
					cout<<"δɾ����"<<endl;
				    fileout<<book2.getName()<<" "<<book2.getbookAuthor()<<" "<<book2.getbookISBN()<<" "<<book2.gettype()
					 <<" "<<book2.getbookPress()<<" "<<book2.getbookStatue()<<endl;//д�뵽�ļ�
				}
				if(a!='Y'||a!='N')
				{
					system("pause");
				}
				fileout.close();//�ر��ļ�
			}
			
		}
		while(!filein.eof());//�ж��Ƿ��ļ�β
		if(n==0)//�������Ȿ��
		cout<<"δ�ҵ�Ҫɾ�����鼮��"<<endl;
	}
	filein.close();//�ر�

	ifstream filei("restore.txt");//���ĵ�
	ofstream fileout("store.txt",ios::out);//���ĵ����������

	for(string s;getline(filei,s);)//���޸ĺ������д���ļ���ȥ
	{
		fileout<<s<<endl;
	}
	filei.close();//�ر��ļ�
	fileout.close();//�ر��ļ�
	system("del restore.txt");//ɾ���ļ�����


}

void manage::addReader()//���Ӷ��ߺ���
{
	ofstream fout("student.txt",ios::app);//���ļ�
	string a,b,c;
	cout<<"��������Ӧ��Ϣ��"<<endl;
	cout<<"������"<<endl;
	cin>>a;
	cout<<"ѧ�ţ�"<<endl;
	cin>>b;
	cout<<"���룺"<<endl;
	cin >>c;
	fout<<a<<" "<<b<<" "<<c<<" "<<endl;
    fout.close();//�ر��ļ�
}

void manage::deleteReader()
{
	
	ifstream filein("student.txt");//���ļ�
	if(!filein)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
	}
	else
	{
		string t,m;
		int n=0;//��ǩ���Ƿ����������
		cout<<"������ɾ��ѧ���ĵ�������"<<endl;
		cin>>m;
        cout<<"������ɾ��ѧ���ĵ�ѧ�ţ�"<<endl;
		cin>>t;
		do
		{   
			string x,y,z;//�������
		    string s;
			getline(filein,s);//����ÿһ��
			istringstream sin(s);
			sin>>x>>y>>z;//��s�е�һ���ַ�����a
            ofstream fileout("student1.txt",ios::app);//д�����ļ���ȥ
			
			if(m!=x||t!=y)//�ж��Ƿ�Ϊɾ���ĵط�
			fileout<<s<<endl;//д������

			if(m==x&&t==y)//�ж��Ƿ�Ϊɾ���ĵط�
			{
				n=1;
				cout<<"ԭѧ����ϢΪ:"<<endl;
				cout<<"������"<<x<<endl;
				cout<<"ѧ�ţ�"<<y<<endl;
				cout<<"���룺"<<z<<endl;
				cout<<"�Ƿ�ɾ������Y���ǣ�N����"<<endl;
				char a;//�������
				cin>>a;
				if(a=='Y')
				{
					cout<<"ɾ���ɹ���"<<endl;
				}
			    if(a=='N')
				{
					cout<<"δɾ����"<<endl;
				    fileout<<x<<" "<<y<<" "<<z<<endl;//д�뵽�ļ�
				}
				if(a!='Y'||a!='N')
				{
					system("pause");
				}
				fileout.close();//�ر��ļ�
			}
			
		}
		while(!filein.eof());//�ж��Ƿ��ļ�β
		if(n==0)//���������ѧ��
		cout<<"δ�ҵ�Ҫɾ����ѧ����"<<endl;
	}
	filein.close();//�ر�

	ifstream filei("student1.txt");//���ĵ�
	ofstream fileout("student.txt",ios::out);//���ĵ����������

	for(string s;getline(filei,s);)//���޸ĺ������д���ļ���ȥ
	{
		fileout<<s<<endl;
	}
	filei.close();//�ر��ļ�
	fileout.close();//�ر��ļ�
	system("del student1.txt");//ɾ���ļ�����



}

manage::~manage()//��������
{
}
