// program to copy a file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("key.cpp",ios::in);	//mode is optional
	
	ofstream fout;
	fout.open("copy_file.cpp");
	
	
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
}
