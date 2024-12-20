//o Write a C++ program to perform matrix addition on two 2x2 matrices

#include<iostream>
using namespace std;

main()
{
	int a[2][2],b[2][2],cc[2][2],r,c;
	cout<<"\n-----------matrix-1-------------\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<"enter the element["<<r<<"]["<<c<<"]";
			cin>>a[r][c];
		}
	}
	cout<<"\n-----------matrix-2-------------\n";
	for(r=0;r<2;r++)
		{
		for(c=0;c<2;c++)
		{
			cout<<"enter the element["<<r<<"]["<<c<<"]";
			cin>>b[r][c];
		}
	}
	
	cout<<"\n-----------matrix-1-------------\n";
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			cout<<a[r][c];
		}
		cout<<"\n";
	}
	cout<<"\n-----------matrix-2-------------\n";
	for(r=0;r<2;r++)
		{
		for(c=0;c<2;c++)
		{
			cout<<b[r][c];
		}
		cout<<"\n";
	}
	
	for(r=0;r<2;r++)
		{
		for(c=0;c<2;c++)
		{
			cc[r][c]=a[r][c]+b[r][c];
		}
	}
	cout<<"\n-----------matric-3-------------\n";
	for(r=0;r<2;r++)
		{
		for(c=0;c<2;c++)
		{
			cout<<cc[r][c];
		}
		cout<<"\n";
	}
	
}
