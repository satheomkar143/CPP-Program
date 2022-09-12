#include<iostream>
using namespace std;
class book
{
	protected:
		string author;
	public:
		void get()
		{
			cout<<"\nEnter author name: ";
			cin>>author;
		}
};
class audio
{
	protected:
		int time;
	public:
		void get()
		{
			cout<<"\nEnter playing time of audio book: ";
			cin>>time;
		}
};
class publication : public book, public audio
{
	protected:
		int price;
		string title;
	public:
		void get()
		{
			book::get();
			cout<<"\nEnter book title: ";
			cin>>title;
			cout<<"\nEnter book price: ";
			cin>>price;
			audio::get();
		}
		void show()
		{
			cout<<"\nauthor name :"<<author;
			cout<<"\nbook title :"<<title;
			cout<<"\nbook price :"<<price;
			cout<<"\nplaying time of audio book :"<<time;
		}
};

main()
{
	publication p;
	p.get();
	p.show();
}
