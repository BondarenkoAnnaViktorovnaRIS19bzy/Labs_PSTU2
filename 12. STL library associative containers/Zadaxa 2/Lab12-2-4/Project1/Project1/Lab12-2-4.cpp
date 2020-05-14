#include "Time.h"
#include <iostream>
#include <set>

using namespace std;
typedef set<double > tset;
tset::iterator i;


void print();
void print2();
void print3();



void main()
{
	
	Time a;//конструктор без параметров
	Time b; //конструктор без параметров
	Time c; //конструктор без параметров
	Time d; //конструктор без параметров
	float q, u, w,k;
	q = 11;
	u = 9;
	w = 5;
	cout << "Vivodim time:";
	cout << "\n";
	

	cout << "a=" << a+q << endl; //вывод переменной
	cout << "b=" << b+u << endl; //вывод переменной
	cout << "c=" << c+w << endl; //вывод переменной
	cout << "\n";
	//
	float y, v, x;
	 y = q*2; v = u*2; x = w*2;
	float r[2] = { q,y };
	tset s(r, r + 2);
	cout << " Vivodim pervoe vrema  ";
	cout << "\n";
	for (i = s.begin(); i != s.end(); i++)
		cout << *i << " ";
	cout << "\n";
	float h[2] = { u,v };
	tset hh(h, h + 2);
	cout << " Vivodim vtoroe vrema  ";
	cout << "\n";
	for (i = hh.begin(); i != hh.end(); i++)
		cout << *i << " ";
	cout << "\n";
	float m[2] = { w,x };
	tset mm(m, m + 2);
	
	cout << " Vivodim tretie vrema  ";
	cout << "\n";
	for (i = mm.begin(); i != mm.end(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "\n";

	//
	cout << "\n";

	cout << "ZADANIE 4";
	cout << "\n";
	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	cin >> k;
	
	if (k == 1) print();
	if (k == 2) print2();
	if (k == 3) print3();
	
}
void print()
{
	float q, u, w, k;
	q = 11;
	u = 9;
	w = 5;
	float y, v, x;
	y = q * 2; v = u * 2; x = w * 2;
	//float r[2] = { q,y };
	//tset s(r, r + 2);
	//cout << " Vivodim pervoe vrema  ";
	//cout << "\n";
	//for (i = s.begin(); i != s.end(); i++)
	//	cout << *i << " ";
	cout << "\n";
	float h[2] = { u,v };
	tset hh(h, h + 2);
	cout << " Vivodim vtoroe vrema  ";
	cout << "\n";
	for (i = hh.begin(); i != hh.end(); i++)
		cout << *i << " ";
	cout << "\n";
	float m[2] = { w,x };
	tset mm(m, m + 2);

	cout << " Vivodim tretie vrema  ";
	cout << "\n";
	for (i = mm.begin(); i != mm.end(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "\n";
}


void print2()
{
	float q, u, w, k;
	q = 11;
	u = 9;
	w = 5;
	float y, v, x;
	y = q * 2; v = u * 2; x = w * 2;
	float r[2] = { q,y };
	tset s(r, r + 2);
	cout << " Vivodim pervoe vrema  ";
	cout << "\n";
	for (i = s.begin(); i != s.end(); i++)
		cout << *i << " ";
	cout << "\n";
	//float h[2] = { u,v };
	//tset hh(h, h + 2);
	//cout << " Vivodim vtoroe vrema  ";
//	cout << "\n";
	//for (i = hh.begin(); i != hh.end(); i++)
	//	cout << *i << " ";
	//cout << "\n";
	float m[2] = { w,x };
	tset mm(m, m + 2);

	cout << " Vivodim tretie vrema  ";
	cout << "\n";
	for (i = mm.begin(); i != mm.end(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "\n";
}

void print3()
{
	float q, u, w, k;
	q = 11;
	u = 9;
	w = 5;
	float y, v, x;
	y = q * 2; v = u * 2; x = w * 2;
	float r[2] = { q,y };
	tset s(r, r + 2);
	cout << " Vivodim pervoe vrema  ";
	cout << "\n";
	for (i = s.begin(); i != s.end(); i++)
		cout << *i << " ";
	cout << "\n";
	float h[2] = { u,v };
	tset hh(h, h + 2);
	cout << " Vivodim vtoroe vrema  ";
	cout << "\n";
	for (i = hh.begin(); i != hh.end(); i++)
		cout << *i << " ";
	cout << "\n";
	//float m[2] = { w,x };
//	tset mm(m, m + 2);

//	cout << " Vivodim tretie vrema  ";
//	cout << "\n";
	//for (i = mm.begin(); i != mm.end(); i++)
	//	cout << *i << " ";
//	cout << endl;
	//cout << "\n";
}