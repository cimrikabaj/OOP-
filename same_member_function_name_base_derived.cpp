//same function name in base and derived calling base class function from derived
#include<iostream>
using namespace std;
class profile //parent class
{
	private:
		int age;
		char name[20];
	public:
		void input()//to get input from user //member function of parent
		{
			cout<<"enter age and name:";
			cin>>age>>name;
		}
		void display()
		{
			cout<<"name:\t"<<name<<"age\t"<<age;
		}
};
class  player:public profile//single inheritance
{
	private:
		char field[20];
	public:
		void input() //member function of child
		{
			profile::input();//call function from parent
			cout<<"enter field:";
			cin>>field;
		}
		void display()
		{
			profile::display();//call function from parent
			cout<<"field:\t";
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

