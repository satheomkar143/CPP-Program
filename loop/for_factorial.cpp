#include<iostream>
using namespace std;
main()
{
	int i, n, fact=1;
	cout<<"\nEnter number = ";
	cin>>n;
	
	for(i=n;i>1;i--)
		fact = fact * i;
	
	cout<<"\nFactorial of "<<n<<" is "<<fact;
}
