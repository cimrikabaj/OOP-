//program to show use of multiple template
#include<iostream>
using namespace std;
template<class T,class U>
class demo
{
private:
    T a;
    U b;
public:
	demo(T n1,U n2)
	{
		a=n1;
		b=n2;
	}
	void display()
	{
		cout<<"n1 is"<< a<<"and n2 is"<< b<<endl;
	}	
};
int main()
{
	demo <int,int>d1(8,5);
	d1.display();
	demo <int,float>d2(4,6.7);
	d2.display();
	
	demo<char*,int>d3("hello",8);
	d3.display();
	return 0;
}


