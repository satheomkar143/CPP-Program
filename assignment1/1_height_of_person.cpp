#include<iostream>
using namespace std;
main()
{
	int h;
	cout<<"\nEnter height in centimeter: ";
	cin>>h;
	
	if(h<150)
		cout<<"\nThe person is Dwarf.";
	else if(h<165)
		cout<<"\nThe person is average heighted.";
	else if(h<=195)
		cout<<"\nThe person is taller.";
	else
		cout<<"\nAbnormal height.";
}

