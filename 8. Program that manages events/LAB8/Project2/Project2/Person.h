
#pragma once
# include "Object.h"
#include <string>
# include <iostream>
using namespace std;
class Person :
	public Object
{

public:

	Person(void);
public:
	virtual
		~Person(void);
	void Show();
	//функция для просмотра атрибутов класса с помощью указателя
	void Input();
	Person(string, int);
	Person(const Person&);
	string Get_name() { return	name; }
	//int
		//Get_cyl() {
		//return
			//cyl;
	//}
	int
		Get_age() {
		return
			age;
	}
	void
		Set_name(string);
	//void
	//	Set_cyl(int);
	void
		Set_age(int);
		Person& operator=(const Person&);
	//friend istream& operator>>(istream& in, Car& c);
	//friend ostream& operator<<(ostream& out, const Car& c);
protected:
	string name;
	//int
		//cyl;
	int
		age;
};