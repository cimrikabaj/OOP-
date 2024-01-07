/*file handling 
ifstream :to read from file
ios::in =to read 

ofstream  :to write to file
ios::out =to write

fstream:can read and write to file

ios::app =to add content
ios::binary =binary mode

get and put pointer
seekg()
seekp()
tellp()
tellg()

binary mode:
	write()
	read()
	
File open
1.Using constructor 
2.open() and close() function*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 char name[25];
 ofstream  out("information.txt");//opening file using constructor
 cout<<"enter name:";
 cin>>name;
 out<<name;//writing to file using object
 

return 0;
}

 
