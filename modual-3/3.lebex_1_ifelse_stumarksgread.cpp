/*o Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.*/

#include<iostream>
using namespace std;

main()
{
	int s1,s2,s3;
	float total,per;
	
	cout<<"enter the s1:";
	cin>>s1;
	cout<<"\nenter the s2:";
	cin>>s2;
	cout<<"\nenter the s3:";
	cin>>s3;
	
	total=s1+s2+s3;
	per=total/3;
	
	cout<<"\ns1marks:"<<s1;
	cout<<"\ns2marks:"<<s2;
	cout<<"\ns3marks:"<<s3;
	
	cout<<"\ntotal:"<<total;
	cout<<"\nper:"<<per;
	
		if(per>90)
			cout<<"\ngread A";
		else if(per<=90 && per>70)
			cout<<"\ngread B";
		else if(per<=70 && per>50)
			cout<<"\ngread C";
		else if(per<=50 && per>33)
			cout<<"\ngread D";
		else
			cout<<"\nfail";
	
	
}
