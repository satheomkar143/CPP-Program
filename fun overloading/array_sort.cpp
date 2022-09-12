#include<iostream>
using namespace std;
int i, j, temp;
sort(int a[],int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<"\nsorted array:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
sort(float a[],int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<"\nsorted array:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
}

main()
{
	int n, a[n];
	float b[n];
	cout<<"\nEnter number of elements: ";
	cin>>n;
	cout<<"\nEnter integer array elements: ";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	sort(a,n);
	
	cout<<"\nEnter number of elements: ";
	cin>>n;
	cout<<"\nEnter float array elements: ";
	for(i=0;i<n;i++)
		cin>>b[i];	
		
	
	sort(b,n);
}
