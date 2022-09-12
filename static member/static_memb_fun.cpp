//static member function
#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public:
		void setcode()
		{
			code = count++;
		}
		void showcode()
		{
			cout<<"\ncode = "<<code;
		}
		static void showcount()
		{
			cout<<"\ncount = "<<count;
		}
};
int test::count=0;
main()
{
	test t1,t2;
	t1.setcode();
	t2.setcode();
	test::showcount();
	
	test t3;
	t3.setcode();
	test::showcount();
	
	t1.showcode();
	t2.showcode();
	t3.showcode();
}
