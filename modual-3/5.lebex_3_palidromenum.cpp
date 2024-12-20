/*o Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).*/

#include<iostream>
using namespace std;

main()
{
	int n,rem,sum=0,ans;
	
	cout<<"enter the n:";
	cin>>n;
	
	ans=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	
	if(ans==sum)
	{
		cout<<"palidrom number";
	}
	else
	{
		cout<<"not palidrome number";
	}
}
