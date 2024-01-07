//virtual functions:run time polymorphism 
#include<iostream>
using namespace std;
class Animal
{
	public:
	virtual	void display()
		{
			cout<<"display from base class"<<endl;
		}
};
class Cat:public Animal
{
	public:
		void display()
		{
			cout<<"display from Cat class"<<endl;
		}
	
};
class Dog:public Animal
{
	public:
		void display()
		{
			cout<<"display from Dog class"<<endl;
		}
	
};
int main()
{
	Animal *panm;//base class pointer
	//Animal anm;//base class object
	//panm=&anm;
    panm->display();
	Cat ct;	//derived class object
	panm=&ct;
	panm->display();
	Dog dg;//derived class object
	panm=&dg;
	panm->display();
	return 0;
}
/*int/int=int
int/float=float
float/int=float
float/float=float*/



