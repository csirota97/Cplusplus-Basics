#include "objectFunctions.h"

int main()
{
	Student student1 ("Jim", "Business", 2.4);
	Student student2 ("Pam", "Art", 3.6);

	cout << student1.hasHonors() << endl;
	cout << student2.hasHonors() << endl;

	return 0;
}