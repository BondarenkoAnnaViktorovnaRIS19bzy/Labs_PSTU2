#pragma once

#include "Pair.h"
#include <iostream> 
//класс Lorry наследуется от класса Car 
class Rectangle :

	public Pair

{

public:

	Rectangle(void);//конструктор без параметров public:

	~Rectangle(void);//деструктор 
	Rectangle(int, int, int);//конструктор с параметрами

	Rectangle(const Rectangle&);//конструктор копирования 
	int Get_gruz() { return gruz; }//модификатор

	void Set_Gruz(int);//селектор


	///////////////

	//Rectangle operator+(int n);

	////////////////
	Pair& operator+(const Pair&n);




	Rectangle& operator=(const Rectangle&);//операция присваивания

	friend istream& operator>>(istream& in, Rectangle& l);//операция ввода

	friend ostream& operator<<(ostream& out, const Rectangle& l); //операция вывода protected:

	int gruz;//атрибут грузоподъемность

};
