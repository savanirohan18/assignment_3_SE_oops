/*o Create a class BankAccount with data members like balance and member
functions like deposit and withdraw. Implement encapsulation by keeping the
data members private.*/

#include<iostream>
using namespace std;

class bankaccount
{
	private:
		
		int	balance,total,deposi,withd;
		
	public:
		void getvalue();
		void deposit();
		void withdrow();
};

void bankaccount::getvalue()
{
	cout<<"enter the balance";
	cin>>balance;
}

void bankaccount::deposit()
{
	cout<<"\nenter the deposite";
	cin>>deposi;
	cout<<"\nbalance:"<<balance;
	total=balance+deposi;
	cout<<"\ntotalbalance"<<total;
}

void bankaccount::withdrow()
{
	cout<<"\nenter the withdrow";
	cin>>withd;
	
	if(balance<=2000)
	{
		cout<<"\nnot valid balance not withdrow \n"<<balance;
	}
	else
	{
		cout<<"\nbalance:"<<balance;
		total=balance-withd;
		cout<<"\ntotalbalance"<<total;
	}
}

main()
{
	bankaccount obj;
	obj.getvalue();
	
	int choice;
	cout<<"enter the choice";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			obj.deposit();
			break;
			
		case 2:
			obj.withdrow();
			break;
		
		default:
			cout<<"invlid choice";
	}
}
