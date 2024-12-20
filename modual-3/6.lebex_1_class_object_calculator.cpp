/*o Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/

#include<iostream>
using namespace std;

class calculator
{
	private:
		int a,b;
	public:
		void get();
		void add();
		void sub();
		void mul();
		void div();
};

void calculator::get()
{
	cout<<"enter the a:";
	cin>>a;
	cout<<"enter the b:";
	cin>>b;
}

void calculator::add()
{
	cout<<"\n"<<a+b;
}

void calculator::sub()
{
	cout<<"\n"<<a-b;
}

void calculator::mul()
{
	cout<<"\n"<<a*b;
}

void calculator::div()
{
	cout<<"\n"<<a/b;
}

main()
{
	calculator obj;
	obj.get();
	
	int choice;
	
	cout<<"enter the choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\naddition:";
			obj.add();
			break;
			
		case 2:
			cout<<"\nsubtraction:";
			obj.sub();
			break;
			
		case 3:
			cout<<"\nmultiplication:";
			obj.mul();
			break;
			
		case 4:
			cout<<"\ndivision:";
			obj.div();
			break;
			
		default: 
			cout<<"invalid choice";
	}
}
