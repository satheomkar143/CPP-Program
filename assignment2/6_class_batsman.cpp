#include<iostream>
using namespace std;
class batsman
{
	private:
		int bcode, innings, notout, runs;
		string bname;
		float batavg;
		
		void calcavg()
		{
			batavg = runs/(innings - notout);
		}
		
	public:
		void readdata()
		{
			cout<<"\nEnter batsman code: ";
			cin>>bcode;
			cout<<"\nEnter batsman name: ";
			cin>>bname;
			cout<<"\nEnter innings: ";
			cin>>innings;
			cout<<"\nEnter runs: ";
			cin>>runs;
			cout<<"\nEnter notout: ";
			cin>>notout;
			
			calcavg();
		}
		void display()
		{
			cout<<bcode<<"\t"<<bname<<"\t"<<innings<<"\t"<<runs<<"\t"<<notout<<"\t"<<batavg<<"\n";
		}
};
main()
{
	int i, n;
	cout<<"\nEnter number of records";
	cin>>n;
	
	batsman b[n];
	for(i=0;i<n;i++)
		b[i].readdata();
		
	cout<<"bcode\tbname\tinnings\truns\tnotout\tbatavg\n";
	for(i=0;i<n;i++)
		b[i].display();
}

