#include "Rectangle.h" 
#include <iostream> 
Rectangle::Rectangle(void) :Pair()

{

	plohadperim = 0;

}

//дестрктор

Rectangle::~Rectangle(void)

{

}

//конструктор с параметрами

Rectangle::Rectangle(int C, int P, int G) :Pair(C, P)

{

	plohadperim = G;

}

//конструктор копировани€

Rectangle::Rectangle(const Rectangle& L)

{

	//mark = L.mark;

	first = L.first;

	second = L.second;

	plohadperim = L.plohadperim;

}

//модификатор

void Rectangle::Set_plohadperim(int G)

{

	plohadperim = G;

}

//оперци€ присваивани€

Rectangle& Rectangle::operator=(const Rectangle& l)

{

	if (&l == this)return *this;

	second = l.second; first = l.first;

	plohadperim = l.plohadperim; return *this;

}

//операци€ ввода

istream& operator>>(istream& in, Rectangle& l)

{
	cout << "Dla vivoda plohadi i perimetra vvedite first i second pole:";
	cout << "\nFirst:";
	in >> l.first;
	
	cout << "\nSecond:";
	in >> l.second;
	
	
	l.plohadperim = (l.second + l.first) * 2;
	
	cout << l.plohadperim << "Perimetr!!!!!! ";
	l.plohadperim = l.second * l.first;
	cout << l.plohadperim << "Plohad!!!!!! ";


	return in;

}

//операци€ вывода

ostream& operator<<(ostream& out, const Rectangle& l)

{

	
	out << "\nFirst : " << l.first; out << "\nSecond : " << l.second; out << "\nPlohadperim : " << l.plohadperim; out << "\n";

	return out;
}
void Rectangle::Show()

{

	cout << "\n";
}
