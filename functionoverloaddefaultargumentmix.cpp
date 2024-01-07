//default argument
#include<iostream>
using namespace  std;
void display(int=12,int=12);//FP1
void display(int,int,int);//FP2
//void display();  //FP3
int main()
{
	display(12,13,14);
	display(14,13);
	display(12);  //
	display();
	return 0;
}

void display(int a,int b)
{
	cout<<"multiplication"<<a*b;
}
void display(int a,int b,int c)
{
	cout<<"add"<<a+b+c;
}
/*void display()
{
	cout<<"without arg";
}*/
