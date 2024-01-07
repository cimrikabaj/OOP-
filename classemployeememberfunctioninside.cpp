//class object
//class:user defined data type 
//int,float:predefined
//structure:user defined data type
//C++:structure class
//access specifier:private,public,protected
/*struct employee
{
	char name[20];
	float salary;
};
int main()
{
	struct employee e1;
	e1.salary=12888;
}*/
#include<iostream>
#include<string.h>
using namespace std;
class employee
{	
	private:
	char name[25];
	float salary;
	int age;
	public://member function
	void setdata()
	{
	cout<<"enter name";
	cin>>name;
	cin>>salary;
	cin>>age;
	}
	void display(){
		cout<<"data are: "<<name<<salary<<age<<endl;	
	}
};
int main()
{
	employee e1;//e1 object 	
    e1.setdata();
    e1.display();
    employee e2;
    e2.setdata();
    e2.display();
}
