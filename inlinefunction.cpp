//inline function:compiler request
//program execution fast
//useful for small functions
#include<iostream>
using namespace std;
void add(int,int);
int main()
{
	add(12,15);
	add(2,4);
	add(12,45);
	add(12,14);
}

inline void add(int a,int b)
{
	cout<<"sum:"<<a+b<<endl;
}
