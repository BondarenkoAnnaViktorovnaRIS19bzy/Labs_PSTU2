#pragma once
#pragma once
#include <string> 
#include <iostream> 
using namespace std;
class Pair

{

	//конструктор без параметров public:
public:
	Pair(void);
public: //деструктор

	virtual ~Pair(void); //констрктор с параметрами



	/////////////////
	//int a, b;

	//int  vvod_a()
	//{
		//cout << "\nInsert new a: ";
	//	cin >> a;
		//return a;
	//}
	//int  vvod_b()
	//{
		//cout << "\nInsert new b: ";
		//cin >> b;
		//return b;
	//}

	//////////////////


	Pair( int, int); //конструктор копирования

	Pair(const Pair&);

	//селекторы

	//string Get_mark() { return mark; } 
	int Get_cyl() { return cyl; }

	int Get_power() { return power; } //модификаторы

	//void Set_mark(string); 
	void Set_cyl(int); 
	void Set_power(int);
	///////////////////
	
	//void operator+(int n) { };
	///////////////////


	//перегрузка операции присваивания
	Pair& operator+(int n);
	Pair& operator-(int n);
	Pair& operator=(const Pair&); //глобальные операторы-функции ввода-вывода

	friend istream& operator>>(istream& in, Pair& c); friend ostream& operator<<(ostream& out, const Pair& c);

	//атрибуты protected:

	//string mark; 
	int cyl;

	int power;

};
