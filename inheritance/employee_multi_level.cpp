#include<iostream>			//multi level
using namespace std;
class Employee
{
	protected:
		int e_id, e_bs;
		string e_name;
	public:
		void get_emp()
		{
			cout<<"\nEnter employee ID: ";
			cin>>e_id;
			cout<<"\nEnter employee name: ";
			cin>>e_name;
			cout<<"\nEnter employee basic salary: ";
			cin>>e_bs;
		}
};
class Date
{
	protected:
		string date;
	public:
		void get_date()
		{
			cout<<"\nEnter date: dd/mm/yyyy: ";
			cin>>date;
		}
};
class admin : public Employee, public Date
{
	protected:
		int incent, gs;
	public:
		void get_admin()
		{
			cout<<"\nEnter incentive: ";
			cin>>incent;
			cout<<"\nEnter gross salary: ";
			cin>>gs;
		} 
		void display()
		{
			cout<<"\nid: "<<e_id;
			cout<<"\nName: "<<e_name;
			cout<<"\nBasic salary: "<<e_bs;
			cout<<"\ndate: "<<date;
			cout<<"\nincentive: "<<incent;
			cout<<"\ngross salary: "<<gs;
		}
};
main()
{
	admin a;
	a.get_emp();
	a.get_date();
	a.get_admin();
	a.display();
}
 
