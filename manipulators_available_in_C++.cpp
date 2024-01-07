/*parameterised manipulators
   setw();
   setfill();
   setprecision();
   non parameterised manipulators
   endl
   dec 
   hex 
   oct*/
//
#include<iostream>
#include<iomanip>//for manipulators related function setw() setprecision
using namespace std;
int main()
{
   cout<<setw(10)<<setfill('*')<<18892<<endl;
   cout<<setprecision(4)<<12.4566<<endl;
   int x=123;
   cout<<hex<<x<<endl;
   cout<<oct<<x;
   cout<<dec<<x;  
}
