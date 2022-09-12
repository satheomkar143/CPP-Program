#include<iostream>
using namespace std;
main()
{	
	int n, a, i, temp;
	int c[] = {2000,500,200,100,50,20,10,5,2,1};
	static int b[10];
	cout<<"\nEnter amount: ";
	cin>>n;
	temp = n;
	if(n>=2000)
	{	
		a = n / 2000;
		n = n % 2000;
		b[0] += a;
	}
	if(n>=500)
	{	
		a = n / 500;
		n = n % 500;
		b[1] += a;
	}
	if(n>=200)
	{	
		a = n / 200;
		n = n % 200;
		b[2] += a;
	}
	if(n>=100)
	{	
		a = n / 100;
		n = n % 100;
		b[3] += a;
	}
	if(n>=50)
	{	
		a = n / 50;
		n = n % 50;
		b[4] += a;
	}
	if(n>=20)
	{	
		a = n / 20;
		n = n % 20;
		b[5] += a;
	}
	if(n>=10)
	{	
		a = n / 10;
		n = n % 10;
		b[6] += a;
	}
	if(n>=5)
	{	
		a = n / 5;
		n = n % 5;
		b[7] += a;
	}
	if(n>=2)
	{	
		a = n / 2;
		n = n % 2;
		b[8] += a;
	}
	if(n>=1)
	{	
		a = n / 1;
		n = n % 1;
		b[9] += a;
	}
	
	cout<<"\nTotal notes in Rs "<<temp;
	cout<<"\n\nNotes\tQTY";
	
	for(i=0;i<=9;i++)
	{
		if(b[i] != 0)
		{
			cout<<"\n"<<c[i]<<"\t"<<b[i];
		}
	}
	
}
