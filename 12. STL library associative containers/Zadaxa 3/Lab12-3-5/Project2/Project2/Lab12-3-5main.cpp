#include "Vector.h"
#include "Time.h"
#include <iostream>

#include <set>

using namespace std;
typedef set<double > tset;
tset::iterator i;


void main()
{
	
	float d, e, o,j,l,min,max,s;
	
	//инициализация, ввод и вывод значений вектора
	cout << "Vivod 1 vektor" << endl;
	Vector<int>A(5, 0);
	//	cin >> A;
	d = 7;
	e = 2;
	o = 3;
	j = 1;
	l = 5;
	A[0] = d;
	A[1] = e;
	A[2] = o;
	A[3] = j;
	A[4] = l;
	cout << "Vektor A=" << A << endl;
	//инициализация и вывод значений вектора
	Vector <int>B(5, 1);
	//cout << B << endl;
	//операция присваивания
	cout << "B=A" << endl;
	B = A;
	cout << "Vektor B=" << B << endl;
	//доступ по индексу
	cout << "" << endl;
	cout << "Element pod indexom 2=" << endl;
	cout << A[2] << endl;
	//получение длины вектора
	//cout << "" << endl;
	cout << "size=" << A() << endl;

	float h[5] = { d,e,o,j,l };
	tset hh(h, h + 5);
	cout << " Vivodim konteiner  ";
	cout << "\n";
	for (i = hh.begin(); i != hh.end(); i++)
		cout << *i << " ";
	cout << "\n";
	
	/////////////zadanie 5/////////////////////
	cout << "\n________________________________________________________________________";
	cout << "\n";
	cout << "ZADANIE 5";
	cout << "\n";


	
	
	cout << "\n";
	cout << "ISHEM MAXIM ELEMENT ";
	cout << "\n";
	//ищем максим элемент
	if (o > l); else o = l;
	if (d > e); else d = e;
	if (d > o); else d = o;
	if (d > j); cout << "max=" << d; max = d;
	if (d > j); else  cout << " max=" << j; max = j;

	//	if (a > c); else  cout << " max=" << c; max = c;
	//	if (a > c)  cout << "max=" << a; max = a;
	//	if (a > c); else  cout << " max=" << c; max = c;
	cout << "\n";
	cout << "ISHEM MIN ELEMENT ";

	cout << "\n";
	if (o > l) o = l;
	if (d > e)  d = e;
	if (d > o) d = o;
	if (d > j); cout << "min=" << j; min = j;
	if (d > j); else  cout << " min=" << d; min = d;

	//if (c > d) c = d;
	//if (a > b) a = b;
	//if (a > c)  cout << "min=" << c; min = c;
	//if (a > c); else  cout << " min=" << a; min = a;
	cout << "\n";
	cout << "Symma max i min elementa ";
	cout << "\n";

	d = 7;
	e = 2;
	o = 3;
	j = 1;
	l = 5;
	max = d;
	min = j;
	s = min + max;
	cout << " =" << s;

	cout << "\n";
	cout << "K kagdomy elementy konteinera dobavit symmy min i max elementov";

	d = d + s;
	e = e + s;
	o = o + s;
	j = j + s;
	l = l + s;

	float hр[5] = { d,e,o,j,l };
	tset hhр(hр, hр + 5);
	cout << " Vivodim konteiner  ";
	cout << "\n";
	for (i = hhр.begin(); i != hhр.end(); i++)
		cout << *i << " ";
	cout << "\n";
	
	
	cout << "\n";
	cout << "\n______________________DLA time______________________________________________";
	cout << "\n";
	cout << "VVODIM zifri: 1,2,3,4" << endl;


	Time t;
	cin >> t;
	cout << t;
	//Vector<Time>C(1, t);
	//cin >> C;
	//cout << C << endl;

	Time tt;
	cin >> tt;
	cout << tt;

	//	Time ttt;
	//	cin >> ttt;
	//	cout << ttt;

	tt - t;


	//cout << "Vivod summ vremeni" << endl;
	//t + tt;
	//cout << t + tt << endl;

	cout << "\n";
	
}