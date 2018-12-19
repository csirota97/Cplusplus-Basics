#include "inheritance.h"

int main()
{
	ItalianChef chef = ItalianChef("Wisconsin Cheese Curds");
	chef.makeSpecial();
	chef.makeChicken();
	cout << chef.getSpecial() << endl;
	chef.setSpecial("Meatballs");
	cout << chef.getSpecial() << endl;
	
	return 0;
}