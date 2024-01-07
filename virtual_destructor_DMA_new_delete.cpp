//virtual destructor needed for DMA new and delete
//check outout with and without virtual keyword for destructor
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"constructor of base";
		}
		virtual void display()
		{
		cout<<"display of base";	
		}
	   virtual ~base()
		{
			cout<<"destructor of base";
		}
};
class child:public base
{

public:
		child()
		{
			cout<<"constructor of child";
		}
		void display()
		{
			cout<<"this is display of child";
		}
		~child()
		{
			cout<<"destructor of child";
		}
};
int main()
{//DMA new and delete
 base *ptr;
 ptr=new child;//DMA
 ptr->display();
 delete ptr;
 return 0;	
}

