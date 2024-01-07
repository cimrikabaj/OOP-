//reading from file using ifstream object
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 char fileread[25];
 ifstream infile("information.txt");//opening file for reading mode
 infile>>fileread;//To read from file
 
 cout<<"data from file"<<fileread;//to display on screen*/
 
 return 0;
}
