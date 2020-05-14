#include <iostream>
#include <ctime>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int min, max;
	multiset <int> mst;
	int a, b, c, d,k;
	cout << "Добавление значений: a = 1; b = 3;c = 2; d = 4" << endl;
	for (int i = 0; i <1; i++) {
		


		a = 1; b = 3;
		c = 2; d = 4;
		mst.insert(a);
		mst.insert(b);
		mst.insert(c);
		mst.insert(d);

		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
	}

	multiset <int> ::iterator it = mst.begin();
	//sort(mst.begin(), mst.end());
	//for_each(i,show)
	cout << "Минимальное значение и Отсортированный вариант: " << endl;
	for (int i = 1; it != mst.end(); i++, it++) {
		cout << *it << " ";
		if (i == 1)if (it != mst.end()) cout << "-min;   " << *it << " "; max = *it;
		//if (it == mst.begin()) cout <<  *it << " "; min = *it;
	}
	cout << "\n";
	cout << "max " << max << " ";
	
	cout << "\n";
multiset <int> ::iterator its = mst.begin();

 {
	if (its == mst.begin())  min = *its;
	}

	cout << "min " << min << " ";
///////////////////////Zadanie 3///////////////////////////////////////
	cout << "\n";
	cout << "\n";
	cout << "ZADANIE 3" << endl;
	
	cout << "Добавление min значения в конец контейнера: a = 1; b = 3;c = 2; d = 4; min " << endl;
	
	
	for (int i = 0; i < 1; i++) {
		a = 1; b = 3;
		c = 2; d = 4;
		mst.insert(a);
		mst.insert(b);
		mst.insert(c);
		mst.insert(d);
		mst.insert(min);
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
		cout << min << endl;
	}
	cout << "\n";
	cout << "\n";
	cout << "ZADANIE 5" << endl;
	cout << "Добавление к каждому элементу контейнера суммы=мин+мах:" << endl;
	for (int i = 0; i < 1; i++) {
		a = 1; b = 3;
		c = 2; d = 4;
		a = a + min + max;
		b = b + min + max;
		c = c + min + max;
		d = d + min + max;
		mst.insert(a);
		mst.insert(b);
		mst.insert(c);
		mst.insert(d);
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
		
	}

	cout << "\n";
	cout << "\n";
	cout << "ZADANIE 4" << endl;
	cout << "Исходные элементы: a = 1; b = 3;c = 2; d = 4" << endl;
	cout << "Необходимо выбрать Key (номер элемента) для удаления" << endl;
	//remove_if
	cin >> k;
	cout << "\n";
	if (k == 1)
	{
		for (int i = 0; i < 1; i++) {
			a = 1; b = 3;
			c = 2; d = 4;
			//mst.insert(a);
			mst.insert(b);
			mst.insert(c);
			mst.insert(d);
			//cout << a << endl;
			cout << b << endl;
			cout << c << endl;
			cout << d << endl;

		}
	}
		
	if (k == 2)
	{
		for (int i = 0; i < 1; i++) {
			a = 1; b = 3;
			c = 2; d = 4;
			mst.insert(a);
			//mst.insert(b);
			mst.insert(c);
			mst.insert(d);
			cout << a << endl;
			//cout << b << endl;
			cout << c << endl;
			cout << d << endl;

		}
	}

	if (k == 3)
	{
		for (int i = 0; i < 1; i++) {
			a = 1; b = 3;
			c = 2; d = 4;
			mst.insert(a);
			mst.insert(b);
			//mst.insert(c);
			mst.insert(d);
			cout << a << endl;
			cout << b << endl;
			//cout << c << endl;
			cout << d << endl;

		}
	}
	if (k == 4)
	{
		for (int i = 0; i < 1; i++) {
			a = 1; b = 3;
			c = 2; d = 4;
			mst.insert(a);
			mst.insert(b);
			mst.insert(c);
			//mst.insert(d);
			cout << a << endl;
			cout << b << endl;
			cout << c << endl;
			//cout << d << endl;

		}
	}
	return 0;
}