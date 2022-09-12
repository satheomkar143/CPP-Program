#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		string name;
		float marks;
	
	public:
		void accept()
		{
			cout<<"\nEnter roll no : ";
			cin>>roll_no;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter marks : ";
			cin>>marks;
		}
		
		void display()
		{
			cout<<"\nroll no = "<<roll_no;
			cout<<"\nname = "<<name;
			cout<<"\nmarks = "<<marks;
			
		}
};
main()
{
	student s1, s2, s3;
	s1.accept();
	s1.display();
	
	s2.accept();
	s2.display();
	
	s3.accept();
	s3.display();
}
