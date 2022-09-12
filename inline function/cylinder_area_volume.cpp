#include<iostream>
using namespace std;

inline int area(int r, int h)  //2 pi r (r+h)
{
	return 2 * 3.14 * r * (r + h);
}
inline int volume(int r, int h)  //pi r2h
{
	return 3.14 * r * r * h;
}
main()
{
	int r, h;
	cout<<"Enter radius = ";
	cin>>r;
	cout<<"\nEnter height = ";
	cin>>h;
	
	cout<<"Area =  "<<area(r,h)<<endl;
	cout<<"Volume =  "<<volume(r,h)<<endl;
}
