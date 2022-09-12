#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		string name;
		float salary;
		
	public:
		void accept()
		{
			cout<<"\nEnter id no : ";
			cin>>id;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter salary : ";
			cin>>salary;
		}
/*		void display()
		{
			cout<<"\nid no = "<<id;
			cout<<"\nname = "<<name;
			cout<<"\nsalary = "<<salary;
		}
*/		
		void display()
		{
			cout<<"\n"<<id;
			cout<<"\t"<<name;
			cout<<"\t"<<salary;
		}
};

main()
{
	employee e[10];
	int n, i;
	cout<<"\nEnter no of records: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		e[i].accept();
	}
	
	cout<<"\nE_id\tname\tsalary";
	
	for(i=0;i<n;i++)
	{
		e[i].display();
	}
}











