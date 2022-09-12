#include<iostream>
using namespace std;
main()
{
	int i, a[3];
	cout<<"\nEnter three value:\n";
	for(i=0;i<=2;i++)
		cin>>a[i];
		
	cout<<"\nForward order:\n";
	for(i=0;i<=2;i++)
		cout<<a[i]<<"\n";
	
	cout<<"\nreverse order:\n";
	for(i=2;i>=0;i--)
		cout<<a[i]<<"\n";
	
}
