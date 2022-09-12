#include<iostream>
using namespace std;
class Spark
{	protected:
		int fee, period;
	public:
		void menu()
		{
			cout<<"\nJAVA\t26000\t3months";
			cout<<"\nTesting\t26000\t3months";
			cout<<"\nPython\t26000\t3months";
			cout<<"\nFullstack JAVA\t36000\t6months";			
		}
};
class courses : public Spark
{
	protected:
		string course;
	public:
		void accept()
		{
			cout<<"\nEnter course name: ";
			cin>>course;
			cout<<"\nEnter course fee: ";
			cin>>fee;
			cout<<"\nEnter course period: ";
			cin>>period;
		}
		void display()
		{
			menu();
		}
};
main()
{
	courses c;
	c.accept();
	c.display();
}
