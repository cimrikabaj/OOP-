/*Related theory:
Operator overloading:
	int a=5;
	a=a+1; a++;
	


class ABC
{
	
}
ABC a1(4),a1(45),a4;
a1++;//error solution operator overloading
a4=a1+a2;//error solution operator overload

steps:
	member function unary arg=0    binary arg=1
	friend function unary arg=1    binary arg=2class test
	{
		
	};
	test object1;
	object1=object1+1;
	object++;
	
	operator overload
	syntax:
		return_type operator operator_symbol(argumentlist)
		{
			//function body
		}
		unary operator ++a,--b,+3,-3
		binary operator:c=a+b;  c=a-b;
2 types:
	member function  : unary no argument    binary:single argument
	friend function   :unary single argument  binary:2 argument

Operators that cannot be overloaded:
member access  operators(.)
scope resolution operator(::)
condition operator (?:)
sizeof operator (sizeof)
pointer to member access(.*)

	
	*/

//WAP to overload increment operator.
#include<iostream>
using namespace std;
class demo
{
	private:
		int testvariable;
	public:
		demo() //deffault
		{
		testvariable=0;
		}
		void display()
		{
		cout<<"value is:"<<testvariable;	
		}
		demo operator++()   //preincrement       //member function
		{
			demo temporary;
			temporary.testvariable=++testvariable;
			return temporary;
		}
		demo operator++(int) //postincrement
		{
			demo temporary;
			temporary.testvariable=testvariable++;
			return temporary;
	    }	
};
int main()
{
	demo d1,d2,d3,d4;//all 4 calls default
	d1.display();
	d3=++d1;//preincrement 
	d4=d2++;//post increment       
	d1.display();
	d2.display();
	d3.display();
	d4.display();
}
