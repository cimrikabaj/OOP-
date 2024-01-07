//overloading template with template and normal function
#include<iostream>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b)
{
	cout<<"template function";
	cout<<"a is "<<a<<"b is "<<b<<endl;
}

void display(int a,int b)
{
	cout<<"function that takes int "<<a<<" and "<<b<<endl;
}

template<class T>
void display(T a)
{
	cout<<"one argument display function"<<a<<endl;
}

int main()
{
int a=6,b=7;
display(a,b);//function with 2 integers call
float f1=6.7;
display(a,f1);//template function call with int and float values
display("hero","boy");

display(78);//template function call int
display(89.9);
display("hello");
return 0;
};

