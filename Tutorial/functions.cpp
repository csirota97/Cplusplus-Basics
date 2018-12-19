#include "functions.h"

int main()
{
	int n = getLoops("How many times would you like to greet the world?");
	helloWorldLoop(n);
	
	return 0;
}

int getLoops(string s)
{
	int n;
	cout << s << endl;
	cin >> n;
	return n;
}

void helloWorld()
{
	cout << "Hello World!" << endl;
}

void helloWorldLoop(int n)
{
	for (int i = 0; i < n; i++)
	{
		helloWorld();
	}
}