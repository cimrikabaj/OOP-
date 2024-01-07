//WAP to find maximum  and minimum value of an array using class template.
#include<iostream>
using namespace std;
template<class T>
class demo
{
	private:
		T a[5];
	public:
		void getdata()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"enter values:";
				cin>>a[i];
			}
		}
		T get_max()
		{
			T max=a[0];
			for(int i=1;i<5;i++)
			{
				if(max<a[i])
				{
				max=a[i];	
				}
			}
			return max;
		}
		T get_min()
		{
			T min=a[0];
			for(int i=1;i<5;i++)
			{
				if(min>a[i])
				{
				min=a[i];	
				}
			}
			return min;
		}		
};
int main()
{
	demo <int>d;
	d.getdata();
	cout<<"maximum int value is:"<<d.get_max()<<endl;
	cout<<"minimun int value is"<<d.get_min()<<endl;
	demo <float>f1;
	f1.getdata();
	cout<<"maximum float value is:"<<f1.get_max()<<endl;
	cout<<"minimun float value is"<<f1.get_min()<<endl;
	return 0;
}
