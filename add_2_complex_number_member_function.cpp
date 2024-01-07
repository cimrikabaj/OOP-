//WAP to add 2 complex numbers passing single object as argument.#include<iostream>
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
		void sumdata(complex o1)//member function
		{
			float t1=o1.rp+rp; //this->rp=rp
			float t2=o1.ip+ip;  //this->ip=ip
			cout<<"real"<<t1<<"img"<<t2;
		}
	
		
};
int main()
{
	complex A1(5,6),A2(4,12);
    A1.sumdata(A2);//function call A1 ,argument A2,this pointer
}
