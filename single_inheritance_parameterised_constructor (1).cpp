//passing value to base
#include<iostream>
using namespace std;
class base
{
	public:
		base(int b)
		{
			cout<<"paramterized of base";
			cout<<"value passed is"<<b;
		}
};
class child:public base
{
	public:
		child(int a,int b):base(a)
		{
			cout<<"child";
			cout<<"value is b"<<b;
		}
};
int main()
{
	child c(45,90);
	return 0;
}


