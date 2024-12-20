/*o Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.*/

#include<iostream>
using namespace std;

main()
{
	int arr[20],n;
	float sum,avg;
	
	cout<<"enter the n:";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	cout<<"enter the element:["<<i<<"]";
	cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"]"<<arr[i];
		sum=sum+arr[i];
		avg=sum/n;
	}
	cout<<"\nsum:"<<sum;
	cout<<"\navg:"<<avg;
}

