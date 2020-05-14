#pragma once
#include <iostream>
#include <string>


class Book
{
private:

	int author;
	int name;
	int year;


public:
	Book();//konstruktor bez parametrov

	Book(int a, int n, int y);//konstruktor  s parametrami
	Book(const Book&); //konstruktor kopirovania


	~Book();//destruktor


	int getAuthor(); //selektor
	int  getName();
	int  getYear();

	void setAuthor(int a);//modificator
	void setName(int n);
	void setYear(int y);


	void show();//prosmotr atributov
};
