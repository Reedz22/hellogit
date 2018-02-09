
#include <iostream>
#include <vector>
#include <string>
#include "Student.h"
using namespace std;

void main()
{
	Student::Student(string StudentName, int StudentID) {	//Is this part wrong?
		vector<string>V1;


		while (V1.size <= 4)		//Would this work?  my vector size is smaller than 4, the loop will continue till it becomes 5 is what I think. Also I made two vectors.
		{
			cout << “Please enter Student Name.Type “end” to stop” << endl;
			string StudentName;
			getline(cin, StudentName);
			Student::SetName(StudentName);
			Student::GetName();
			V1.push_back(Name);

			Cout << “Please enter Student ID.” << endl;
			String StudentID;
			Getline(cin, StudentID);
			Student::SetID(StudentID);
			Student::GetID();
			V1.push_back(ID);


		}
		for (unsigned int n = 0; n < V1.size(); n++) {
			cout << “Name : ” << V1[n] << " " << endl
				<< “ID : ” << V2[n];
		}
	}
return (0);
}
