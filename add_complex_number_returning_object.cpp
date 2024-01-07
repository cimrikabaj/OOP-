/*assignment:
time t1,time t2 add
hr,min,sec*/
/*2 number 
member function sumdata(object1,object2)
A3.sumdata(A1,A2);//argument two

//////////////////
friend 
sumdata(A1,A2);
///
A1.sumdata(A2);//argument single*/
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
		complex sumdata(complex o1)//member function
		{
			complex t1;
			t1.rp =o1.rp+rp; //this->rp=rp
			t1.ip =o1.ip+ip;  //this->ip=ip
			return  t1;
		}
	/*	complex sumdata(complex o1)//member function
		{
			float r1 =o1.rp+rp; //this->rp=rp
			float i1 =o1.ip+ip;  //this->ip=ip
			return  complex(r1,i1);  //nameless object
		}*/
		
		void display()
		{
			cout<<"Sum is:"<<rp<<"+"<<ip<<"i";
		}
	
		
};
int main()
{
	complex A1(5,6),A2(4,12),A3;
    A3=A1.sumdata(A2);//function call A1 ,argument A2,this pointer
    A3.display();

}

