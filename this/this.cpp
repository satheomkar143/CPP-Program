#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		string name;
		float salary;
	public:
		employee(int id, string name, float salary)
		{
			this->id = id;
			this -> name = name;
			this -> salary = salary;
		}
		void display()
		{
			cout<<"\n"<<id<<"  "<<name<<"  "<<salary;
		}
};
main()
{
	employee e1(1,"omkar",45698.00);
	e1.display();
	employee e2(15,"guru",86658.65);
	e2.display();
}
