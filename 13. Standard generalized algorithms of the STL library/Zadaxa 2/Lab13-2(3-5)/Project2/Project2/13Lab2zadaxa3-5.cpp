
#include <iostream>
#include <algorithm>
#include <queue>  // подключили библиотеку queue

using namespace std;
void print0();
void print();
void print2();
void print3();
void print4();


int main() {
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "ZADANIE 3 ";
	cout << "Введите 4 числа: " << endl;

	{
		int a;
		int a2;
		int a3;
		int a4;
		int u;
		int u2;
		int u3;
		int u4;


		int min, min1;

		

		cin >> a;
		cin >> a2;
		cin >> a3;
		cin >> a4;

		u = a;
		u2 = a2;
		u3 = a3; u4 = a4;

		q.push(a);  // добавляем в очередь элементы
		q.push(a2);  // добавляем в очередь элементы
		q.push(a3);  // добавляем в очередь элементы
		q.push(a4);  // добавляем в очередь элементы



		if (a3 >a4) a3 = a4;
		if (a > a2) a = a2;
		if (a > a3)   min1 = a3;  
		if (a > a3); else min1 = a; 
		
		u = a;
		u2 = a2;
		u3 = a3; u4 = a4;
		if (u3 > u4) u3 = u4;
		if (u > u2) u = u2;
		if (u > u3)  cout << "min=" << u3; min = u3;

		if (u > u3); else  cout << " min=" << u; min = u;

		
		
		q.push(min1);  // добавляем в очередь элементы
		

	}
	
	
	cout << "Vivodim elementi oheredi: "  ;

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;
	q.pop();
	cout << "4 el: " << q.front() << endl;
	q.pop();
	cout << "5 el: " << q.front() << endl;

	if (!q.empty()) cout << "Очередь не пуста!";  // проверяем пуста ли очередь (нет)
	print0();
	system("pause");
	return 0;
}
void print0()
{
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "\n";
	cout << "ZADANIE 5 ";
	cout << "Введите 4 числа: " << endl;

	
	{
		int a;
		int a2;
		int a3;
		int a4;
		int min, max,s,u,u2,u3,u4,w, w2, w3, w4, min1,e, e2, e3, e4,k ;



		cin >> a;
		cin >> a2;
		cin >> a3;
		cin >> a4;

		u = a;
		u2 = a2;
		u3 = a3; u4 = a4;
		w = a;
		w2 = a2;
		w3 = a3; w4 = a4;
		e = a;
		e2 = a2;
		e3 = a3; e4 = a4;
		cout << "ISHEM MAXIM ELEMENT ";
		cout << "\n";
		//ищем максим элемент
		
		if (w3 > w4) w3 = w4;
		if (w > w2) w = w2;
		if (w > w3)   min1 = w3;
		if (w > w3); else min1 = w;



		if (a3 >a4); else a3 = a4;
		if (a > a2); else a = a2;
		if (a > a3)  cout << "max=" << a << "s" << u + min1; max = a;
		
		if (a > a3); else  cout << " max=" << a3 ; max = a3;

		cout << "\n";
		
		
		if (u3 > u4) u3 = u4;
		if (u > u2) u = u2;
		if (u > u3)    cout << "min=" << u3<<"summ"<<u+max; min = u3;

		if (u > u3); else  cout << " min=" << u  ; min = u;



		cout << "\n";
		cout << "Symma max i min elementa ";
		cout << "\n";
		s = min + max;
		cout << " =" << s;

		cout << "\n";
		cout << "K kagdomy elementy konteinera dobavit symmy min i max elementov";

		
		e = e + s;
		e2 = e2 + s;
		e3 = e3 + s;
		e4 = e4 + s;
		q.push(e);  // добавляем в очередь элементы
		q.push(e2);  // добавляем в очередь элементы
		q.push(e3);  // добавляем в очередь элементы
		q.push(e4);  // добавляем в очередь элементы

	}
	cout << "\n";
	cout << "Vivodim elementi oheredi: ";

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;
	q.pop();
	cout << "4 el: " << q.front() << endl;
	//q.pop();
	//cout << "5 el: " << q.front() << endl;
	cout << "ZADANIE 4 ";
	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	int k;
	cin >> k;

	if (k == 1) print();
	if (k == 2) print2();
	if (k == 3) print3();
	if (k == 4) print4();


	if (!q.empty()) cout << "Очередь не пуста!";  // проверяем пуста ли очередь (нет)
	
	
	return ;
	
}
void print()
{
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "\n";
	
	cout << "Введите 4 числа: " << endl;


	
		int a;
		int a2;
		int a3;
		int a4;
		



		cin >> a;
		cin >> a2;
		cin >> a3;
		cin >> a4;

		
		q.push(a);  // добавляем в очередь элементы
		q.push(a2);  // добавляем в очередь элементы
		q.push(a3);  // добавляем в очередь элементы
		q.push(a4);  // добавляем в очередь элементы

	
	cout << "\n";
	cout << "Vivodim elementi oheredi: ";
	q.pop();
	q.pop();
	q.pop();
	q.pop();

	q.push(a2);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элемент

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;
	
	
	
	
	return;

}
void print2()
{
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "\n";

	cout << "Введите 4 числа: " << endl;



	int a;
	int a2;
	int a3;
	int a4;




	cin >> a;
	cin >> a2;
	cin >> a3;
	cin >> a4;


	q.push(a);  // добавляем в очередь элементы
	q.push(a2);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элементы


	cout << "\n";
	cout << "Vivodim elementi oheredi: ";
	q.pop();
	q.pop();
	q.pop();
	q.pop();

	q.push(a);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элемент

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;




	return;

}
void print3()
{
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "\n";

	cout << "Введите 4 числа: " << endl;



	int a;
	int a2;
	int a3;
	int a4;




	cin >> a;
	cin >> a2;
	cin >> a3;
	cin >> a4;


	q.push(a);  // добавляем в очередь элементы
	q.push(a2);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элементы


	cout << "\n";
	cout << "Vivodim elementi oheredi: ";
	q.pop();
	q.pop();
	q.pop();
	q.pop();

	q.push(a);  // добавляем в очередь элементы
	q.push(a2);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элемент

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;




	return;

}
void print4()
{
	setlocale(LC_ALL, "rus");
	queue <int> q;  // создали очередь q
	cout << "\n";

	cout << "Введите 4 числа: " << endl;



	int a;
	int a2;
	int a3;
	int a4;




	cin >> a;
	cin >> a2;
	cin >> a3;
	cin >> a4;


	q.push(a);  // добавляем в очередь элементы
	q.push(a2);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элементы
	q.push(a4);  // добавляем в очередь элементы


	cout << "\n";
	cout << "Vivodim elementi oheredi: ";
	q.pop();
	q.pop();
	q.pop();
	q.pop();

	q.push(a);  // добавляем в очередь элементы
	q.push(a2);  // добавляем в очередь элементы
	q.push(a3);  // добавляем в очередь элемент

	cout << endl;
	cout << "1 el: " << q.front() << endl;  // выводим первый
	q.pop();  // удаляем элемент из очереди
	cout << "2 el: " << q.front() << endl;
	q.pop();
	cout << "3 el: " << q.front() << endl;




	return;

}