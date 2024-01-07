//file read write student data
//you can read and write with fstream class as shown below
//or you can use ofstream and ifstream 
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
		char name[25];
		int age;
	public:
	  void getdata()
	  {
	  cout<<"enter student name:";
	  cin>>name;
	  cout<<"enter age";
	  cin>>age;	
	  }	
	 void display()
	 {
	 	cout<<"name:"<<name<<"\t"<<"age:"<<age<<endl;
	 }
};
int main()
{
	student stu,stu1;
	fstream outfile;
	outfile.open("classstudent.dat",ios::binary|ios::app|ios::in);
	stu.getdata();//get data from keyborad
	outfile.write(reinterpret_cast<char*>(&stu),sizeof(stu));
	
	outfile.seekg(0,ios::beg);
	while(!outfile.eof())
	{
	if(outfile.read(reinterpret_cast<char*>(&stu1),sizeof(stu1))>0)
	stu1.display();
    }
	outfile.close();
	
	return 0;
}

