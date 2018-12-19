#include "pointers.h"

int main()
{
	int age = 19;
	int* agePointer = &age;
	double gpa = 2.7;
	double* gpaPointer = &gpa;
	string name = "Mike";
	string* namePointer = &name;

	cout << "Age is " << age << endl;
	cout << "Data at age pointer equals " << *agePointer << endl;
	cout << "Age is stored at " << &age << endl;
	cout << "Age pointer equals " << agePointer << endl << endl;

	cout << "GPA is " << gpa << endl;
	cout << "Data at GPA pointer equals " << *gpaPointer << endl;
	cout << "GPA is stored at " << &gpa << endl;
	cout << "GPA pointer equals " << gpaPointer << endl << endl;

	cout << "Name is " << name << endl;
	cout << "Data at name pointer equals " << *namePointer << endl;
	cout << "Name is stored at " << &name << endl;
	cout << "Name pointer equals " << namePointer << endl;
	
	return 0;
}