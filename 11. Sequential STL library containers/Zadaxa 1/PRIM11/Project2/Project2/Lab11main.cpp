#include <iostream>
#include <list>
using namespace std;
void print0();
void print();
void print2();
void print3();
void print4();
int main()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a,b,c,d, max,min,s,k;
	cout << "ZADANIE 3";
	cout << "\n";
	cout << "Vivodim elementi konteinera ";
	cout << "\n";
		// заносим элементы в начало списка
	a = 5;
		floatList.push_front(a);
	b = 4;
	floatList.push_front(b);
	c = 3;
	floatList.push_front(c);
	d = 2;
	floatList.push_front(d);
	

	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	///////////////zadanie 3////////////////////////////////////
	cout << "\n";
	cout << "MINIM element raven= ";

	if (d < a) if (d < b)if (d < c) cout << d;

	cout << "\n";
	cout << "Dobavlaem MINIM element v konec konteinera ";
	cout << "\n";

	// заносим элементы в конец списка
	floatList.push_back(d);
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
	cout << "\n";
	/////////////zadanie 5/////////////////////
	cout << "ZADANIE 5";
	cout << "\n";
	cout << "ISHEM MAXIM ELEMENT ";
	cout << "\n";
	//ищем максим элемент
	if (c > d) ; else c = d;
	if (a > b) ; else a = b;
	if (a > c)  cout << "max=" << a; max = a; 
	if (a > c); else  cout << " max=" << c; max = c;
	cout << "\n";
	if (c > d) c = d;
	if (a > b) a = b;
	if (a > c)  cout << "min=" << c; min = c;
	if (a > c); else  cout << " min=" << a; min = a;
	cout << "\n";
	cout << "Symma max i min elementa ";
	cout << "\n";
	s = min + max;
	cout << " =" <<  s;

	cout << "\n";
	cout << "K kagdomy elementy konteinera dobavit symmy min i max elementov";
	
	a = 5; b = 4; c = 3; d = 2;

	a = a + s;
	b = b + s;
	c = c + s;
	d = d + s;
	
	floatList.push_front(a);
	floatList.push_front(b);
	floatList.push_front(c);
	floatList.push_front(d);
	cout << "\n";
	cout << "PERVIE 4 simvola s dobavleniem symmi, ostalnie simvoli nahalnogo konteinera+min elem     ";
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
	std::cout << *iter << " ";
	cout << "\n";
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
	return 0;
	
}

void print0()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a, b, c, d, max, min, k;

	// заносим элементы в начало списка
	cout << "Vivodim elementi konteinera ";
	a = 5;
	floatList.push_front(a);
	b = 4;
	floatList.push_front(b);
	c = 3;
	floatList.push_front(c);
	d = 2;
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}

void print()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a, b, c, d, max, min, k;
	
	cout << "Vivodim konteiner s ydalenim elementom ";
	
	a = 5;
	floatList.push_front(a);
	b = 4;
	floatList.push_front(b);
	c = 3;
	floatList.push_front(c);
	d = 2;
	floatList.push_front(d);
	
	 floatList.pop_front();
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print2()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a, b, c, d, max, min, k;
	
	cout << "Vivodim konteiner s ydalenim elementom ";
	a = 5;
	floatList.push_front(a);
	b = 4;
	floatList.push_front(b);
	d = 2;
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print3()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a, b, c, d, max, min, k;

	cout << "Vivodim konteiner s ydalenim elementom ";
	a = 5;
	floatList.push_front(a);
	c = 3;
	floatList.push_front(c);
	d = 2;
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print4()
{
	std::list<float> floatList; // создём список с элементами типа int
	float a, b, c, d, max, min, k;

	cout << "Vivodim konteiner s ydalenim elementom ";
	b = 4;
	floatList.push_front(b);
	c = 3;
	floatList.push_front(c);
	d = 2;
	floatList.push_front(d);
	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}