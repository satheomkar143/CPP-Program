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
		friend void max(A a,B b);
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
		friend void max(A a,B b);
};
void max(A a, B b)
{
	if(a.i>=b.j)
		cout<<"max = "<<a.i;
	else
		cout<<"max = "<<b.j;
}
main()
{
	A a;
	B b;
	int n1, n2;
	cout<<"Enter two number: ";
	cin>>n1>>n2;
	a.setvalue(n1);
	b.setvalue(n2);
	max(a,b);
}
