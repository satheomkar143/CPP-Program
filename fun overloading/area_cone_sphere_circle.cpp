#include<iostream>  
#include<cmath>
using namespace std;
double area(int r, int h)  	//cone 		pi r (r + \/h2 + r2)
{
	return 3.14 * r * (r + sqrt((h*h) + (r*r)));
}

double area(double r)		//sphere  4 pi r r
{
	return 4 * 3.14 * r * r;
}

double area(int r)   //circle    pi r *r 
{
	return 3.14 * r * r;
}
int main()
{
	cout<<"\narea of cone: "<<area(4,5);
	cout<<"\narea of sphere: "<<area(8.0);
	cout<<"\narea of circle: "<<area(6);
	return 0;
}
