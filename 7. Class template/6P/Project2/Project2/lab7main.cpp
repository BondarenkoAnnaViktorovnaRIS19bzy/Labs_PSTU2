#include "Vector.h"
#include "Time.h"
#include <iostream>
using namespace std;
void main()
{
	//инициализация, ввод и вывод значений вектора
	cout << "Vvedite 1 vektor" << endl;
	Vector<int>A(5, 0);
	cin >> A;
	cout << "Vektor A=" << A << endl;
	//инициализация и вывод значений вектора
	Vector <int>B(5, 1);
	//cout << B << endl;
	//операция присваивания
	cout << "B=A"  << endl;
	B = A;
	cout <<"Vektor B="<< B << endl;
	//доступ по индексу
	cout << "" << endl;
	cout << "Element pod indexom 2=" << endl;
	cout << A[2] << endl;
	//получение длины вектора
	cout << "" << endl;
	cout << "size=" << A() << endl;
	//операция сложения с константой
	cout << "" << endl;
	cout << "Summa vektorov A+B" << endl;
	B = A + B;
	cout << B << endl;
	Time t;
	cin >> t;
	cout << t;
	
	Vector<Time>C(1, t);
	cin >> C;
	cout << C << endl;
	Vector <Time>D(1, t);
	cout << D << endl;
	
	cout << "Vivod summ vremeni" << endl;
	 t + t;
	cout << t+t << endl;
}