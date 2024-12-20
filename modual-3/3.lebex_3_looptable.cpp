/*o Write a C++ program to display the multiplication table of a given number using a
for loop.*/

#include<iostream>
using namespace std;

main()
{
	int n,i;
	cout<<"enter the n:";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
	}
}
