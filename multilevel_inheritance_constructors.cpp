//Multilevel inheritance constructors(default,parameterised)
#include<iostream>
using namespace std;
class base1
{
	public:
		base1()
		{
			cout<<"base1 grandparent"<<endl;
		}
		base1(int b)
		{
			cout<<"value form base 1"<<b<<endl;
		}
};
class base2:public base1
{
	public:
		base2(int a,int b):base1(b)
		{
			cout<<"value from base2"<<a;
		}
		base2()
		{
			cout<<"base2 parent";
		}
};
class base3:public base2
{
	public:
		base3()
		{
			cout<<"base3";
		}
		base3(int a,int b,int c):base2(a,b)
			{
			cout<<"value from base3"<<c;	
			}
};
int main()
{
	base3 c(12,14,15);
	base3 d;
	return 0;
}
