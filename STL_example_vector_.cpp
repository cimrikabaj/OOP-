//program that demonstrate vector functions
/*STL
standard template library
Three key components:
	container,iterator,algorithms
	*/
	//
	//program to demonstrate different functions of vector and 
	//reverse() which is algorithm 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(7);
	v.push_back(6);//add element at last
	
	for(int i=0;i<v.size();i++)
	{
		cout<<"elements";
			cout<<v[i]<<endl;
	}
	
	cout<<v.back()<<endl;//returns last element
	
	cout<<v.size()<<endl;//returns size
	
	v.pop_back();//remmove last element
	for(int i=0;i<v.size();i++)
	{
		cout<<"elements";
			cout<<v[i]<<endl;
	}
	
	reverse(v.begin(),v.end());
	
		for(int i=0;i<v.size();i++)
	{
		cout<<"elements";
			cout<<v[i]<<endl;
	}
	
	return 0;
}
