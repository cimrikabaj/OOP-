//single inheritance calling member function of parent from child class

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
			getdata();//call function of parent
			cout<<"enter field:";
			cin>>field;
		}
		void display()
		{
			displayparent(); //parent function
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

