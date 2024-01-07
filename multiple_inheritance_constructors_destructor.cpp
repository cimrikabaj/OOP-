//multiple inheritance with parameterised and default constructor,destructor
#include<iostream>
using namespace std;
class base1
{
	public:
		base1()
		{
			cout<<"constructor of base1";
		}
		base1(int var1)
		{
			cout<<"parameterized of base1:"<<var1<<endl;
		}
		~base1()
		{
			cout<<"destructor from base1";
		}
};
class base2
{
	public:
		base2()
		{
			cout<<"constructor of base2";
		}
		base2(int var)
		{
			cout<<"paramterised of base2";
			cout<<var<<endl;
		}
		~base2()
		{
			cout<<"destructor from base2";
		}
	
};
class child:public base1,public base2
{ 
public:
	child()
	{
		cout<<"child constructor";
	}
	child(int x,int y,int z):base1(x),base2(y)
	{
		cout<<"parameterised constructor of child";
		cout<<"value of z"<<z;
	}
		~child()
		{
			cout<<"destructor from child";
		}
	
	
};
int main()
{
	child c;//call constructor automatically
	child c1(12,13,14);//parameterised constructor call
	return 0;
}
