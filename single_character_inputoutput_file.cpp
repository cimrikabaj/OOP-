//writing data using put() function and reading using get() function
//put and get are used to read single characters
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char name[25],name1;
	ofstream  outfile;
	outfile.open("info.txt");
	cout<<"enter name";
	gets(name);//read data with space
	for(int i=0;i<strlen(name);i++)
	outfile.put(name[i]);//put write to file but one character at a time
	outfile.put('\n');
	outfile.close();
	
	ifstream infile;
	infile.open("info.txt");
    while (infile)
    {
		if(name1!='\n')
		{
		char name1=infile.get(); //read one character at a time
		cout<<name1;
	    }
    }
    infile.close();
	
    return 0;
}
