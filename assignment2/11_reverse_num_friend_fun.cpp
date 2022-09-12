#include<iostream>
using namespace std;
class Reverse
{
	private:
		int n;
	public:
		void accept(int n)
		{
			this->n = n;
		}
		friend void reverse(Reverse r);
};
void reverse(Reverse r)
{
	int rev=0, rem;
	while(r.n != 0)
	{
		rem = r.n % 10;
		rev = rev * 10 + rem;
		r.n /=10;
	}
	cout<<"\nreverse number = "<<rev;
}
main()
{
	int n;
	cout<<"\nEnter number: ";
	cin>>n;
	
	Reverse r;
	r.accept(n);
	reverse(r);
}
