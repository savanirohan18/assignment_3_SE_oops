/*o Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/

//#include<stdio.h>
//main()
//{
//	int width,height,area;
//	
//	printf("enter the width");
//	scanf("%d",&width);
//	printf("enter the height");
//	scanf("%d",&height);
//	area=width*height;
//	printf("area of rectangle:%d",area);
//}


#include<iostream>
using namespace std;

class rectangle
{
	private:
		int width,height,area;
	public:
		void get();
		void print();
};

	void rectangle::get()
	{
		cout<<"enter the width";
		cin>>width;
		cout<<"enter the height";
		cin>>height;
	}
	void rectangle::print()
	{
		area=width*height;
		cout<<"area of rectangle:"<<area;
	}

main()
{
	rectangle obj;
	obj.get();
	obj.print();
	
}
