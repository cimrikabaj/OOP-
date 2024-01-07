//WAP to find maximum value of an array.
//
/*self study:
	derived class template in single inheritance */

//default argument with class template
#include<iostream>
using namespace std;
template<class T=int,int size=5>
class demo
{
	private:
		T a[size];
	public:
		void getdata()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"enter values:";
				cin>>a[i];
			}
		}
		T get_max()
		{
			T max=a[0];
			for(int i=1;i<size;i++)
			{
				if(max<a[i])
				{
				max=a[i];	
				}
			}
			return max;
		}	
};
int main()
{
	demo <int>d;//size is default here
	d.getdata();
	cout<<"maximum int value is:"<<d.get_max()<<endl;
	demo <float,4>f1;
	f1.getdata();
	cout<<"maximum float value is:"<<f1.get_max()<<endl;
	demo <>i1;//default values
	i1.getdata();
	cout<<"answer"<<i1.get_max();
	return 0;
}
