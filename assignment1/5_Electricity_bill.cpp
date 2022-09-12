#include<iostream>
using namespace std;

class bill
{
	private:
		int id, unit;
		float bill;
		string name;
	public:
		void accept()
		{
			cout<<"\nEnter id: ";
			cin>>id;
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nEnter unit: ";
			cin>>unit;
		}
		void display()
		{
			if(unit <=199)   //238.8
				bill = unit * 1.20;
			else if(unit<=399)    //300
				bill = 238.8 + (unit - 199) * 1.50;
			else if(unit <=599)    //360
				bill = 538.8 + (unit - 399) * 1.80;
			else
				bill = 898.8 + (unit - 599) * 2.00;
				
			cout<<id<<"\t"<<name<<"\t"<<unit<<"\t";       
			
			if(bill < 100)
				bill = 100;
			else if(bill > 400)
				bill = bill + bill * 15/100;
				
			cout <<bill<<" Rs\n";
			
		}
};
main()
{
	bill b[10];
	int n, i;
	
	cout<<"\nEnter no of records : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		b[i].accept();
	}
	
	cout<<"\nid\tname\tunit\tbill\n";
	for(i=0;i<n;i++)
	{
		b[i].display();
	}
}

