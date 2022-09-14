#include<iostream>
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
    int n;
    cout<<"Enter number: ";
    cin>>n;
	volume v1(n);	
	volume v2(v1);
	v2.display();
}