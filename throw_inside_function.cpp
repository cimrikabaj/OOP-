//throw inside function
#include<iostream>
#include<math.h>
using namespace std;
void calculate(int a,int b)
{
   if(b!=0) {
   	float c;
	   cout<<"solution"<<a/b;
   	c=sqrt(b);
   	cout<<c;
   }	
   else
   throw b;
}

int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		calculate(a,b);
	}
	catch(int)
	{
		cout<<"error";
	}
}
