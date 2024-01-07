//Reference variable
//datatype &refvariablename=variablename;
//alternative name
#include<iostream>
using namespace std;
int main()
{
	int p=56;
	int &ref=p;
	//int &ref1=13;
    cout<<"normal:"<<p<<endl;
    cout<<"reference:"<<ref<<endl;
    p+=10;  //p=p+10
    cout<<"normal:"<<p<<endl;
    cout<<"reference:"<<ref;
    ref+=10;
    cout<<"normal:"<<p<<endl;
    cout<<"reference:"<<ref;
}
