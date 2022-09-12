#include<iostream>			//single inheritance
using namespace std;
class college
{
	protected:
		int center_no;
		char cname[20];
	public:
		void accept()
		{
			cout<<"\nEnter center number: ";
			cin>>center_no;
			cout<<"\nEnter college name: ";
			cin>>cname;
		}
};
class student : public college
{
	protected:
		int roll_no;
		char name[20];
		float marks;
	public:
		void getdata()
		{
			cout<<"\nEnter roll number: ";
			cin>>roll_no;
			cout<<"\nEnter student name: ";
			cin>>name;
			cout<<"\nEnter marks: ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\nCenter no: "<<center_no;
			cout<<"\nCollege name: "<<cname;
			cout<<"\nRoll no: "<<roll_no;
			cout<<"\nStudent name: "<<name;
			cout<<"\nMarks: "<<marks;
		}
};
main()
{
	student s1;
	s1.accept();
	s1.getdata();
	s1.display();
}
