/*o Write a program that prints a right-angled triangle using stars (*) with a nested loop.*/

#include<iostream>
using namespace std;

//main()
//{
//	int r,c,s;
//	
//	for(r=1;r<=5;r++)
//	{
//		for(s=4;s>=r;s--)
//		{
//			cout<<" ";	
//		}
//		for(c=0;c<r;c++)
//		{
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//}

main()
{
	int r,c,s;
	
	for(r=1;r<=5;r++)
	{
		for(c=0;c<r;c++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
