#include<iostream>
using namespace std;
class Programming
{
	private:
		string s;
	public:
		Programming()
		{
			s = "programming languages";
		}
		Programming(string a)
		{
			s = a;
		}
		void display()
		{
			cout<<"\nI love "<<s;
		}
};
main()
{
	Programming p1;
	p1.display();
	
	string s1;
	cout<<"\nwhat you love? : ";
	cin>>s1;
	
	Programming p2(s1);
	p2.display();
}
