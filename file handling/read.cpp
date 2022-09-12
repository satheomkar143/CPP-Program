// program to read a file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("key.cpp",ios::in);
	char ch;
	
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
}
