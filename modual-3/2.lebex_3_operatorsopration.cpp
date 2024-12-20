/*o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results*/

#include<iostream>
using namespace std;

main()
{
	//arithmatic operators
	int a=10,b=20;
	
	cout<<"\naddition:"<<a+b;
	cout<<"\nsubtraction:"<<a-b;
	cout<<"\nmultiplication:"<<a*b;
	cout<<"\ndivision:"<<a/b;
	cout<<"\nmodual:"<<a%b;
	
	//relational operators
	cout<<"\n--------------------------------------";
	int a1=50,b1=100;
	
	cout<<"\nlessthen:"<<(a1<b1);
	cout<<"\ngreterthen:"<<(a1>b1);
	cout<<"\nlessthenequal:"<<(a1<=b1);
	cout<<"\ngreterthenequal:"<<(a1>=b1);
	cout<<"\nequal:"<<(a1==b1);
	cout<<"\nnotequal:"<<(a1!=b1);
	
	//logical operators
	cout<<"\n--------------------------------------";
	int x=10,y=10,z=30;
	
	if(x==y && y==z)
	{
		cout<<"\nsame";
	}
	else
	{
		cout<<"\ndiffrent";
	}
	
	if(x==y || y==z || z==x)
	{
		cout<<"\nsame";
	}
	else
	{
		cout<<"\ndiffrent";
	}
	
	if(!(x==z))
	{
		cout<<"\ndiffrent";
	}
	else
	{
		cout<<"\nsame";
	}
	
	
}
