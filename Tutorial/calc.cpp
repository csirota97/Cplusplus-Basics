#include "calc.h"

int main()
{
	calc();
	
/*
Earlier calculator

	double num1, num2;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << num1 + num2 << endl;
*/
	return 0;
}

void calc()
{
	double num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter operator: ";
	cin >> op;

	while (op != '/' && op != '*' && op != '+' && op != '-')
	{
		cout << "Incorrect Operator Error" << endl;
		cout << "Enter operator: ";
		cin >> op;
	}
	
	cout << "Enter second number: ";
	cin >> num2;

	if (op == '/' && num2 == 0)
	{
		cout << "Divide By Two Error" << endl;
		calc();
		return;
	}

	

	switch(op) {
		case '+':
			cout << (num1) << "+" << (num2) << "=" << (num1+num2) << endl;
			break;
		case '-':
			cout << (num1) << "-" << (num2) << "=" << (num1-num2) << endl;
			break;
		case '*':
			cout << (num1) << "*" << (num2) << "=" << (num1*num2) << endl;
			break;
		case '/':
			cout << (num1) << "/" << (num2) << "=" << (num1/num2) << endl;
			break;
	}
}