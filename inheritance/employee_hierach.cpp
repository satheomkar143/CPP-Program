#include<iostream>
using namespace std;
class employee
{
	protected:
		int id;
		string name;
	public:
		void get()
		{
			cout<<"\n\nEnter employee id: ";
			cin>>id;
			cout<<"\nEnter employee name: ";
			cin>>name;
		}
};
class worker : public employee
{
	protected:
		int salary;
	public:
		void get()
		{
			employee::get();
			cout<<"\nEnter worker overtime salary: ";
			cin>>salary;
		}
		void show()
		{
			cout<<"\nworker's ID no.: "<<id;
			cout<<"\nworker name: "<<name;
			cout<<"\nworker overtime salary: "<<salary;
		}
};
class manager : public employee
{
	protected:
		int allowance;
	public:
		void get()
		{
			employee::get();
			cout<<"\nEnter manager's allowance: ";
			cin>>allowance;
		}
		void show()
		{
			cout<<"\nmanager's ID no.: "<<id;
			cout<<"\nmanager name: "<<name;
			cout<<"\nmanager's' allowance: "<<allowance;
		}
};

main()
{
	worker w;
	w.get();
	w.show();
	
	manager m;
	m.get();
	m.show();
}
