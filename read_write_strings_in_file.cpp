//Program writes name in file using fout object 
//program read data from file using fin object


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fout;
	char name[25],email[20];
	fout.open("country.txt",ios::out);
	if(!fout)
	{
		cout<<"file cannot be created";
	}
	fout<<"hari dahal\n";
	fout<<"rabin dhakal\n";
	fout<<"samarika dahal\n";
	cout<<"enter name";
	cin.getline(name,25);//reading input with space from user
	fout<<name;//writing data of name variable to file
	fout<<"\n";
	cout<<"enter email";
	cin.getline(email,20);//writing email to file
	fout<<email;//writing email to file
	fout.close();
	

	ifstream fin;
	fin.open("country.txt");
	if(!fin)
	{
		cout<<"file not found to read";
		
	}
	while(fin)
	{
	    fin.getline(name,25);//to read from file
		cout<<name;
		cout<<"\t";
	
	}
	//cout<<name;
	fin.close();
}
