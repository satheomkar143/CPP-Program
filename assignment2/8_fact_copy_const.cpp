#include<iostream>
using namespace std;
class factorial
{
	private:
		int n, fact, i;
	public:
		factorial()
		{
			n = 5;
			fact =1;
		}
		factorial(int n)
		{
			this->n = n;
			fact =1;
		}
		factorial(factorial &obj)
		{
			n = obj.n;
			fact =1;
		}
		void show()
		{
			for(i=2;i<=n;i++)
				fact *= i;
				
			cout<<"\nfactorial of "<<n<<" is "<<fact;
		}
		~ factorial(){
		};
};
main()
{
	int n;
	cout<<"\nEnter number: "; 
	cin>>n;
	
	factorial f(n);
	
	
	factorial f2(f);
	f2.show();
}
