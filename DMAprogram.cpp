//WAP to read n numbers from user and display average.

#include<iostream>
using namespace std;
int main()
{
	int *p,n,sum=0,i;
	cout<<"how many?";
	cin>>n;
	p = new int[n]; //DMA
	cout<<"enter each number";
	for( i=0;i<n;i++)
	{
	 cin>>p[i];                     // a[i]=*(a+i) 	
	// cin>>*(p+i);
	}
	for(i=0;i<n;i++)
	{
	 sum=sum+p[i];
	}
	float avg=sum/n;
	cout<<"average is "<<avg;
	delete []p;//deallocate
	return 0;
}
