//constructors and destructors call for single inheritance
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"default of base"<<endl;
		}
		~base()
		{
			cout<<"destructor of base"<<endl;
		}
};
class child:public base
{
	public:
		child()
		{
			cout<<"default of child"<<endl;
		}
		~child()
		{
			cout<<"destructor of child"<<endl;
		}
	
};
int main()
{
	child c1;
	return 0;
}

