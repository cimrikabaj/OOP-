/*conversion from user defined to user defined
class ABC
{
	
};
class XYZ
{
	
};

ABC s1;
XYZ d1;
d1=s1;//conversion needed  solution1:constructor  solution2:casting operator function

s1=source operator type casting
d1=destination constructor

conversion of user defined to user defined 
1.conversion in destination class*/

#include<iostream>
#include<cmath>
using namespace std;
class polar
{
	private:
		float r,theta;
	public:
		polar(float r1,float t1)
		{
			r=r1;
			theta=t1;
		}
		float get_r()
		{
		  return r;	
	    }
	    float get_theta()
	    {
	    	return theta;
		}
	
};
class cartesian
{
    private:
   		float x,y;
    public:
    	cartesian(){}
	    cartesian(polar p1)//constructor
		{
			x=p1.get_r()*cos (p1.get_theta());
			y=p1.get_r()*sin (p1.get_theta());
		}
		void display()
		{
		cout<<"rectangular coordinates:"<<x<<"and"<<y;	
			
		}	
};
int main()
{
	polar p(10,0.78);
	cartesian c;//default constructor
	c=p;//calls constructor with argument p
	c.display();	
	return 0;
}



