#include "Pair.h" //����������� ��� ����������

Pair::Pair(void)

{

	//mark = ""; 
	cyl = 0;
	power = 0;

}

//����������

Pair::~Pair(void)

{

}

//����������� � �����������

Pair::Pair(int C, int P)

{

	//mark = M;

	cyl = C;

	power = P;

}

//����������� �����������

Pair::Pair(const Pair& Pair)

{

	//mark = car.mark;

	cyl = Pair.cyl;

	power = Pair.power;

}

//������������

void Pair::Set_cyl(int C)

{

	cyl = C;

}

//void Pair::Set_mark(string M)

//{

//	mark = M;

//}

void Pair::Set_power(int P)

{

	power = P;

}

//���������� �������� ������������

Pair& Pair:: operator+(int n)
{

	//if (&n == this)return *this;
	////mark = c.mark; 
	//power = n.power; cyl = n.cyl;

	return *this;

}

Pair& Pair::operator-(int n)

{

	//if (&c == this)return *this;
	//mark = c.mark; 
	//power = c.power; cyl = c.cyl;

	return *this;

}

Pair& Pair::operator=(const Pair& p)

{

	if (&p == this)return *this;
	//mark = c.mark; 
	power = p.power; cyl = p.cyl;

	return *this;

}


//���������� ������� ��� ����� 
istream& operator>>(istream& in, Pair& c)

{

	//cout << "\nMark:"; in >> c.mark; 
	cout << "\nPower:"; in >> c.power; cout << "\nCyl:"; in >> c.cyl; return in;

}

//���������� ������� ��� ������

ostream& operator<<(ostream& out, const Pair& c)

{

	//out << "\nMARK : " << c.mark; 
	out << "\nCYL : " << c.cyl; out << "\nPOWER : " << c.power; out << "\n";

	return out;

}
