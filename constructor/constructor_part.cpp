#include<iostream>
using namespace std;
class part
{
	private:
		int id;
		string name;
		float price;
	public:
		part()		//default
		{
			id = 1;
			name = "laptop";
			price = 45000;
		}
		part(int i, string n, int p)		//parameterized
		{
			id = i;
			name = n;
			price = p;
		}
		part(part &obj)		//copy
		{
			id = obj.id;
			name = obj.name;
			price = obj.price;
		}
		void display()
		{
			cout<<"\nID: "<<id;
			cout<<"\nName: "<<name;
			cout<<"\nPrice: "<<price;
		}
};
main()
{
	part p1;          //default
	p1.display();
	
	part p2(5,"TV",32000);   //parameterized
	p2.display();
	
	part p3(p2);		//copy
	p3.display();
}
