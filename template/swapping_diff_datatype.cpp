#include<iostream>
using namespace std;
template <class T> // t any name 		//template function
void swap(T a, T b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"\na = "<<a<<"\tb = "<<b;
}
main()
{
	int a=1, b=2;
	float c=3.5, d=5.6;
	char e='A', f='B';
	swap(a,b);
	swap(c,d);
	swap(e,f);
}

