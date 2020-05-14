#include "Employee.h" //конструктор без параметров
#include <iostream> 
Employee::Employee(void) :Person()

{

	zarplata = 0;

}

//дестрктор

Employee::~Employee(void)

{

}

//конструктор с параметрами

Employee::Employee(string N,  int A, int Z) :Person(N, A)

{

	zarplata = Z;

}

//конструктор копирования

Employee::Employee(const Employee& L)

{

	name = L.name;

	//cyl = L.cyl;

	age = L.age;

	zarplata = L.zarplata;

}

//модификатор

void Employee::Set_zarplata(int Z)

{

	zarplata = Z;

}

//оперция присваивания

Employee& Employee::operator=(const Employee& l)

{

	if (&l == this)return *this;
	name = l.name;
	age = l.age; 
	//cyl = l.cyl;

	zarplata = l.zarplata; 
	return *this;

}

//операция ввода

//istream& operator>>(istream& in, Lorry& l)

//{

	//cout << "\nMark:"; in >> l.mark; 
//	cout << "\nPower:";
	//in >> l.power;
	//cout << "\nCyl:";
//	in >> l.cyl;
	//cout << "\nGruz:"; in >> l.gruz; 
	//l.gruz = (l.power + l.cyl) * 2;
//	//cout << "\nGru--z:"; in >> l.gruz; 
//	cout << l.gruz << "Perimetr!!!!!! ";
//	l.gruz = l.power * l.cyl;
//	cout << l.gruz << "Plohad!!!!!! ";


//	return in;

//}

//операция вывода

//ostream& operator<<(ostream& out, const Lorry& l)

//{

	//out << "\nMARK : " << l.mark; 
	//out << "\nCYL : " << l.cyl; out << "\nPOWER : " << l.power; out << "\nGRUZ : " << l.gruz; out << "\n";
//
//	return out;
//}
void Employee::Show()

{

	cout << "\nName:" << name;
	//cout << "\nCyl:" << cyl;
	cout << "\nAge:" << age;
	cout << "\nZarplata:" << zarplata;
	cout << "\n";
}
void Employee::Input()

{

	cout << "\nName:" << name;
//	cout << "\nCyl:" << cyl;
	cout << "\nAge:" << age;
	cout << "\nZarplata:" << zarplata;
	cout << "\n";
}