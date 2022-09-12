#include<iostream>
using namespace std;
class cricket
{
	private:
		int id, run;
		string name;
		float s_rate;
		
	public:
		void accept()
		{
			cout<<"\nEnter ID no. : ";
			cin>>id;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter total runs: ";
			cin>>run;
			cout<<"\nEnter Strike rate : ";
			cin>>s_rate;
		}
		void display()
		{
			cout<<"\n"<<id<<"\t"<<name<<"\t"<<run<<"\t"<<s_rate;
		}
};

main()
{
	int n, i;
	cout<<"\nEnter number of records: ";
	cin>>n;
	
	cricket c[n];
	for(i=0;i<n;i++)
		c[i].accept();
		
	cout<<"\nID\tName\truns\tstrike rate";
	for(i=0;i<n;i++)
		c[i].display();
}
