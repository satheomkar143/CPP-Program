#include<iostream>			//static data member
using namespace std;
class student
{
	public:
		static int count;  //static variable name
		void get()
		{
			count++;
			cout<<"\ncount = "<<count;
		}
};
//datatype class name :: static variable name
int student :: count=0;
main()
{
	student s1;
	student s2;
	student s3;
	s1.get();
	s2.get();
	s3.get();
}
