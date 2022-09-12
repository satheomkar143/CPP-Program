#include<iostream>			//constructor outside the class
using namespace std;
class volume
{
	private:
		int side;
		
	public:
		volume(int s);
		volume(volume &obj);
		void display();		
};

volume::volume(int s)
{
	side = s;
}

volume::volume(volume &obj)
{
	side = obj.side * obj.side * obj.side;
}

void volume::display()
{
	cout<<"\nVolume of cube: "<<side;
}

main()
{
	volume v1(4);
	v1.display();
	
	volume v2(v1);
	v2.display();
}
