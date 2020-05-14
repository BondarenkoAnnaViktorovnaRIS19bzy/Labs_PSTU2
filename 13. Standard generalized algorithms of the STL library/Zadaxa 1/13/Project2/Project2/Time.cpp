#include "Time.h"
#include <iostream>
//using namespace std ; //перегрузкаоперацииприсваивания

using namespace std;
//void main();

Time& Time::operator= (const Time& t)
{
	//проверка на самоприсваивание
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}



Time Time::operator+(const int k)
{
	int temp1 = min * 60;

	int temp3 = sec;
	Time t;
	for (int i = 0; i < 3; ++i)
		t.min = temp1 + k;
	t.sec = temp3 + k + k;
	return t;
}





//перегрузкаглобальнойфункции-операцииввода
istream& operator>>(istream& in, Time& t)
{
	cout << "min?"; in >> t.min;
	cout << "sec?"; in >> t.sec;
	return in;
}
//перегрузка глобальной функции-операции вывода
ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}
