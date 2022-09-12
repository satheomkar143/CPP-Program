#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	cout<<"Enter three sides of triangle: ";
	cin>>a>>b>>c;
	
	if(a == b && b == c)
		cout<<"\ntriangle is Equilateral";
	else if(a != b && b != c && a != c)
		cout<<"\ntriangle is Scalene";
	else
		cout<<"\ntriangle is Isosceles";
}

