#include<iostream>
using namespace std;
class hospital
{
	protected:
		string h_name;
		string h_add;
		int h_contact;
	public:
		void get()
		{
			cout<<"\nEnter hospital name: ";
			cin>>h_name;
			cout<<"\nEnter hospital address: ";
			cin>>h_add;
			cout<<"\nEnter hospital contact: ";
			cin>>h_contact;
		}
		void show()
		{
			cout<<"\nHospital name: "<<h_name;
			cout<<"\nHospital address: "<<h_add;
			cout<<"\nHospital contact: "<<h_contact;		
		}
};
class patient : public hospital
{
	protected: 
		int p_id, p_ward;
		string p_name;
	public: 
		void get()
		{
			cout<<"\nEnter patient ID: ";
			cin>>p_id;
			cout<<"\nEnter patient ward no.: ";
			cin>>p_ward;
			cout<<"\nEnter patient name: ";
			cin>>p_name;
		}
		void show()
		{
			cout<<"\nPatient ID: "<<p_id;
			cout<<"\nPatient ward no.: "<<p_ward;
			cout<<"\nPatient name: "<<p_name;		
		}
};
class bill : public patient
{
	protected:
		string b_date;
		int b_amount;
	public:
		void get()
		{
			hospital::get();
			patient::get();
			cout<<"\nEnter bill date in dd/mm/yyyy: ";
			cin>>b_date;
			cout<<"\Enter bill amount: ";
			cin>>b_amount;
		}
		void show()
		{
			hospital::show();
			patient::show();
			cout<<"\nBill date: "<<b_date;
			cout<<"\nBill amount: "<<b_amount;		
		}
};

main()
{
	bill b;
	b.get();
	b.show();
}
