#include "Pair.h" //конструктор без параметров

Pair::Pair(void)

{

	//mark = ""; 
	cyl = 0;
	power = 0;

}

//деструктор

Pair::~Pair(void)

{

}

//конструктор с параметрами

Pair::Pair(int C, int P)

{

	//mark = M;

	cyl = C;

	power = P;

}

//конструктор копирования

Pair::Pair(const Pair& Pair)

{

	//mark = car.mark;

	cyl = Pair.cyl;

	power = Pair.power;

}

//модификаторы

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

//перегрузка операции присваивания

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


//глобальная функция для ввода 
istream& operator>>(istream& in, Pair& c)

{

	//cout << "\nMark:"; in >> c.mark; 
	cout << "\nPower:"; in >> c.power; cout << "\nCyl:"; in >> c.cyl; return in;

}

//глобальная функция для вывода

ostream& operator<<(ostream& out, const Pair& c)

{

	//out << "\nMARK : " << c.mark; 
	out << "\nCYL : " << c.cyl; out << "\nPOWER : " << c.power; out << "\n";

	return out;

}
