/*
1.conversion from basic data type  to user defined:constructor
2.Conversion from user defined data type(class) to basic(int,float):operator function
3.COnversion from user defined to user defined
#include<iostream>
using namespace std;

class abc
{
	
};
abc object;
float b=8.79;
object=b;//conversion needed solution constructor

a=(int)b;
*/


//WAp to take input in Fahrenheit (float) and convert to degree celcius.
//C=(F-32)*5/9

#include<iostream>
using namespace std;
class temperature
{
	private:
		float cel;
	public:
		//temperature(){}//default constructor
		temperature(float f1)
		{
			cel=(f1-32)*5.0/9;
		}
		void display()
		{
			cout<<"celcius is:"<<cel;
		}

		
};
int main()
{
//	temperature t1;
	float fahrenheit;
	cin>>fahrenheit;
	temperature t1=fahrenheit;//constructor call parameterised automatic float as a argument
    t1.display();
    return 0;
}
