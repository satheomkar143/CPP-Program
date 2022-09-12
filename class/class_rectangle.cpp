#include<iostream>
using namespace std;

class rectangle
{
	private:
		float l, w, area;
	
	public:
	void accept();
	void display();	
		
/*	public:
		void accept()
		{
			cout<<"\nEnter lenght : ";
			cin>>l;
			cout<<"\nEnter width : ";
			cin>>w;	
					
		}
		
		void display()
		{
			area = l * w;
			cout<<"lenght = "<<l;
			cout<<"\nwidth = "<<w;
			cout<<"\narea = "<<area;
		}
*/	
};
// member function outside the class
// :: scope resolution

void rectangle :: accept()
{
	cout<<"\nEnter lenght : ";
	cin>>l;
	cout<<"\nEnter width : ";
	cin>>w;	
}

void rectangle :: display()
{
	area = l * w;
	cout<<"lenght = "<<l;
	cout<<"\nwidth = "<<w;
	cout<<"\narea = "<<area;
}

main()
{
	rectangle r1, r2, r3;
	
	r1.accept();
	r1.display();
	
	r2.accept();
	r2.display();
	
	r3.accept();
	r3.display();
}
