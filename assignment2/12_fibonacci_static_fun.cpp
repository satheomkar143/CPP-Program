#include<iostream>
using namespace std;
class fibonacci
{
	private:
		static int i, n;
	public:
		void accept(int n)
		{
			this->n= n;
		}
		static void result()
		{
			
			int a=0, b=1, c;		
			cout<<"\nfibonacci series: \n";
			cout<<a<<"\t"<<b;
			for(;i<n;i++)
			{
				c = a + b;
				a = b;
				b = c;
				cout<<"\t"<<c;	
					
			}
		}
};
int fibonacci::i=0;
int fibonacci::n;
main()
{
	int n;
	cout<<"\nEnter range: ";
	cin>>n;
	fibonacci f;
	f.accept(n);
	f.result();
}

