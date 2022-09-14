#include<iostream>
using namespace std;
template <class T> 
void swaping(T a, T b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"\nAfter swapping a = "<<a<<"\tb = "<<b;
}
main()
{
	int a=1, b=2;
    cout<<"\nBefore swapping a = "<<a<<"\tb = "<<b;
	swaping(a,b);

}

