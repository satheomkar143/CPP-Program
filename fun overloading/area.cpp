#include<iostream>        //same function name but diff parameter
using namespace std;
int area(int l, int b)
{
	return l*b;
}
double area (int r)
{
	return 3.14 * r * r;
}
main()
{
	cout<<"\narea of rectangle: "<<area(4,5);
	cout<<"\narea of circle: "<<area(6);
}
