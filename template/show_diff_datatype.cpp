#include<iostream>
using namespace std;
template <class T> // t any name 		//template function
void show(T a, T b)
{
	cout<<"\na = "<<a<<"\tb = "<<b;
}
main()
{
	int a=1, b=2;
	float c=3.5, d=5.6;
	char e='A', f='B';
	show(a,b);
	show(c,d);
	show(e,f);
}

