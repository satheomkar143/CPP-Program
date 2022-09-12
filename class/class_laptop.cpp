#include<iostream>
using namespace std;

class laptop
{
	private:
		int model, price;
		string name;
		
	public:
		void accept()
		{
			cout<<"\nEnter model no : ";
			cin>>model;
			cout<<"\nEnter brand name : ";
			cin>>name;
			cout<<"\nEnter price : ";
			cin>>price;
		}
		
		void display()
		{
			cout<<"\n"<<model;
			cout<<"\t"<<name;
			cout<<"\t"<<price;
		}	
};

main()
{
	laptop l[10];
	int n, i;
	
	cout<<"\nEnter no of records : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		l[i].accept();
	}
	
	cout<<"\nmodel\tbrand\tprice\n";
	for(i=0;i<n;i++)
	{
		l[i].display();
	}
}








