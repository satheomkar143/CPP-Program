#include<iostream>
using namespace std;
class great
{
	private:
		int a,b;
	public:
		great()
		{
			a = 100;
			b = 50;
		}
		great(int x, int y)
		{
			a = x;
			b = y;
		}
		void max()
		{
			if(a>b)
				cout<<"\nGreater number between "<<a<<" and "<<b<<" is "<<a;
			else
				cout<<"\nGreater number between "<<a<<" and "<<b<<" is "<<b;
		}
};

main()
{
	great g1;
	g1.max();
	
	great g2(45, 89);
	g2.max();
	
	int n, n1;
	cout<<"\nEnter two number: ";
	cin>>n>>n1;
	
	great g3(n,n1);
	g3.max();
}









