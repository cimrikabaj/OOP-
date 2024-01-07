//program with more than one templates
//Templates
/*1.Function template 
generic programming
syntax:
	template<class template_type,...>
	return_type function_name(parameter1,parameter2..,parametern)
	{
		//function body
	}
*/
#include<iostream>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b)
{
	cout<<"a is "<<a<<"b is "<<b<<endl;
}

int main()
{
int a=6,b=7;
display<int,int>(a,b);//template function call
float f1=6.7;
display<int,float>(a,f1);//template function call with int and float values
display("hero",8);
return 0;
};

