//program for function template
//overloading function template with function
#include<iostream>
#include<string.h>
using namespace std;
template<class T>
T find_max(T a,T b)
{
	T res;
	if(a>b)
	res=a;
	else
	res=b;
	//return res;
}
char find_max(char m,char n)
{
	if(strcmp(m,n)>0)
	return m;
	else
	return n;
}


int main()
{
	char str1[]="apple";
	char str2[]="applz";
	cout<<find_max(str1,str2);
	char a,b;
	cout<<"enter 2 characters";
	cin>>a>>b;
	char c=find_max(a,b);
	cout<<"result "<<c;
	
	float f1,f2;
	cout<<"enter float values";
	cin>>f1>>f2;
	cout<<"result "<<find_max(f1,f2);
	
	int i1,i2;
	cout<<"enter integer values:";
	cin>>i1>>i2;
	cout<<"result "<<find_max(i1,i2);
	
	//cout<<find_max(i1,f1);
	
	return 0;
}
