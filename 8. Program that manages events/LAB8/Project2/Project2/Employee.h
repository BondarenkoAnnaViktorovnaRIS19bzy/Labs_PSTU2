#pragma once
#pragma once
#include "Person.h"
#include <iostream> 
//класс Lorry наследуется от класса Car 
class Employee :

	public Person

{

public:

	Employee(void);//конструктор без параметров public:
public:

	~Employee(void);//деструктор 
	void Show();
	void Input();
	Employee(string, int, int);//конструктор с параметрами

	Employee(const Employee&);//конструктор копирования 
	int Get_zarplata() { return zarplata; }//модификатор

	void Set_zarplata(int);//селектор

	Employee& operator=(const Employee&);//операция присваивания

	//friend istream& operator>>(istream& in, Lorry& l);//операция ввода

	//friend ostream& operator<<(ostream& out, const Lorry& l); //операция вывода protected:
protected:
	int zarplata;//атрибут грузоподъемность

};