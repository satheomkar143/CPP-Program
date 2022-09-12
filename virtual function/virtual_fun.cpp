// virtual functtion // only use in base class // always cteat obj and poiter of base class  // if class function name is same
#include<iostream>
using namespace std;
class base
{
	public: 
		virtual void display()
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
	
	
	base b;
	base *bptr;
	bptr = &b;
	bptr->display();
	
	derived d;
	bptr = &d;
	bptr->display();
}
