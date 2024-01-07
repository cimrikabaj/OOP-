/*catching all exception
catch(...)
{
	cout<<"caught all";
}*/

//multiple catch
#include<iostream>
using namespace std;
void test(int i) throw(char)
{
	try
	{
		if(i==1) throw 'e';
		else if(i==2) throw 1.0;
		else if(i==3) throw 1;
	}
	catch(char c)
	{
		cout<<"character exception";
		throw;
	}
	catch(...)
	{
		cout<<"caught all exception";
	}
}
int main()
{
	try{
	test(1);
	test(2);
	test(3);
}catch(char c)
{
	cout<<"rethrow"<<c;
}
	return 0;	
}
