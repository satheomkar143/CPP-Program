#include<iostream>
using namespace std;
class AddAmount
{
	private:
		int amount=50;
	public:
		AddAmount()
		{
			amount;
		}
		AddAmount(int a)
		{
			amount = amount + a;
		}
		void display()
		{
			cout<<"\nTotal amount in piggie bank : "<<amount;
		}
};
main()
{
	AddAmount a1;
	a1.display();
	
	AddAmount a2(100);
	a2.display();
	
	int n;
	cout<<"\nAdd some money in piggie bank: ";
	cin>>n;
	
	AddAmount a3(n);
	a3.display();
	
}
