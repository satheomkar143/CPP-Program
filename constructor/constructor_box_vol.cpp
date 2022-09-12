#include<iostream>			//constructor outside the class
using namespace std;
class box
{
	private:
		int len, bre, heg;
		
	public:
		box();
		box(int l, int b, int h);
		int volume();		
};

box::box()
{
	len = 5;
	bre = 4;
	heg = 3;
}

box::box(int l, int b, int h)
{
	len = l;
	bre = b;
	heg = h;
}

int box::volume()
{
	return len * bre * heg;
}

main()
{
	box b1;
	cout<<"\n volume of boxx = "<<b1.volume();
	
	box b2(7,8,9);
	cout<<"\n volume of boxx = "<<b2.volume();
}
