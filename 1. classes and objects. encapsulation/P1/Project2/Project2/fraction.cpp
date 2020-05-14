#include "fraction.h"
#include<iostream>
using namespace std;
//realizatsia metoda dla initcializatsii polei struktyri
void fraction::Init(double F, int S)
{
	first = F;
	second = S;
	
}
void fraction::Read()
{

	
	cout << "nominal banknoti { 1, 2, 5, 10, 50, 100, 500, 1000, 5000 } i kolichestvo " << endl;

	cout << "\nfirst?"; cin >> first;
	cout << "\nsecond?"; cin >> second;
	if (first != 1)  if (first != 2) if (first != 5)if (first != 10)if (first != 50) if (first != 100) if (first != 500) if (first != 1000) if (first != 5000)cout << "OHIBKA V NOMINALE!!! POLUSHENNII REZULTAT = 0 (ERROR!!!) ";

	cout << "" << endl << "\n";
	
}
void fraction::Show()
{
	cout << "\nfirst=" << first;
	cout << "\nsecond=" << second;
	cout << "\n";
}
double fraction::Summa()
{
	
	
	if (first != 1)  if (first != 2) if (first != 5)if (first != 10)if (first != 50) if (first != 100) if (first != 500) if (first != 1000) if (first != 5000)  system("cls");
	cout << "" << endl << "\n";
	if (first != 1)  if (first != 2) if (first != 5)if (first != 10)if (first != 50) if (first != 100) if (first != 500) if (first != 1000) if (first != 5000) return 0;
	
	
	
	
	return first * second;
	

}

