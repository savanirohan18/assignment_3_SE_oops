/*o Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.*/

#include<iostream>
using namespace std;

void getvalue(int,int);

void getvalue(int a,int b)
{
		
		int c;
		c=a+b;
		cout<<"\naddition:"<<c;
		c=a-b;
		cout<<"\naddition:"<<c;
		c=a*b;
		cout<<"\naddition:"<<c;
		c=a/b;
		cout<<"\naddition:"<<c;
}

main()
{
	
	int a,b;
		cout<<"enter the value a:";
		cin>>a;
		cout<<"enter the value b:";
		cin>>b;	
	getvalue(a,b);
}


		
