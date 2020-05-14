#include "Rectangle.h" //конструктор без параметров
#include <iostream> 
Rectangle::Rectangle(void) :Pair()

{

	gruz = 0;

}

//дестрктор

Rectangle::~Rectangle(void)

{

}

//конструктор с параметрами

Rectangle::Rectangle( int C, int P, int G) :Pair( C, P)

{

	gruz = C+P+G;
	//cout << gruz << "_________vivod gruza ";
}

//конструктор копирования

Rectangle::Rectangle(const Rectangle&L)

{

//	mark = L.mark;

	cyl = L.cyl;

	power = L.power;

	gruz = L.cyl+ L.power+L.gruz;
	//cout << gruz << "___________vivod g!! ";
//
}

//модификатор

void Rectangle::Set_Gruz(int G)

{

	gruz = G;
	//cout << gruz << "____________vivod gr ";
}

//оперция присваивания

Rectangle& Rectangle::operator=(const Rectangle& l)

{

	if (&l == this)return *this; 
	//mark = l.mark; 
	power = l.power; cyl = l.cyl;

	gruz = l.gruz + l.power + l.cyl;
	//cout << gruz << "____________v--ivod gr ";
	return *this;

}
///////


////////




//операция ввода

istream& operator>>(istream& in, Rectangle& l)

{

	//cout << "\nMark:"; in >> l.mark; 
	cout << "\nPower:"; in >> l.power; cout << "\nCyl:"; in >> l.cyl; 
	l.gruz = (l.power +l.cyl)*2;
	//cout << "\nGru--z:"; in >> l.gruz; 
	cout << l.gruz << "Perimetr!!!!!! ";
	l.gruz = l.power * l.cyl;
	cout << l.gruz << "Plohad!!!!!! ";
	return in;
}

//операция вывода

ostream& operator<<(ostream& out, const Rectangle& l)

{

	//out << "\nMARK : " << l.mark; 
	
	out << "\nCYL : " << l.cyl; out << "\nPOWER : " << l.power; out << "\nGRUZ : " << l.gruz; out << "\n";
	
	
	return out;
}
