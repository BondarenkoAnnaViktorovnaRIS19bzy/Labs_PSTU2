#include "Time.h"
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;
void print0();
//void print();
//void print2();
//void print3();

int main()
{
	std::list<float> listc;
	//std::list<float> listc{ 11, 9,5 };
	//float range_begin = 9.0;
	//float range_end = 5.0;
	//std::vector<double> for_remove;
	//std::copy_if(listc.begin(), listc.end(), std::back_inserter(for_remove), [&](const auto& a) { return a > range_begin && a < range_end; });
	//std::for_each(for_remove.begin(), for_remove.end(), [&](double item) { listc.begin(); listc.end(); });
	
	////////listc.remove(range_begin);
	///////std::for_each(listc.begin(), listc.end(), [](float item) { std::cout << item << std::endl; });
	
	
	float e, f, j, max, min, s;
	cout << "ZADANIE 3";
	cout << "\n";
	cout << "Vivodim elementi konteinera ";
	cout << "\n";
	// заносим элементы в начало списка

	Time a;//конструктор без параметров
	Time b; //конструктор без параметров

	Time d; //конструктор без параметров


	e = 11;
	f = 9;
	j = 5;

	listc.push_front(j * 2);

	listc.push_front(j);

	listc.push_front(f * 2);

	listc.push_front(f);

	listc.push_front(e * 2);

	listc.push_front(e);

	cout << "a=" << a + e << endl; //вывод переменной
	cout << "b=" << b + f << endl; //вывод переменной
	cout << "d=" << d + j << endl; //вывод переменной


	// печатаем элементы с помощью итератора
	for (std::list<float>::iterator iter = listc.begin(); iter != listc.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
	cout << "MINIM element raven= ";

	if (j < f) if (j < e) cout << j; cout << ":"; cout << j * 2;

	cout << "\n";
	cout << "Dobavlaem MINIM element v konec konteinera ";
	cout << "\n";

	// заносим элементы в конец списка
	listc.push_back(j);
	for (std::list<float>::iterator iter = listc.begin(); iter != listc.end(); ++iter)
		std::cout << *iter << " "; cout << j * 2;
	cout << "\n";
	cout << "\n";

	/////////////zadanie 5/////////////////////
	cout << "ZADANIE 5";
	cout << "\n";
	cout << "ISHEM MIN ELEMENT ";
	cout << "\n";
	//ищем максим элемент

	j = 5;

	if (j < f) if (j < e) cout << "min=" << j << ":" << j * 2; min = j;
	cout << "\n";
	cout << "ISHEM MAX ELEMENT ";
	cout << "\n";
	if (e > f); else e = f;
	if (j > f); else j = f;
	if (e > j) cout << "max=" << e << ":" << e * 2; max = e;
	if (e > j); else  cout << " max=" << j; max = j;
	cout << "\n";
	max = e;

	cout << "Symma max i min elementa ";
	cout << "\n";
	s = max + min;
	cout << "=" << s << ":" << s * 2;

	cout << "\n";
	cout << "K kagdomy elementy konteinera dobavit symmy min i max elementov";

	j = 5;

	e = e + s;
	f = f + s;
	j = j + s;



	listc.push_front(j * 2);

	listc.push_front(j);

	listc.push_front(f * 2);

	listc.push_front(f);

	listc.push_front(e * 2);

	listc.push_front(e);
	cout << "\n";
	cout << "PERVIE 6 zifr s dobavleniem symmi, ostalnie simvoli nahalnogo konteinera+min elem     ";
	for (std::list<float>::iterator iter = listc.begin(); iter != listc.end(); ++iter)
		std::cout << *iter << " "; j = 5; cout << j * 2;
	cout << "\n";
	cout << "\n";
	cout << "ZADANIE 4";
	cout << "\n";


	
	print0();
	
		
		
		
	

}
void print0()
{
	std::list<float> floatList; // создём список с элементами типа int
	float e, f, j,k;
	float range_begin = 11;
	float range_begin1 = 22;
	float range_begin2 = 9;
	float range_begin3 = 18;
	float range_begin4 = 5;
	float range_begin5 = 10;
	
	cout << "Vivodim konteiner  ";

	e = 11;
	f = 9;
	j = 5;

	floatList.push_front(j * 2);

	floatList.push_front(j);

	floatList.push_front(f * 2);

	floatList.push_front(f);
	floatList.push_front(e * 2);

	floatList.push_front(e);
	
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";

	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	cin >> k;
	if (k == 1)
	{
		floatList.remove(range_begin);
		floatList.remove(range_begin1);
		for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
			std::cout << *iter << " ";
		cout << "\n";
	}
	if (k == 2)
	{
		floatList.remove(range_begin2);
		floatList.remove(range_begin3);
		for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
			std::cout << *iter << " ";
		cout << "\n";
	}
	if (k == 3)
	{
		floatList.remove(range_begin4);
		floatList.remove(range_begin5);
		for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
			std::cout << *iter << " ";
		cout << "\n";
	}
}