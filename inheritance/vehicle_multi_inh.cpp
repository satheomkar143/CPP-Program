#include<iostream>			//multi inheritance
using namespace std;
class vehicle
{
	protected:
		int v_no;
	public:
		void accept()
		{
			cout<<"\nEnter vehicle number: ";
			cin>>v_no;
		}
};
class car : public vehicle
{
	protected:
		float c_price;
		string c_name;
	public:
		void getdata()
		{
			cout<<"\nEnter car name: ";
			cin>>c_name;
			cout<<"\nEnter car price: ";
			cin>>c_price;
		}
};

class bike : public car
{
	protected:
		float b_model;
		string bname;
	public:
		void get()
		{
			cout<<"\nEnter bike name: ";
			cin>>bname;
			cout<<"\nEnter bike model no: ";
			cin>>b_model;
		}
		void display()
		{
			cout<<"\nvehivle number: "<<v_no;
			cout<<"\ncar name: "<<c_name;
			cout<<"\ncar price: "<<c_price;
			cout<<"\nbike name: "<<bname;
			cout<<"\nbike model no: "<<b_model;
		}
};
main()
{
	bike b1;
	b1.accept();
	b1.getdata();
	b1.get();
	b1.display();
}
