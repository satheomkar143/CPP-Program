#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	cout<<"Enter three angles of triangle: ";
	cin>>a>>b>>c;
	
	if(a+b+c == 180)
		cout<<"\ntriangle can be formed by using this angles.";
	else 
		cout<<"\ntriangle can not be formed by using this angles.";
}

