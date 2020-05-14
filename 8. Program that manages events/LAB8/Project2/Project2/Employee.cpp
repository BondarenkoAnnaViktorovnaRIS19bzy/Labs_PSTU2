#include "Employee.h" //����������� ��� ����������
#include <iostream> 
Employee::Employee(void) :Person()

{

	zarplata = 0;

}

//���������

Employee::~Employee(void)

{

}

//����������� � �����������

Employee::Employee(string N,  int A, int Z) :Person(N, A)

{

	zarplata = Z;

}

//����������� �����������

Employee::Employee(const Employee& L)

{

	name = L.name;

	//cyl = L.cyl;

	age = L.age;

	zarplata = L.zarplata;

}

//�����������

void Employee::Set_zarplata(int Z)

{

	zarplata = Z;

}

//������� ������������

Employee& Employee::operator=(const Employee& l)

{

	if (&l == this)return *this;
	name = l.name;
	age = l.age; 
	//cyl = l.cyl;

	zarplata = l.zarplata; 
	return *this;

}

//�������� �����

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

//�������� ������

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