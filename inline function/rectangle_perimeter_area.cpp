#include<iostream>
using namespace std;

inline int perimeter(int l, int w)  // 2 (l+w)
{
	return 2 * (l + w);
}
inline int area(int l, int w)  // l * w
{
	return l * w;
}
main()
{
	int l, w;
	cout<<"Enter lenght = ";
	cin>>l;
	cout<<"\nEnter width = ";
	cin>>w;
	
	cout<<"Perimeter =  "<<perimeter(l,w)<<endl;
	cout<<"Area =  "<<area(l,w)<<endl;
}
