/*Binary mode:
	read((char*)adress,sizeinbyte)
	write((char*)address,size)
	
	to typecast:
		reinterpret_cast*/

//file reading writing display total number of students
// using member function

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
	 
	 void write2file()
	{
	 char ch;
	 ofstream outfile;
	 outfile.open("classstudent.dat",ios::binary|ios::app);
	 do
	 {
	 getdata();
	 outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
	 cout<<"Do you have next data to enter or not?(y/n)";
	 cin>>ch;
	 }while(ch=='y'||ch=='Y');
	 outfile.close();
	}
	
	void readfromfile()
	{
	ifstream infile;
	infile.open("classstudent.dat",ios::binary);	
	while(!infile.eof())
	{
	if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
	display();
    }
	infile.close();
	}
	
	void displaycount()
	{
	ifstream infile;
	infile.open("classstudent.dat",ios::binary);
	infile.seekg(0,ios::end);
	int count=infile.tellg()/sizeof(student);
	cout<<"there are "<<count<<"students in file"<<endl;
	}
	 
};
int main()
{
	student stu;
	stu.write2file();
	stu.readfromfile();
	stu.displaycount();
	return 0;
}

