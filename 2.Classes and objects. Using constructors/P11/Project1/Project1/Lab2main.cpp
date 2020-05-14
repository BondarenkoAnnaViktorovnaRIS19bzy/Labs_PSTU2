#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

// funktsia dla vozvrata objecta kak rezultata
Book make_Book()
{
	int a;
	int n;
	int y;
	cout << "Vvedite avtora:";
	cin >> a;
	cout << "Vvedite name:";
	cin >> n;
	cout << "Vvedite god izdania:";
	cin >> y;
	Book book1(a, n, y);
	return book1;
}

// funktsia dla peredathi obekta kak parametra

void print_Book(Book book)
{
	book.show();

}



int main()
{
	//konstryktor bez parametra
	Book book1;
	book1.show();
	//konstryktor c parametrami
	Book book2(5, 6, 1981);
	book2.show();

	//konstryktor kopirovania
	Book book3 = book2;
	book3.setAuthor(1);
	book3.setName(2);
	book3.setYear(1999);
	// konstruktor kopirovania
	print_Book;
	book1 = make_Book();
	book1.show();

}
