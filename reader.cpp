#include "reader.h"
#include"book.h"

reader::reader()
    {
	name="δ����";

    }

string reader::getName()const//�������
        {
               return name;
        }

string reader::getNumber()const//���ѧ��
        {
               return number;
        }

string reader::getCode()const//�������
        {
               return code;
        }

void reader::setName(string n)//�趨����
      {
		  name=n;
	  }

void reader::setNumber(string nu)//�趨ѧ��
      {
		  number=nu;
	  }

void reader::setCode(string c)//�趨����
      {
		  code=c;
	  }

int reader::getInformation()//��֤��Ϣ
      {
           cout<<"��ӭ��½ͼ�����ϵͳ��"<<endl;
           string a,b,t;
           cout<<"������������"<<endl;
           cin>>a;
           cout<<"������ѧ�ţ�"<<endl;
           cin>>b;
           cout<<"���������룺(��ʼ����Ϊѧ��)"<<endl;
           cin>>t;

		   string n,nu,c;
           ifstream in("student.txt");//���ļ�
		   int i=0;//��ǩ���ж��˺ŵĴ������
           do
           {
			     
                  if(in.eof())//�ļ�β�ͽ���
                  break;
				  string s;//�������
			      getline(in,s);//����ÿһ��
			      istringstream sin(s);//����sin��
                  sin>>n>>nu>>c;
				  if((a==n)&&(b==nu)&&(c==t))//�˺Ŵ���
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

void reader::reviseCode()//�޸�����
      {    
		  int t=0;//��ǩ���ж��˺��Ƿ����
		  string a,b,c,d,e,f;//�������
		  cout<<"�����������Ϣ��"<<endl;
		  cout<<"����:"<<endl;
		  cin>>d;
		  cout<<"ѧ�ţ�"<<endl;
		  cin>>e;
		  cout<<"���룺(��ʼ����Ϊѧ��)"<<endl;
		  cin>>f;
		  ifstream in("student.txt");//���ļ�
		  string s1;
          while( getline(in,s1))//��������
           {
			 istringstream sin(s1);//����sin1��
             sin>>a>>b>>c;
			 ofstream out("student1.txt",ios::app);//��д���ļ�
             if((a==d)&&(b==e)&&(c==f))//�ж��Ƿ�������ȷ
             {
				t=1;
				string m,p,q;//�������
				cout<<"�������޸ĺ����Ϣ:" <<endl;
				cout<<"������"<<endl;
				cin>>m;
				cout<<"ѧ�ţ�"<<endl;
				cin>>p;
				cout<<"���룺"<<endl;
                cin>>q;
				out<<m<<" "<<p<<" "<<q<<endl; 
				cout<<"�޸ĳɹ�"<<endl;
		      }
		      else
			     out<<a<<" "<<b<<" "<<c<<endl;//д��δ�޸ĵ�����
		         out.close();//�ر��ļ�
			}
		   in.close();//�ر��ļ�

		ifstream filein("student1.txt");//���ĵ�
		ofstream fileout("student.txt",ios::out);//���ĵ����������
		string s;
		while(getline(filein,s))//���޸ĺ������д���ļ���ȥ
		{
			fileout<<s<<endl;
		}
		filein.close();//�ر��ļ�
		fileout.close();//�ر��ļ�

		if(t==0)//�˺��������
        {
	       cout<<"�������"<<endl;
	     }
		 system("del student1.txt");//ɾ���ļ�
      }

void reader::search()//�����ѯ����
{
	book book1;//ʵ��������
	ifstream filein("store.txt");//���ļ�
	if(!filein)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
	}
	else
	{
		cout<<"�������ѯ��������"<<endl;
		string t;//��������
		cin>>t;
		int m=0;//��ǩ���ж��Ƿ����Ȿ��
		for(string s;getline(filein,s);)//�ж϶��������
		{
			int v;
			string a,x,y,z,u,w;//�������
			istringstream sin(s);//����sin��
			sin>>a;//����ÿ�еĿ�ͷ
			if(t==a)//�ж��Ƿ��ҵ����ҵ��鼮
			{
				m++;
				x=a;
				sin>>y>>z>>u>>w>>v;//��һ���ַ�������
				book1.setName(x);//�趨����
				book1.setAuthor(y);//�趨����
				book1.setISBN(z);//�趨ISBN��
				book1.settype(u);//�趨����
				book1.setPress(w);//�趨������
				book1.setStatue(v);//�趨״̬
				book1.printBookInformation();//���
			    break;
			
	        }
		}
		if(m==0)//�ж��Ƿ��д��鼮
			cout<<"δ�ҵ�Ҫ���ҵ��鼮��"<<endl;
		}
	filein.close();//�ر��ļ�

}

void reader::borrowBook()//������麯��
  {
	book book2;//ʵ��������
	cout<<"�������鼮���ƣ�"<<endl; 
	ifstream filein("store.txt");//���ļ�
    string t;//��������
	cin>>t;
	int m=0;
	for(string s;getline(filein,s);)//�ж϶��������
	{
		int v;
		string a;//����ÿ�еĿ�ͷ
		string x,y,z,u,w;
		istringstream sin(s);
		sin>>a;
		if(t==a)//�ж��Ƿ��ҵ�����鼮
		{
			m++;
			x=a;
			sin>>y>>z>>u>>w>>v;//��һ���ַ�������
			book2.setName(x);//�趨����
			book2.setAuthor(y);//�趨����
			book2.setISBN(z);//�趨ISBN��
			book2.settype(u);//�趨����
			book2.setPress(w);//�趨������
			book2.setStatue(v);//�趨״̬
			book2.printBookInformation();//���
			break;
        }   
	 }

	if(m==0)//�ж��Ƿ��д��鼮
		cout<<"δ�ҵ�Ҫ����鼮��"<<endl;
		filein.close();//�ر��ļ�

	if(book2.getbookStatue()==0)//�Ƿ��ڹ�
	{
	cout<<"�Ƿ���飿��Y:��,N:��"<<endl;
	char n;
	cin>>n;
	if(n=='Y')
	{
		cout<<"������"<<t<<endl;
		cout<<"����ɹ���"<<endl;
		ifstream filein("store.txt");//���ļ�
		do
		{   
			string x,y,z,u,w;//�������
		    string s;
			getline(filein,s);//����ÿһ��
			istringstream sin(s);
			sin>>x;//��s�е�һ���ַ�����a
            ofstream fileout("restore1.txt",ios::app);//д�����ļ���ȥ
			
			if(t!=x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			fileout<<s<<endl;//д������

			if(t==x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			{
				sin>>y>>z>>u>>w;//��һ���ַ�������
				book2.setName(x);//�趨����
				book2.setAuthor(y);//�趨����
				book2.setISBN(z);//�趨ISBN��
				book2.settype(u);//�趨����
				book2.setPress(w);//�趨������
				book2.setStatue(1);//�趨״̬
				 fileout<<book2.getName()<<" "<<book2.getbookAuthor()<<" "<<book2.getbookISBN()<<" "<<book2.gettype()
					 <<" "<<book2.getbookPress()<<" "<<book2.getbookStatue()<<endl;//д����Ӧֵ
				 fileout.close();//�ر��ļ�
			}
			
		}
		while(!filein.eof());//�ж��Ƿ��ļ�β
		filein.close();//�ر�

	ifstream filei("restore1.txt");//���ĵ�
	ofstream fileout("store.txt",ios::out);//���ĵ����������
    for(string s;getline(filei,s);)//���޸ĺ������д���ļ���ȥ
	{
		fileout<<s<<endl;
	}
	filei.close();//�ر��ļ�
	fileout.close();
	system("del restore1.txt");//ɾ���ļ�����
	}

	 else
		 if(n=='N')
	{cout<<"δ���飡"<<endl;}
	else
	{
		cout<<"�������"<<endl;
    }

	}
	else //�ѽ���޷��ٽ�
	{
		cout<<"�����ѽ��!"<<endl;
		system("pause");
	}
    
}

void reader::returnBook()//���廹�麯��
{
	book book3;//ʵ��������
	cout<<"�������鼮���ƣ�"<<endl;
	ifstream filein("store.txt");//���ļ�
	string t;//��������
	cin>>t;
	int m=0;//��ǩ���Ƿ����Ȿ��
	for(string s;getline(filein,s);)//�ж϶��������
	{
		int v;
		string a;//����ÿ�еĿ�ͷ
		string x,y,z,u,w;
		istringstream sin(s);
		sin>>a;
		if(t==a)//�ж��Ƿ��ҵ�����鼮
		{
			m++;
			x=a;
			sin>>y>>z>>u>>w>>v;//��һ���ַ�������
			book3.setName(x);//�趨����
			book3.setAuthor(y);//�趨����
			book3.setISBN(z);//�趨ISBN��
			book3.settype(u);//�趨����
			book3.setPress(w);//�趨������
			book3.setStatue(v);//�趨״̬
			book3.printBookInformation();//���
			break;
		}   
	    }
	if(m==0)//�ж��Ƿ��д��鼮
		cout<<"δ�ҵ�Ҫ�����鼮��"<<endl;
        filein.close();//�ر��ļ�
	if(book3.getbookStatue()!=0)//�ж��Ƿ񱻽����
	{
	cout<<"�Ƿ��飿��Y:��,N:��"<<endl;
	char n;
	cin>>n;
	if(n=='Y')
	{
		cout<<"������"<<t<<endl;
		cout<<"����ɹ���"<<endl;
		ifstream filein("store.txt");
		do
		{   
			string x,y,z,u,w;//�������
		    string s;
			getline(filein,s);//����ÿһ��
			istringstream sin(s);
			sin>>x;//��s�е�һ���ַ�����a
            ofstream fileout("restore2.txt",ios::app);//д�����ļ���ȥ
			if(t!=x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			fileout<<s<<endl;//д������
            if(t==x)//�ж��Ƿ�Ϊ�޸ĵĵط�
			{
				sin>>y>>z>>u>>w;//��һ���ַ�������
				book3.setName(x);//�趨����
				book3.setAuthor(y);//�趨����
				book3.setISBN(z);//�趨ISBN��
				book3.settype(u);//�趨����
				book3.setPress(w);//�趨������
				book3.setStatue(0);//�趨״̬
				 fileout<<book3.getName()<<" "<<book3.getbookAuthor()<<" "<<book3.getbookISBN()<<" "<<book3.gettype()
					 <<" "<<book3.getbookPress()<<" "<<book3.getbookStatue()<<endl;//д����Ӧֵ
				 fileout.close();
			}
			
		}
		while(!filein.eof());//�ж��Ƿ��ļ�β
		filein.close();//�ر�

	ifstream filei("restore2.txt");//���ĵ�
	ofstream fileout("store.txt",ios::out);//���ĵ����������
    for(string s;getline(filei,s);)//���޸ĺ������д���ļ���ȥ
	{
		fileout<<s<<endl;
	}
	filei.close();//�ر��ļ�
	fileout.close();//�ر��ļ�
	system("del restore2.txt");//ɾ���ļ�����
	}
    else
	if(n=='N')
	{
		cout<<"δ���飡"<<endl;
	}
	else
	{
		cout<<"�������"<<endl;}
	}
	else 
	{
		cout<<"����δ�����"<<endl;
		system("pause");
	}
	}

reader::~reader()
{
}
