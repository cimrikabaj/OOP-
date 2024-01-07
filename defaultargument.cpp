/*1.Function overloading
functionnanme same,different number of argument,argument type
2.Default argument
sum(int=23,int=23,int=23);
3.Reference variable
int p=10;
int &var=p;
*/
#include<iostream> 
using namespace std;
void display(int=10,int=12);
int main()
{
	int m1=4,m2=6;
	display(m1,m2);
	display(m1);
	display();
}

void display(int m,int n)
{
	cout<<"multiplication"<<m*n;
}

