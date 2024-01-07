//single inheritance with same function name in base and derived

#include<iostream>
using namespace std;
class profile //parent class
{
	private:
		int age;
		char name[20];
	public:
		void input()//to get input from user
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
		void input()
		{
		
			cout<<"enter field:";
			cin>>field;
		}
		void display()
		{
			cout<<"field:\t";
			cout<<field;
		}		
};
int main()
{	
	player playerone;
	playerone.profile::input();
	playerone.input();  //member function of same class player
	playerone.profile::display();
    playerone.player::display();
	return 0;


}


