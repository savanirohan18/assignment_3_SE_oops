/*o Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/

#include<iostream>
using namespace std;

	int gv=10;
	
void abc();

void abc()
{
	int lv=20;
	cout<<"\ninside globle variable"<<gv;
	cout<<"\ninside local variable"<<lv;
}

main()
{
	cout<<"\noutside globle variable"<<gv;
//	cout<<"\ninside local variable"<<lv;
	
	abc();
}
