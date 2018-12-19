#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int luckyNums[] = {4,6,2,3};

	for (int i = 0; i < sizeof(luckyNums)/sizeof(int); i++)
		cout << luckyNums[i] << endl;

	int array2[5];

	for (int i = 0; i < 5; i++)
		array2[i]=i;

	for (int i = 0; i < 5; i++)
		cout << array2[i] << endl;


	return 0;
}