//Function overloading:
#include<iostream>
using namespace std;
void display(int=10);
void display(char);
void display(int,int);
int main()
{
	int i;
	char c;
	cin>>i>>c;
	display(i); //argument i
	display(c); 
	display(4,5);
	display(); //argument 10
	return 0;
}
void display(int p)
{
	cout<<"square is"<<p*p;
}
void display(char c)
{
	cout<<"character is"<<c;
}
void display(int a,int b)
{
	cout<<"multiplication is"<<a*b;
}



	
