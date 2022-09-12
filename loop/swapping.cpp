#include<iostream>
using namespace std;
main()
{
	int a, b, temp;
	cout<<"\nEnter a= ";
	cin>>a;
	
	cout<<"\nEnter b= ";
	cin>>b;
	
/*	temp = a;
	a = b;
	b = temp;
*/	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"\nAfter swapping a = "<<a<<" and b = "<<b;
}
