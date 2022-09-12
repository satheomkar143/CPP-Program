#include<iostream>
using namespace std;
class student
{
	private:
		int roll_n;
		string name;
		float per;
		
	public:
		void accept()
		{
			cout<<"\nEnter roll no. : ";
			cin>>roll_n;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter percentage : ";
			cin>>per;
		}
		void display()
		{
			cout<<"\n"<<roll_n<<"\t\t"<<name<<"\t"<<per;
			
			if(per>=75)
				cout<<"\t\tFirst class with distinction";
			else if(per>=60)
				cout<<"\t\tFirst class";
			else if(per>=50)
				cout<<"\t\tSecond class";
			else if(per>=35)
				cout<<"\t\tPass";
			else
				cout<<"\t\tFail";
		}
};
main()
{
	int n, i;
	cout<<"\nEnter number of students: ";
	cin>>n;
	
	student s[n];
	
	for(i=0;i<n;i++)
		s[i].accept();
		
	cout<<"\nRoll no.\tname\tpercentage\tclass";
	
	for(i=0;i<n;i++)
		s[i].display();
}
