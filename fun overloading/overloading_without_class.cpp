#include<iostream>
using namespace std;
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
main()
{
	product(4,5);
	product(4.4,5.5);
	product(4,5.5);
	product(4.4,5);
}
