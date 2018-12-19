#include <iostream>
#include <cmath>

using namespace std;

class Book {
	public:
		string author;
		string title;
		int pages;

		Book()
		{
			cout << "Creating Book No Args" << endl;
		}

		Book(string titleP, string authorP, int pagesP)
		{
			cout << "Creating Book 3 Args" << endl;
			author = authorP;
			title = titleP;
			pages = pagesP;
		}
};