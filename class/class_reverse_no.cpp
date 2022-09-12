#include<iostream>
using namespace std;
class reverse
{
	private:
		int n;
	
	public:
		void accept()
		{
			cout<<"\nEnter number to reverse: ";
			cin>>n;
		}
		void display()
		{
			int rem, rev=0;
			while(n!=0)
			{
				rem = n%10;
				rev = rev * 10 + rem;
				n /= 10;
			}
			cout<<"reverse number = "<<rev;
		}
};

main()
{
	reverse r1, r2;
	r1.accept();
	r1.display();
	
	r2.accept();
	r2.display();
}







