#include "class.h"



int main()
{
	string name = "Mike";
	double pi = 3.14;
	char favLetter = 'G';

	Book book;
//	book.title = "Harry Potter";
//	book.author = "JK Rowling";
//	book.pages = 800;
	book = Book("Harry Potter", "JK Rowling", 800);


	Book book1;
	book1.title = "Not Harry Potter";
	book1.author = "Not JK Rowling";
	book1.pages = 700;

	Book book2 = Book(book1.title, book1.author, book1.pages);

	cout << endl << "Title: " << book.title << endl;
	cout << "Author: " << book.author << endl;
	cout << "Pages: " << book.pages << endl << endl;

	cout << "Title: " << book1.title << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Pages: " << book1.pages << endl << endl;
	
	cout << "Title: " << book2.title << endl;
	cout << "Author: " << book2.author << endl;
	cout << "Pages: " << book2.pages << endl << endl;

	return 0;
}