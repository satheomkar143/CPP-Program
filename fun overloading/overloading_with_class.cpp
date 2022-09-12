#include<iostream>
using namespace std;
class math
{
	public:
		void product(int a, int b)
		{
			cout<<"\nproduct = "<<a*b;
		}
		void product(double a, double b)
		{
			cout<<"\nproduct = "<<a*b;
		}
		void product(int a, double b)
		{
			cout<<"\nproduct = "<<a*b;
		}
		void product(double a, int b)
		{
			cout<<"\nproduct = "<<a*b;
		}
};

main()
{
	math m;
	m.product(4,5);
	m.product(4.4,5.5);
	m.product(4,5.5);
	m.product(4.4,5);
}
