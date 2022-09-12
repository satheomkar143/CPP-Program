#include<iostream>				//single inheritance
using namespace std;
class person
{
	protected:
		int id;
		string name;

};

class employee : public person
{
	protected: 
	int bs;
	float hra, da, gs;
	public:
		void accept()
		{
			cout<<"\nEnter ID: ";
			cin>>id;
			cout<<"\nEnter Name: ";
			cin>>name;
			cout<<"\nEnter basic salary: ";
			cin>>bs;
		}
		void show()
		{
			hra = bs*10/100;
			da = bs*15/100;
			gs = bs+hra+da;
			cout<<"\nID = "<<id;
			cout<<"\nName = "<<name;
			cout<<"\nBasic salary: "<<bs;
			cout<<"\nHRA: "<<hra;
			cout<<"\nDA: "<<da;
			cout<<"\nGross salary: "<<gs;
		}
};
main()
{
	employee e1;
	e1.accept();
	e1.show();
}
