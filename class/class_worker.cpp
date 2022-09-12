#include<iostream>
using namespace std;

class worker
{
	private:
		string name;
		int hrs;
		
	public:
		void accept();
		void calculate(int payrate);		
};
void worker :: accept()
{
	cout<<"\nEnter worker name : ";
	cin>>name;
	cout<<"\nEnter number of Hrs.: ";
	cin>>hrs;
}

void worker :: calculate(int payrate=50)
{
	cout<<"\n salary = "<<hrs * 30 * payrate;
}

main()
{
	worker w1;
	
	w1.accept();
	w1.calculate();
}

