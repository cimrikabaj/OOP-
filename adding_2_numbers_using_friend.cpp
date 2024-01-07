//no member function
#include<iostream>
using namespace std;
class complex
{
	private:
		float rp,ip;
	public:
		complex(){}//default
		complex(float r,float i)//parameterised
		{
			rp=r;
			ip=i;
		}
	
	friend void sumdata(complex,complex);//no member function			
};
void sumdata(complex o1,complex o2)
		{
			float t1=o1.rp+o2.rp;
			float t2=o1.ip+o2.ip;
			cout<<"real:"<<t1<<"img:"<<t2;
		}
int main()
{
	complex A1(5,6),A2(4,12),A3;
	sumdata(A1,A2);
}

