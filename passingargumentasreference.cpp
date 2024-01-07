//square of any given number using function(reference var)
#include<iostream>
using namespace std;
void square(int,int&);
int main()
{
	int var,store;
	cin>>var;
	square(var,store);
	cout<<"var value inside main"<<store;
	
}
void square(int p,int &st)
{
	st=p*p;
}
/*Practice question:
	WAP To swap 2 values using function and display result from main.*/
