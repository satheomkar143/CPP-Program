#include<iostream>
using namespace std;
class radius
{
    private:
		float r;
	public:
		void setvalue (float p)
		{
			r=p;
		}
		friend void area(radius rad);
};
void area(radius rad)
{
    const float PI = 3.14;
    double a;
    a = PI * rad.r * rad.r; 
    cout<<"Area of circle: "<<a;
};

int main()
{
    radius rad;
    rad.setvalue(2);
    area(rad);
}
