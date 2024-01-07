//cout cin
//iostream.h
//:: scope resolution
//namespace :naming conflict ,scope
//calculate Y=m*m+n*n
//this program contains file of programmerone.cpp and programmertwo.cpp
#include<iostream>
using namespace std;
#include "programmerone.cpp"
#include "programmertwo.cpp"
using namespace one;
int main()
{
	int num1,num2;
	cin>>num1>>num2;
    sum(num1,num2);  //function call
	two::sum(num1,num2);
	cout<<"nested"<<second::s;	
}




