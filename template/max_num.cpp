#include<iostream>
using namespace std;
template <class T>
void maximum(T a,T b)
{
	if(a>b)
		cout<<"max = "<<a;
	else
		cout<<"max = "<<b;
}
main()
{
	int a=14, b=2;
	maximum(a,b);
	
	float x=14.45, y=45.2;
	maximum(x,y);
}

