//ambiguity in multiple inheritance:
#include<iostream>
using namespace std;
class base1
{
	public:
	void display()
	{
	cout<<"base1 function";	
	}
	
};
class base2
{
	public:
	void display()
	{
	cout<<"base2 function";	
	}
};
class derived:public base1,public base2
{ 
	public:
	void displayder()
	{
	    base1::display();//call display of base1
	    base2::display();
	    //display(); reference to display is ambiguous error
		cout<<"derived";
	}	
};
int main()
{
	derived der;
	//der.display(); generates ambiguity error 
	der.base1::display(); //to call function inside base1 class
	der.displayder();
	return 0;
}
