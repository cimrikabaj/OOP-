//inline function
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
	void setdata(char [],float ,int);	
    void display();
};
void employee::setdata(char n[25],float s,int a)
	{
	strcpy(name,n);
	salary=s;
	age=a;
	}
void employee::display(){
		cout<<"data are: "<<name<<salary<<age<<endl;	
	}
int main()
{
	employee e1;//e1 object 
    e1.setdata("anup",12222.5,25);
    e1.display();
    employee e2;
    e2.setdata("swoopna",1222.4,23);
    e2.display();
}
