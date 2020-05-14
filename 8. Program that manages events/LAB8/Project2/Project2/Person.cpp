#include "Person.h"


Person::Person(void)
{
	name = "";
	//cyl = 0;
	age = 0;
}
Person::~Person(void)
{
}
Person::Person(string N, int A)
{
	name = N;
	//cyl = C;
	age = A;
}
Person::Person(const Person& Person)
{
	name = Person.name;
	//cyl = car.cyl;
	age = Person.age;
}
//void
//Car::Set_cyl(int C)
//{
//	cyl = C;
//}
void
Person::Set_name(string N)
{
	name =N;
}
void
Person::Set_age(int A)
{
	age = A;
}
Person& Person::operator=(const Person& c)
{
	if (&c == this)
		return *this;
	name = c.name;
	age = c.age;
	//cyl = c.cyl;
	return *this;
}
//istream& operator>>(istream& in, Car& c)
//{
	//cout << "\nMark:"; in >> c.mark;
	//cout << "\nPower:"; in >> c.power;
	//cout << "\nCyl:"; in >> c.cyl;
	//return in;
//}
//ostream& operator <<(ostream& out, const Car& c)
//{
	//out << "\nMARK : " << c.mark;
	//out << "\nCYL : " << c.cyl;
//	out << "\nPOWER : " << c.power;
	//out << "\n";
	//return
	//	out;
//}
void
Person::Show()
{
	cout << "\nNAME : " << name;
//	cout << "\nCYL : " << cyl;
	cout << "\nAGE : " << age;
	cout << "\n";
}
void
Person::Input()
{
	cout << "\nName: "; cin >> name;
	//cout << "\nCYL : "; cin >> cyl;
	cout << "\nage : "; cin >> age;
	cout << "\n";
}