#include<iostream>
using namespace std;
class B;			// forward declaration of class B
class A
{
	private:
		int i;
	public:
		void setvalue (int p)
		{
			i=p;
		}
		friend void min(A a,B b);
};
class B
{
	private:
		int j;
	public:
		void setvalue (int q)
		{
			j=q;
		}
		friend void min(A a,B b);
};
void min(A a, B b)
{
	if(a.i<=b.j)
		cout<<"min = "<<a.i;
	else
		cout<<"min = "<<b.j;
}
main()
{
	A a;
	B b;
	a.setvalue(50);
	b.setvalue(20);
	min(a,b);
}
