#include <iostream>
#include <cmath>

using namespace std;

class Student {
	public:
		string name;
		string major;
		double gpa;

		Student (string nameP, string majorP, double gpaP)
		{
			name = nameP;
			major = majorP;
			gpa = gpaP;
		}

		bool hasHonors()
		{
			if (gpa >= 3.5)
			{
				return true;
			}

			return false;
		}
};