#include<iostream>			//hirarchical
using namespace std;
class staff
{
	protected:
		int code;
	public:
		void get()
		{
			cout<<"\nEnter staff code: ";
			cin>>code;
		}		
};
class teacher : public staff
{
	protected:
		string subject;
	public:
		void get()
		{
			staff::get();
			cout<<"\nEnter subject: ";
			cin>>subject;
		}
		void show()
		{
			cout<<"\nStaff code: "<<code;
			cout<<"\nTeacher's subect: "<<subject;
		}
};
class officer : public staff
{
	protected:
		char grade;
	public:
		void get()
		{
			staff::get();
			cout<<"\nEnter grade: ";
			cin>>grade;
		}
		void show()
		{
			cout<<"\nStaff code: "<<code;
			cout<<"\nOfficer grade: "<<grade;
		}
};

main()
{
	teacher t;
	t.get();
	t.show();
	
	officer o;
	o.get();
	o.show();
}
