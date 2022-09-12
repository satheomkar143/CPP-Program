#include<iostream>
using namespace std;
main()
{
	int t;
	cout<<"\nEnter temperature in centigrade: ";
	cin>>t;
	
	if(t<0)
		cout<<"\nFreezing weather.";
	else if(t<=10)
		cout<<"\nVery Cold weather.";
	else if(t<=20)
		cout<<"\nCold weather.";
	else if(t<=30)
		cout<<"\nNormal in Temp.";
	else if(t<=40)
		cout<<"\nIts Hot.";
	else 
		cout<<"\nIts Very Hot.";
}

