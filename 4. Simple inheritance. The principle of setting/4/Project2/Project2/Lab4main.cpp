#include <iostream> 
#include "Pair.h" 
#include "Rectangle.h" 
using namespace std;
/////

void f1(Rectangle& c)

{


	c.Set_Gruz(1);

	//cout << c << "setc----";

}

void f3(Pair& p)

{

	//p.Set_power(0);
	p.Set_cyl(0);
	
	//cout << p << "setc";

}

Rectangle f2()

{

	Rectangle l(1, 2, 3); return l;
	//cout  << "55555555555";
}
//////
void main()

{


	Pair a; //cin >> a; 
	//cout << a << "a";
	cout << "\n";

	Pair b(0, 0); //cout << b << "b";
	cout << "\n";

	//a = b;

	//a + 9;
	//cout << a  << "a";
	//cout << "\n";
	//cout << a + 9 << "Summ";
	//a = b;
	//cout << b + 9 << "Summ";

	cout << "\n";




	

	

		

	


	//работа с классом Lorry 
	Rectangle c;
	
	cin >> c;
	
	//cout << c<< "c"; //принцип подстановки

	f1(c);//передаем объект класса Lorry 
	a = f2();//создаем в функции объект класса Lorry 
	
			//a + b + c;
	//f1(c) + f2();
	//cout << a + 9+9 << "p_________";

	
	Rectangle p;

	cin >> p;

	//cout << c << "p"; //принцип подстановки

	f3(p);//передаем объект класса Lorry 
	a = f2();//создаем в функции объект класса Lorry 
	//a + b + c;
	//p.Set_power(1) + c.Set_power(1);
	//f1(c) + f2();
	//cout << a  << "a";
	//a = f2();
	//cout << a + 9 + 9 << "p_________";
}

