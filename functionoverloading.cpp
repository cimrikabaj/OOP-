//Function overloading
//default argument
/*Function overloading:
int	add(int,int);
float add(int,int,int);
int add(float,float);*/
#include<iostream>
using namespace  std;
void display(int);//fp1
void display(char);//fp2
void display(int,int);//fp3
int main()
{
	display(12);//fc1 //call function display(int p)
	display('Z');//fc2 
	display(14,13);//fc3
	return 0;
}
void display(int p)//fd1
{
	cout<<"interger is:"<<p;
}
void display(char d)//fd2
{
	cout<<"character"<<d;
}
void display(int a,int b)//fd3
{
	cout<<"multiplication"<<a*b;
}
