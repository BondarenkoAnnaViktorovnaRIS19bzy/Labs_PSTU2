#include "Vector.h"

#include <iostream>
using namespace std;
void main()
{
	//инициализация, ввод и вывод значений вектора
	Vector a(5);
	cout << a << "\n";
	cout << "\nVvedite Vector a";
	cout << "\n";
	cin >> a;
	cout << "\nVector a=";
	cout << "\n";
	cout << a << "\n";
	a[2] = 100;
	cout << a << "\n";
	Vector b(10);
	cout << b << "\n";
	b = a;
	cout <<  "\nVector b=a";
	cout << "\n";
	cout << b << "\n";
	Vector c(10);
	cout << "\nVector c=b+a (summa vectorov)";
	cout << "\n";
	c = b + a;
	cout << c << "\n";
	cout << "\nthe lenght of a=" << a() << endl;

	



	int n;
	cout << "\nPerexod v pravo k elemty s nomerom n" << endl;
	cout << "\nVvedite nomer n. (n izmenaetsa ot 0 do 4)" << endl;
cin >> n;
a.skip() = n;
	Iterator i = a.skip();
	

	

cout << "\nElement pod nomerom n raven" <<  endl;
	
	

	if  (n==0)  cout << *i << endl;
	++i;
	if (n == 1)  cout << *i  << endl;
	++i;
	if (n == 2)  cout << *i << endl;
	++i;
	if (n == 3)  cout << *i << endl;
	++i;
	
	if (n == 4) cout << *i  << endl;
	
}
