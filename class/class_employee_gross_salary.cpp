#include<iostream>
using namespace std;
class employee
{
	private:
		int id, b_sal, HRA, DA, g_sal;
		string name;
		
	public:
		void accept()
		{
			cout<<"\nEnter employee Id : ";
			cin>>id;
			cout<<"\nEnter employee name : ";
			cin>>name;
			cout<<"\nEnter basic salary : ";
			cin>>b_sal;
		}
		void display()
		{
			HRA = b_sal * 30/100;
			DA = b_sal * 12/100;
			g_sal = b_sal + HRA + DA;
			
			cout<<"\n"<<id<<"\t"<<name<<"\t"<<b_sal<<"\t\t"<<HRA<<"\t"<<DA<<"\t"<<g_sal;
		}
};

main()
{
	int n, i;
	cout<<"\nEnter number of employee: ";
	cin>>n;
	
	employee e[n];
	
	for(i=0;i<n;i++)
		e[i].accept();
		
	cout<<"\nID"<<"\tName"<<"\tBasic sal"<<"\tHRA"<<"\tDA"<<"\tGross sal";
	
	for(i=0;i<n;i++)
		e[i].display();
}




