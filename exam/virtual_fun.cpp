#include<iostream>
using namespace std;
class animal
{
	public: 
		virtual void display()
		{
			cout<<"\nanimal sound";
		}

};
class lion : public animal
{
	public: 
		void display()
		{
			cout<<"\nroarrrrrrrrrr";
		}
};
main()
{
	
	
	animal a;
	animal *aptr;
	aptr = &a;
	aptr->display();
	
	lion l;
	aptr = &l;
	aptr->display();
}
