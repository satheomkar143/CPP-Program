#include<iostream>
using namespace std;
main()
{
	int i, n, fact=1;
	cout<<"\nEnter number = ";
	cin>>n;
	
	i = n;
	while(i>1)
	{
		fact = fact * i;
		i--;
	}
		
	
	cout<<"\nFactorial of "<<n<<" is "<<fact;
}
