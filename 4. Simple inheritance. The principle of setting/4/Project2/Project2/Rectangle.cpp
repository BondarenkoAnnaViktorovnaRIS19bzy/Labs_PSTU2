#include "Rectangle.h" //����������� ��� ����������
#include <iostream> 
Rectangle::Rectangle(void) :Pair()

{

	gruz = 0;

}

//���������

Rectangle::~Rectangle(void)

{

}

//����������� � �����������

Rectangle::Rectangle( int C, int P, int G) :Pair( C, P)

{

	gruz = C+P+G;
	//cout << gruz << "_________vivod gruza ";
}

//����������� �����������

Rectangle::Rectangle(const Rectangle&L)

{

//	mark = L.mark;

	cyl = L.cyl;

	power = L.power;

	gruz = L.cyl+ L.power+L.gruz;
	//cout << gruz << "___________vivod g!! ";
//
}

//�����������

void Rectangle::Set_Gruz(int G)

{

	gruz = G;
	//cout << gruz << "____________vivod gr ";
}

//������� ������������

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




//�������� �����

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

//�������� ������

ostream& operator<<(ostream& out, const Rectangle& l)

{

	//out << "\nMARK : " << l.mark; 
	
	out << "\nCYL : " << l.cyl; out << "\nPOWER : " << l.power; out << "\nGRUZ : " << l.gruz; out << "\n";
	
	
	return out;
}
