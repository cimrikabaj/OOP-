/*constructor:
	classname 
	function without return type
	object initialize
	more than one
	argument with/without
	automatic calls when object is created
	
destructor:
	default destructor:automatic call
	when object goes out of scope
	classname without argument
	~classsname()
	{
		//destructor
	}
*/
#include<iostream>
#include<string.h>
using namespace std;
class employee
{	
	private:
		char name[15]; 
		float salary;
		int age;
	public:
		employee()//default constructor
		{
		 cout<<"default constructor"<<endl;	
		 strcpy(name,"rojan");
		 salary=12000;
		 age=45;
		}
		employee(char n[],float s,int a)//parameterised constructor
		{
			cout<<"parameterised";
			strcpy(name,n);
			salary=s;
			age=a;
		}
		employee(employee &obj)//copy constructor
		{
			cout<<"copy constructor";
			strcpy(name,obj.name);
			salary=obj.salary;
			age=obj.age;
		}
		void display()
		{
			cout<<"name:"<<name<<salary<<age<<endl;
		}
		~employee()
		{
			cout<<"destructor";
		}
};
int main()
{
	employee e1,e2;
	employee e3("Ashok",45000,25);//e3 =object
	employee e4(e3);//copy constructor
	{
	employee e5("rabin",4500,22); 
	e5.display();
    }
	e1.display();
	e2.display();
	e3.display();
    e4.display();
}
