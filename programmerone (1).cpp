//this namespace is used in namespaceprogram.cpp
namespace one{
	void sum(int a,int b)  //function definition
	{
	int c=a*a+b*b;
	cout<<"inside namespace one"<<c<<endl;  //endlin
	}
	namespace second
	{
		int s=100;
	}
	
}
