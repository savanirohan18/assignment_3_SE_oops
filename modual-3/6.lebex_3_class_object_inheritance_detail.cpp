/*o Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/

#include<iostream>
using namespace std;

class parson
{
	protected:
		string s_name,t_name;
	public:
		void get();
		void get1();
};

void parson::get()
{
	cout<<"enter the s_name:";
	cin>>s_name;
}

void parson::get1()
{
	cout<<"\nenter the t_name:";
	cin>>t_name;
}

class student : public parson
{
	protected:
		int age;
		string course;
	public:
		void put();
};

void student::put()
{
	cout<<"enter the age:";
	cin>>age;
	cout<<"enter the course:";
	cin>>course;
	
	cout<<"\ns_name:"<<s_name;
	cout<<"\nage:"<<age;
	cout<<"\ncourse:"<<course;
}

class teacher : public parson
{
	protected:
		int id;
		int salary;
	public:
		void put2();
		void print();
};

void teacher::put2()
{
	cout<<"enter the id:";
	cin>>id;
	cout<<"enter the salary:";
	cin>>salary;
}

void teacher::print()
{
	
	cout<<"\nt_name:"<<t_name;
	cout<<"\nid:"<<id;
	cout<<"\nsalary:"<<salary;
	
}

main()
{
	student obj;
	obj.get();
	obj.put();
	teacher ob;
	ob.get1();
	ob.put2();
	ob.print();
}
