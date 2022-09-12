#include<iostream>
using namespace std;
main()
{
	int i, n, fact=1;
	cout<<"\nEnter number = ";
	cin>>n;
	
	i = n;
	
	do
	{
		fact = fact * i;
		i--;
	}while(i>1);
		
	
	cout<<"\nFactorial of "<<n<<" is "<<fact;
}
