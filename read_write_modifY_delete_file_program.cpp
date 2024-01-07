//WAP to read from file,write data to file ,read one record 
//display total records of file 
//this program has different member functions to work with file
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
	  fflush(stdin);
	  gets(name);
	  cout<<"enter age";
	  cin>>age;	
	  }	
	 void display()
	 {
	 	
		 cout<<"Name"<<name<<"\t"<<"age:"<<age<<endl;
	 	
	 }
	 
	void write2file()
	{
	 char ch;
	 fstream outfile;
	 outfile.open("classsdemo.dat",ios::binary|ios::app);
	 if(!outfile)
	 {
	 	cout<<"cannot open file";
	 }
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
	fstream infile;
	infile.open("classsdemo.dat",ios::binary|ios::in);
	
	if(!infile)
	{
		cout<<"files doesnot exist";
		return;
	}
	while(!infile.eof())
	{
	if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
	display();
    }
	infile.close();
	}
	void modify()
	{
		int n;
		cout<<"enter record number to edit";
		cin>>n;
		cout<<"enter new record";
		getdata();//read new record
		fstream outfile;
	    outfile.open("classsdemo.dat",ios::binary|ios::out|ios::in);
	    outfile.seekp((n-1)*sizeof(*this));//cursor to position
	    outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
	}
	void deleterec()
	{
		int n,i=0;
		cout<<"enter rec no to delete";
		cin>>n;
		ifstream infile("classsdemo.dat",ios::binary);
		fstream tmpfile("temp.dat",ios::out|ios::binary);
		while(!infile.eof())
	    {
	    if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
	       {
	       	i=i+1;
		 if(i!=n)
		 {
		 display();
		 tmpfile.write(reinterpret_cast<char*>(this),sizeof(*this));
	    }
	    }
    }
    infile.close();
    tmpfile.close();
    remove("classsdemo.dat");
    rename("temp.dat","classsdemo.dat");
   
	}
	
	void displaycount()
	{
	fstream infile;
	int n;
	infile.open("classsdemo.dat",ios::binary|ios::in);
	infile.seekg(0,ios::end);
	int count=infile.tellg()/sizeof(student);
	
	cout<<"there are "<<count<<"students in file"<<endl;
	cout<<"enter student number";
	cin>>n;
	infile.seekg(sizeof(student)*(n-1));
	infile.read(reinterpret_cast<char*>(this),sizeof(*this));
	display();
	}
	 
};
int main()
{
	student stu;
	int choice;
	cout<<"enter 1 for writing new data to file"<<endl;
	cout<<"enter 2 for reading for file"<<endl;
	cout<<"enter 3 for read one record "<<endl;
	cout<<"enter 4 to exit for program";
	cout<<"\n5 modify\n6delete";
		
	while(1)
	{
		cout<<"enter choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				stu.write2file();
				break;
			case 2:
				stu.readfromfile();
				break;
			case 3:
				stu.displaycount();
				break;
			case 5:
				stu.modify();
				break;
			case 4:
				exit(0);
				break;
			case 6:
				stu.deleterec();
				break;
			default:
				cout<<"invalid choice";
		}
     }
	
        
	return 0;
}

