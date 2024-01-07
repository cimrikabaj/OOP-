#include<iostream>
#include<string.h>
using namespace std;

//class markserr{};
class markserr{};
class stu
{
	char name[25];
	int rn,marks;
	public:
		class rollerr{
	
public:
	int rn;char *m;
	rollerr(int r,char *msg)
	{
		rn=r;
		m=new char[strlen(msg)+1];
		strcpy(m,msg);
	}
};
	
		void getdata()
		{ 
			cin>>name>>rn>>marks;
			if(rn<0)
			throw rollerr(rn,"entering negative");
			if(marks>100)
			throw markserr();
		}
		void showdata()
		{
			cout<<"output:"<<name<<rn<<marks;
		}
};


int main()
{
	stu s1;
	try
	{
		s1.getdata();
		s1.showdata();
	}
	catch(stu::rollerr err)
	{
		cout<<"rollerr"<<err.rn;
		cout<<err.m;
	}
	catch(markserr)
	{
		cout<<"markserr";
	}
	return 0;
}
