//WAP to find maximum value of an array.
/*
class template
syntax:
	template<class template_type,...>
	class class_name
	{
	 private:
	  //data members of template type and non template type
	 public:
	 //member function with template type argument 
	 //and non template type argument	
	};
	*/
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
};
int main()
{
	demo <int>d;
	d.getdata();
	cout<<"maximum int value is:"<<d.get_max()<<endl;
	demo <float>f1;
	f1.getdata();
	cout<<"maximum float value is:"<<f1.get_max()<<endl;
	return 0;
}
