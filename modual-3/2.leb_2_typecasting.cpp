/*o Write a C++ program that performs both implicit and explicit type conversions and
prints the results*/

#include<iostream>
using namespace std;

main()
{
	//implicit type conversions
	int a=10;
	float b=12.12,c;
	
	c=a+b;
	cout<<"\nc:"<<c;
	
	//explicit type conversions
	int x=10;
	float y=12.12,z;
	
	z=x+(int)y;
	cout<<"\nz:"<<z;
	
	
}

