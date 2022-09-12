#include<iostream>
using namespace std;

class factorial
{
	private:
		int n, i, fact;
	public:
		void accept(int n)
		{
			this->n = n;
		}
		void show()
		{
			fact=1;		
			for(i=2; i<=n;i++)
				fact *= i;
			cout<<"\nfactorial of "<<n<<" = "<<fact;
		}
};
main()
{
	int n;
	cout<<"\nEnter any number: ";
	cin>>n;
	
	factorial f;
	f.accept(n);
	f.show();
}
