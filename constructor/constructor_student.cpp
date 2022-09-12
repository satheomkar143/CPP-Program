#include<iostream>
using namespace std;
class student
{
	private:
		int roll_n;
		string name;
		float marks;
	public:
		student()		//default constructor
		{
			roll_n = 1;
			name =  "omkar";
			marks = 100;
		}
		
		student(int r, string n, float m)		//parameterized constructor
		{
			roll_n = r;
			name = n;
			marks = m;
		}
		
		student(student &obj)		// copy constructor
		{
			roll_n = obj.roll_n;
			name = obj.name;
			marks = obj.marks;
		}
		
		void display()
		{
			cout<<"\nRoll no: "<<roll_n;
			cout<<"\nName: "<<name;
			cout<<"\nMarks: "<<marks;
		}
};

main()
{
	student s1;		//calling default constructor
	s1.display();
	
	student s2(45, "raj", 89.56);		//calling parameterized constructor
	s2.display();
	
	student s3(s2);		//calling copy constructor     student s3 = s2;
	s3.display();
}
