//WAP to calculate z=a/b
//try 
/*
throw 
catch
syntax:
	try{
		
		//code that raise exception or
		//call to function that raise exception
		if(operation_fails)
		throw obj1;
	}
	catch(type1 obj1)
	{
		//action for handling appropriate exception for type1
	}*/

#include<iostream>
using namespace std;
int main()
{
	float a,b,z;
	cout<<"enter two values";
	cin>>a>>b;
	try{
		if(b==0)
		throw b;
	 else
		{
		z=a/b;
		cout<<"solution is"<<z;
    	}
    }
	catch(float c)
    {
    	cout<<"error in program due to value "<<c<<endl;
	}
    cout<<"code after try catch";
	return 0;
}
