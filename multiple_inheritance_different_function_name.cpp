//multiple inheritance example
//Since the name of function is different for base classes there is not 
//any chance of ambiguity error.You can call function without class name
//and scope resolution operator
#include<iostream>
using namespace std;
class B1
{
	public:
		void displaybase1()
		{
			cout<<"i am base1";
		}
	
};
class B2
{ 	public:
		void displaybase2()
		{
			cout<<"i am base2";
		}
	
};
class D:public B1,public B2
{ 
public:
	void displayderived()
	{ 
		displaybase1();//base class function
		displaybase2();//base class function
		cout<<"i am derived class function";
	}
	
};
int main()
{
 D der;	
 //der.displaybase1();
// der.displaybase2();
 der.displayderived();
 return 0;
}

