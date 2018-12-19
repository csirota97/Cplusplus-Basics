#include <iostream>
#include <cmath>

using namespace std;

class Chef {
	public:
		string special;

		Chef() 
		{
			special = "BBQ ribs";
		}

		Chef(string specialP) 
		{
			special = specialP;
		}

		void makeChicken()
		{
			cout << "The chef makes chicken" << endl;
		}

		void makeSalad()
		{
			cout << "The chef makes a salad" << endl;
		}

		void makeSpecial()
		{
			cout << "The chef makes "<< special << endl;
		}

		void setSpecial (string s)
		{
			special = s;
		}

		string getSpecial ()
		{
			return special;
		}
};

class ItalianChef : public Chef {
	public:
		ItalianChef()
		{
			special = "pasta";
		}
		ItalianChef(string specialP) 
		{
			special = specialP;
		}
};