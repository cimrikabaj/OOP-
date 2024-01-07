/*1.conversion from basic data type  to user defined
2.Conversion from user defined data type(class) to basic(int,float)
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

//WAP to take celcius as input (class) and convert it into Fahrenheit(float)
/*1.input as celcius use class
2.F=(9/5)*C+32 use class
3.Display F (float display from main)
*/
#include<iostream>
using namespace std;
class temperature
{
	private:
		float celcius;
	public:
		void getdata()
		{
			cout<<"Enter celcius:";
			cin>>celcius;
		}
		operator float()  //operator return_type() {} 
		{
			float F;
			F=((float)9/5)*celcius+32;
			return F;
		}
		
};
int main()
{
	temperature t1;
	t1.getdata();
	float Fahrenheit;
	Fahrenheit=t1;//typecasting operator function Fahrenheit=temperature(t1)
	cout<<"result is:"<<Fahrenheit;
	return 0;
}
