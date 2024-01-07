//WAP to overload + operator using friend function
#include<iostream>
using namespace std;
class complex
{
	private:
		float rp;
		float ip;
	
	public:
	complex(){}//default
	complex(float r,float i)
	{
		rp=r;
		ip=i;
    }
	void display()
	{
		cout<<"real"<<rp<<"imag"<<ip;
	}
	friend complex operator+(complex,complex);
};
complex operator+(complex number1, complex number2)
{
	complex temporary;
	temporary.rp=number1.rp+number2.rp;
	temporary.ip=number1.ip+number2.ip;
	return temporary;
}
int main()
{
	complex c1(5,6),c2(6,8),c3;
	
	c3=c1+c2;//operator overload  operator+(c1,c2);
	
	c3.display();
}
Practice Questions:
	1.WAP to overload decrement operator. post decrement and predecrement
	2.WAP to compare(<,==,<) 2 distances(feet,inch) using operator overloading.
