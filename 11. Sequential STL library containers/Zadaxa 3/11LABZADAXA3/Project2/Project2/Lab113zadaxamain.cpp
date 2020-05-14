#include "Vector.h"
#include "Time.h"
#include <iostream>

#include <list>

using namespace std;
void print0();
void print();
void print2();
void print3();
void print4();
void print5();
void main()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j,l, max, min, s, k,g;
	//инициализация, ввод и вывод значений вектора
	cout << "Vivod 1 vektor" << endl;
	Vector<int>A(5, 0);
//	cin >> A;
	d = 7;
	e = 2;
	f = 3;
	j = 1;
	l = 5;
	A[0] = d;
	A[1] = e;
	A[2] = f;
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
	//операция сложения с константой
	////////////////////////////////
	cout << "\n";
	cout << "ZADANIE 3";
	cout << "\n";
	cout << "Vivodim elementi konteinera ";
	cout << "\n";
	// заносим элементы в начало списка
	
	floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);
	////////////////////////////
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";

	cout << "\n";
	cout << "MINIM element raven= ";

	if (j < d) if (j < e)if (j < f) if (j < l) cout << j;

	cout << "\n";
	cout << "Dobavlaem MINIM element v konec konteinera ";
	cout << "\n";

	// заносим элементы в конец списка
	floatList.push_back(j);
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
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

	tt != t ;
	
	
	//cout << "Vivod summ vremeni" << endl;
	//t + tt;
	//cout << t + tt << endl;

	cout << "\n";
	/////////////zadanie 5/////////////////////
	cout << "\n________________________________________________________________________";
	cout << "\n";
	cout << "ZADANIE 5";
	cout << "\n";
	cout << "Vektor A=" << A << endl;
	cout << "\n";
	cout << "ISHEM MAXIM ELEMENT ";
	cout << "\n";
	//ищем максим элемент
	if (f > l); else f = l;
	if (d > e); else d = e;
	if (d > f); else d = f;
	if (d > j); cout << "max=" << d; max = d;
	if (d > j); else  cout << " max=" << j; max = j;

//	if (a > c); else  cout << " max=" << c; max = c;
//	if (a > c)  cout << "max=" << a; max = a;
//	if (a > c); else  cout << " max=" << c; max = c;
	cout << "\n";
	cout << "ISHEM MIN ELEMENT ";
	
	cout << "\n";
	if (f > l) f = l;
	if (d > e)  d = e;
	if (d > f) d = f;
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
	f = 3;
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
	f = f + s;
	j = j + s;
	l = l + s;

	floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);
	cout << "\n";
	cout << "PERVIE 5 zifr s dobavleniem symmi, ostalnie simvoli nahalnogo konteinera+min elem     ";
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
	
	cout << "\n______________________DLA time______________________________________________";
	tt - t;
	cout << "\n";
	cout << "\n";
	cout << "\n____________________________________________________________________________";
	cout << "\n";
	cout << "ZADANIE 4";
	cout << "\n";


	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	cin >> k;
	print0();
	if (k == 1) print();
	if (k == 2) print2();
	if (k == 3) print3();
	if (k == 4) print4();
	if (k == 5) print5();
	//return 0;
	cout << "\n______________________DLA time______________________________________________";
	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	cin >> g;
	if (g == 1) tt / t;
	if (g == 2) tt ^ t;
	cout << "\n";
	cout << "\n";

}
void print0()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e,f, j, l;

	// заносим элементы в начало списка
	cout << "Vivodim elementi konteinera ";

	d = 7;
	e = 2;
	f = 3;
	j = 1;
	l = 5;
	
	floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);

	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}

void print()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j, l;

	cout << "Vivodim konteiner s ydalenim elementom ";

	d = 7;
	e = 2;
	f = 3;
	j = 1;
	l = 5;

	floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);


	floatList.pop_front();
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print2()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j, l;

	cout << "Vivodim konteiner s ydalenim elementom ";
	d = 7;
	//e = 2;
	f = 3;
	j = 1;
	l = 5;

	floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	//floatList.push_front(e);
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print3()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j, l;

	cout << "Vivodim konteiner s ydalenim elementom ";
	d = 7;
	e = 2;
	//f = 3;
	j = 1;
	l = 5;

	floatList.push_front(l);
	floatList.push_front(j);
	//floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print4()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j, l;

	cout << "Vivodim konteiner s ydalenim elementom ";
	d = 7;
	e = 2;
	f = 3;
	//j = 1;
	l = 5;

	floatList.push_front(l);
	//floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print5()
{
	std::list<float> floatList; // создём список с элементами типа int
	float d, e, f, j, l;

	cout << "Vivodim konteiner s ydalenim elementom ";
	d = 7;
	e = 2;
	f = 3;
	j = 1;
	//l = 5;

	//floatList.push_front(l);
	floatList.push_front(j);
	floatList.push_front(f);
	floatList.push_front(e);
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}