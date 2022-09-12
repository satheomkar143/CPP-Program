#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void get()
		{
			cout<<"\nEnter Student roll no.: ";
			cin>>roll_no;
		}
};
class test : public student
{
	protected:
		int part1, part2;
	public:
		void get()
		{
			cout<<"\nEnter test 1 mark: ";
			cin>>part1;
			cout<<"\nEnter test 2 mark: ";
			cin>>part2;
		}
};
class sport
{
	protected:
		int score;
	public:
		void get()
		{
			cout<<"\nEnter Sport score: ";
			cin>>score;
		}
};
class result : public test, sport
{
	protected:
		int total;
	public:
		void get()
		{
			student::get();
			test::get();
			sport::get();
		}
		void show()
		{
			total = part1 + part2 + score;
			cout<<"\nRoll no.: "<<roll_no;
			cout<<"\nTest 1 mark: "<<part1;
			cout<<"\nTest 2 mark: "<<part2;
			cout<<"\nSport score: "<<score;
			cout<<"\nTotal: "<<total;
		}
};  

main()
{
	result r;
	r.get();
	r.show();
}
