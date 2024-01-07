//WAP to overload binary operator using member function.
//c=a+b;
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
	complex operator+(complex num1) //member function
	{
		complex temp;
		temp.rp=this->rp+num1.rp;
		temp.ip=this->ip+num1.ip;
	    return temp;
	}
	
	void display()
	{
		cout<<"real"<<rp<<"imag"<<ip;
	}

};
int main()
{
	complex c1(5,6),c2(6,8),c3;
	
	c3=c1+c2;//operator overload  c1.operator+(c2)
	
	c3.display();
}

