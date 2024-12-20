/*o Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
	int r,usernum,i;
	srand(time(0));
	r=rand()%10;
	
	for(i=0;i<5;i++)
	{
		cout<<"\nenter the user number";
		cin>>usernum;
		
		if(usernum>r)
			cout<<"\nnumber is big";
			
		else if(usernum<r)
			cout<<"\nnumber is small";		
				
		else if(usernum==r)
			{
			cout<<"\nyou are win";
			break;
			}
				
	}
	
	if(i==5)
	{
		cout<<"\n\n you are lose";
	}




	
	

	

	
}
