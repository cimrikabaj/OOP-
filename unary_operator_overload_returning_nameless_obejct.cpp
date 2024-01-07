//WAP to overload increment operator. post increment and preincrement
#include<iostream>
using namespace std;
class sample
{
	private:
		int testvalue;
	public:
		sample(){}
		sample(int test)
		{
			testvalue=test;
		}
		
		sample operator++(int)//postincrement //dummy value
		{
		return	sample(testvalue++);//nameless object
		}
		sample operator++()//preincrement
		{
		
			return	sample(++testvalue);//nameless object 
		}
		void display()
		{
			cout<<"Test value:"<<testvalue<<endl;
		}
	
};
int main()
{
	sample S1=sample(5),s2(14),s3,s4;
	s3=++S1;//S1.operator++() 
	s4=s2++;
    S1.display();
    s2.display();
    s3.display();
    s4.display();
}

