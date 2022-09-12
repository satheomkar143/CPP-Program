#include<iostream>
using namespace std;
class hello
{
	public:
		hello()
		{
			cout<<"\nit is constructor";
		}
		~ hello()
		{
			cout<<"\nit is destructor";
		}
		void display()
		{
			cout<<"\nhello world";
		}
};
main()
{
	hello h1,h2,h3,h4;
	h1.display();
	h2.display();
	h3.display();
	h4.display();
	//destructor work in reverse order of constructor
}
