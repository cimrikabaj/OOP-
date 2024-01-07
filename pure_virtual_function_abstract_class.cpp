
//example of pure virtual function and abstract class
#include<iostream>
using namespace std;
class Animal//abstract class
{
	public:
	virtual	void display()=0;//pure virtual function
	void commonfunction()
	{
		cout<<"this is common function";
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
			cout<<"display of class dog";
		}
};
int main()
{
	Animal *panm;//base class pointer
	Cat ct;	//child class or derived class
	panm=&ct;
	panm->display();
	panm->commonfunction();
	Dog dg;
	panm=&dg;
	panm->display();//display of Dog class
	return 0;
}




