/*o Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them.*/

#include<iostream>
using namespace std;

main()
{
	//variable
	int a=20;
	string name="rohan";
	float a1=34.67;
	char a2='a';
	
	cout<<"\na:"<<a;
	cout<<"\nname:"<<name;
	cout<<"\na1:"<<a1;
	cout<<"\na2:"<<a2;
	
	//variable change value
	a=25;
	cout<<"\n"<<a;
	
	//const variable
	const int b=20;
	const string name1="rohan";
	const float b1=34.67;
	const char b2='r';
	
	cout<<"\na:"<<b;
	cout<<"\nname:"<<name1;
	cout<<"\na1:"<<b1;
	cout<<"\nb2:"<<b2;
	
	//const variable change value
	b=22;
	cout<<"\n"<<b;
	
}
