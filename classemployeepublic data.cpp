/*class syntax:
	class classname{
		//data member
		//member function
	};
*/
#include<iostream>
#include<string.h>
using namespace std;
class employee
{	
	public:
	char name[25];
	float salary;
	int age;	
};
int main()
{
	employee e1;//e1 object 
    strcpy(e1.name,"Ashok");
    e1.salary=1233.33;
    e1.age=16;
    cout<<e1.age<<e1.salary<<e1.name;
}
