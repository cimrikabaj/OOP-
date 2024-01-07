//protected data member in base class
#include<iostream>
using namespace std;
class profile
{
	protected:
		int age;
		char name[20];
};
class  player:public profile//single inheritance
{
	private:
		char field[20];
	public:
		void input()
		{
			cout<<"enter age and name:";
			cin>>age; //age:23 enter
			fflush(stdin);
			gets(name);
			cout<<"enter field:";
			cin>>field;
		}
		void display()
		{
			cout<<"name:"<<name<<"age"<<age;
			cout<<"field:";
			cout<<field;
		}		
};
int main()
{	
	player playerone;
	playerone.input();  //member function of same class player
    playerone.display();
	return 0;
}
