//multipath inheritance
//hybrid inheritance
#include<iostream>
using namespace std;
class grandparent
{
	private:
		char name[25];
	public:
		void getname()
		{
			cout<<"enter student name";
			cin>>name;
		}
		void display()
		{
			cout<<"name is"<<name;
		}
};
class firstterm:virtual public grandparent
{
	protected:
		float marks;
	public:
	void getmarks()
	{
		cout<<"enter first term marks:";
		cin>>marks;
	}
	void display()
	{
		cout<<"first term"<<marks;
	}
		
};
class secondterm:virtual public grandparent//making virtual class 
{
   protected:
   float secondtermmarks;
   public:
   void getmarkssecond()
   {
   	cout<<"enter marks";
   	cin>>secondtermmarks;
   	}
	void display()
	{
	cout<<"second term marks:"<<secondtermmarks;	
	}	
};
class child:public secondterm ,public firstterm
{
	private:
		float total;
  public:
  	void getdatachild()
  	{
  	getname();
  	getmarks();
  	getmarkssecond();
  	}
	  	
  	void totalmarks()
  	{
  	grandparent::display();
  	firstterm::display();
  	secondterm::display();
  	total=marks+secondtermmarks;
  	cout<<"total marks is"<<total;
 	 }
};
int main()
{
	child c1;
	c1.getdatachild();
	c1.totalmarks();
	return 0;
}

