#include<iostream>				//friend function
using namespace std;
class sample
{
	private:
		int a, b;
	public:
		void setdata(int p, int q)
		{
			a = p;
			b = q;
		}
		friend float mean(sample s);
};
float mean (sample s)
{
	return (s.a+s.b)/2.0;
}
main()
{
	sample s;
	s.setdata(10,20);
	cout<<"\nmean value = "<<mean(s);
}
