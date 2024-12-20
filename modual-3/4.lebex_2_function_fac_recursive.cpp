/*o Write a C++ program that calculates the factorial of a number using recursion*/

#include<iostream>
using namespace std;

int factorial(int);

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*(factorial(n-1));
	}
}

main()
{
	int n;
	
	cout<<"enter the n:";
	cin>>n;
	
	int ans=factorial(n);
	cout<<ans;
}
