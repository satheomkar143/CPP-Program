#include<iostream>
using namespace std;
class book
{
	private: 
		int id, price;
		string b_name, a_name;
	public:
		void get()
		{
			cout<<"\nEnter register id of book: ";
			cin>>id;
			cout<<"\nEnter book name: ";
			cin>>b_name;
			cout<<"\nEnter author name: ";
			cin>>a_name;
			cout<<"\nEnter book price: ";
			cin>>price;
		}
		void show()
		{
			cout<<id<<"\t"<<b_name<<"\t\t"<<a_name<<"\t\t"<<price<<"\n";
		}	
};
main()
{
	int i, n;
	cout<<"\nEnter number of records: ";
	cin>>n;
	book b[n];
	for(i=0;i<n;i++)
		b[i].get();
		
	cout<<"ID\tbook name\tauthor name\tprice\n";
		
	for(i=0;i<n;i++)
		b[i].show();
}
