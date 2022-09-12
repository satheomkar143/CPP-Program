// program to write a file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("sp.cpp",ios::out);
	
	char data[20] = "welcome cpp, java";
	fout<<data;
	fout.close();
}
