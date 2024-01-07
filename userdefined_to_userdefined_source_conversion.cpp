//conversion of user defined to user defined 
//1.conversion in source class
#include<iostream>
#include<cmath>
using namespace std;
class cartesian
{
    private:
   		float x,y;
    public:
    	cartesian(){}
    	cartesian(float a,float b){
    		x=a;
    		y=b;
		}
		void display()
		{
		cout<<"rectangular coordinates:"<<x<<"and"<<y;	
			
		}	
};

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
		operator cartesian()
		{
		    
			float x=r*cos(theta);
			float y=r*sin(theta);
			return cartesian(x,y);
			
			
			
		}
	
};

int main()
{
	polar p(10,0.78);
	cartesian c;//default constructor
	c=p;//conversion in source class
	c.display();
	return 0;	
}

