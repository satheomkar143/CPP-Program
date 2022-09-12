// same fun name and same parameter but class is diff
#include<iostream>
using namespace std;
class base
{
	public: 
		void display()
		{
			cout<<"\nit is base class";
		}

};
class derived : public base
{
	public: 
		void display()
		{
			cout<<"\nit is derived class";
		}
};
main()
{
	derived d;
	d.display();
	
	base b;
	b.display();
}
