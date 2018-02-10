#include "Student.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student
{
public:
	int ID = 0;
	string Name = " ";

	Student(string StudentName, int StudentID)
	{
		Name = StudentName;
		ID = StudentID;
	}
	void setName(string StudentName)
	{
		Name = StudentName;
	}
	string getName()
	{
		return { Name };
	}

	void setID(int StudentID)
	{
		ID = StudentID;
	}
	int getID()
	{
		return{ ID };
	}
private:

	string Name;
	int ID;
};
