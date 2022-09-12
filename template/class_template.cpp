#include<iostream>
using namespace std;
template <class T>
class A
{
	private:
		T x;
		T y;
	public:
		A(T p, T q)
		{
			x = p;
			y = q;
		}
		void show()
		{
			cout<<"\nx = "<<x<<"\ny = "<<y;
		}
};
main()
{
	A<int> obj1(2,5);
	obj1.show();
	A<float> obj2(6.2,8.5);
	obj2.show();
}
