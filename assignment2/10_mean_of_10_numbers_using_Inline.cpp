#include<iostream>
using namespace std;
int i;
inline void mean(int *a)
{
	float sum, mean;
	for(i=0;i<=9;i++)
		sum += a[i];
	mean = sum /10;
	cout<<"\nmean = "<<mean;
}
main()
{
	int a[10];
	cout<<"\nEnter 10 numbers: \n";
	for(i=0;i<=9;i++)
		cin>>a[i];
		
	mean(a);
}
