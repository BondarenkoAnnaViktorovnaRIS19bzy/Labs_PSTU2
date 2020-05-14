#include "Book.h"
#include <iostream>


#include <string>

using namespace std;
Book::Book()
{

	name = 3;
	author = 2;
	year = 0;


	cout << "\nRabotaet konstruktor po umolchaniju.\n";
}



Book::Book(int a, int n, int y)
{

	name = n;
	author = a;
	year = y;

	cout << "\nRabotaet  konstruktor s parametrami.\n";
}



// konstruktor kopirovania
Book::Book(const Book& book)
{
	name = book.name;
	author = book.author;
	year = book.year;
	cout << "\nRabotaet  konstruktor kopirovania.\n";
}
Book::~Book()
{

	cout << "\nRabotaet destruktor.\n";
}



int Book::getAuthor()
{
	return author;
}

int Book::getName()
{
	return name;
}

int Book::getYear()
{
	return year;
}


void Book::setAuthor(int a)
{
	author = a;
}

void Book::setName(int n)
{
	name = n;
}

void Book::setYear(int y)
{
	year = y;
}


void Book::show()
{
	using namespace std;

	cout << author << "\n";
	cout << name << "\n";
	cout << year << "\n";

}

