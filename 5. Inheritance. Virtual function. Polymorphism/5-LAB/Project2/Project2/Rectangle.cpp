#include "Rectangle.h" 
#include <iostream> 
Rectangle::Rectangle(void) :Pair()

{

	plohadperim = 0;

}

//���������

Rectangle::~Rectangle(void)

{

}

//����������� � �����������

Rectangle::Rectangle(int C, int P, int G) :Pair(C, P)

{

	plohadperim = G;

}

//����������� �����������

Rectangle::Rectangle(const Rectangle& L)

{

	//mark = L.mark;

	first = L.first;

	second = L.second;

	plohadperim = L.plohadperim;

}

//�����������

void Rectangle::Set_plohadperim(int G)

{

	plohadperim = G;

}

//������� ������������

Rectangle& Rectangle::operator=(const Rectangle& l)

{

	if (&l == this)return *this;

	second = l.second; first = l.first;

	plohadperim = l.plohadperim; return *this;

}

//�������� �����

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

//�������� ������

ostream& operator<<(ostream& out, const Rectangle& l)

{

	
	out << "\nFirst : " << l.first; out << "\nSecond : " << l.second; out << "\nPlohadperim : " << l.plohadperim; out << "\n";

	return out;
}
void Rectangle::Show()

{

	cout << "\n";
}
