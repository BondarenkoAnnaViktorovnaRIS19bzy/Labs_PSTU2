
#pragma once
#include "Pair.h"
#include <iostream> 
//класс Rectangle наследуется от класса Pair 
class Rectangle :

	public Pair

{

public:

	Rectangle(void);//конструктор без параметров public:
public:

	~Rectangle(void);//деструктор 
	void Show();
	Rectangle(int, int, int);//конструктор с параметрами

	Rectangle(const Rectangle&);//конструктор копирования 
	int Get_plohadperim() { return plohadperim; }//модификатор

	void Set_plohadperim(int);//селектор

	Rectangle& operator=(const Rectangle&);//операция присваивания

	friend istream& operator>>(istream& in, Rectangle& l);//операция ввода

	friend ostream& operator<<(ostream& out, const Rectangle& l); //операция вывода protected:

	int plohadperim;//атрибут 

};