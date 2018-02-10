#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student
{
public:
	
		int ID = 0;
		string Name = " " ;

		Student(string StudentName, int StudentID);
		void setName(string StudentName);
		string getName();
		void setID(int StudentID);
		int getID();
	private:
	
		string Name;
		int ID;
	

};

