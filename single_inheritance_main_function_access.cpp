//example of single inheritance
//Accessing both member function of parent and child from main().
#include<iostream>
using namespace std;
class profile
{
	private:
		int age;
		char name[20];
	public:
		void getdata()//to get input from user
		{
			cout<<"enter age and name:";
			cin>>age>>name;
		}
		void displayparent()
		{
			cout<<"name:"<<name<<"age"<<age;
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
			cout<<"field:";
			cout<<field;
		}	
};

int main()
{	
	player playerone;
	playerone.getdata(); //parent class public function
	playerone.input();  //member function of same class player
	playerone.displayparent();//parent class public function
    playerone.display();
    
	return 0;
}


