#include<iostream>
using namespace std;
class factorial
{
	private:
		int n;
		
	public:
		void accept()
		{
			cout<<"\nEnter any positive number: ";
			cin>>n;
		}
		
		void display()
		{
			int i=2;
			double fact=1;
			while(i<=n)
			{
				fact = fact * i;
				i++;
			}
			cout<<"\nFactorial of "<<n<<" is "<<fact<<endl;
		}
};

main()
{
	factorial f1, f2;
	f1.accept();
	f1.display();
	
	f2.accept();
	f2.display();
}







