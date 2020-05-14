#include "Time.h"
#include <list>

float o, h, r, y, summarn1, summarn2, m, v, w, q;
Time::Time(void)
{
	min = sec = 0;
}
Time::Time(int M, int S)
{
	min = M; sec = S;
}
Time::Time(const Time& t)
{
	min = t.min;
	sec = t.sec;
}
Time& Time::operator =(const Time& t)
{
	min = t.min;
	sec = t.sec;
	return*this;
}
ostream& operator<<(ostream& out, const Time& t)
{
	out << t.min << " : " << t.sec;
	return out;
}
istream& operator>>(istream& in, Time& t)
{
	cout << "\nmin?"; in >> t.min;
	cout << "\nsec?"; in >> t.sec;
	return in;
}

Time Time::operator-(const Time& t)
{
	int temp1 = min * 60;
	int temp2 = t.min * 60;
	int temp3 = sec;
	int temp4 = t.sec;
	Time p;
	cout << "\n";

	cout << "Naxodim max vrema:" << endl;
	if (temp3 > temp1)  cout << "1 : "; else cout << "3 : ";
	if (temp4 > temp2) cout << "2";
	else  cout << "4";
	cout << "\n";
	cout << "Naxodim min vrema:" << endl;
	if (temp3 > temp1)  cout << "3 : "; o = 3;
	if (temp3 > temp1); else cout << "1 : "; h = 1;
	if (temp4 > temp2) cout << "4"; r = 4;
	if (temp4 > temp2); else  cout << "2"; y = 2;
	cout << "\n";
	summarn1 = h + o;
	summarn2 = r + y;
	cout << "\n";

	cout << "Vivodim summy min i max vremeni:" << endl;
	cout << "summa=" << summarn1 << ":" << summarn2;

	std::list<float> floatList; // создём список с элементами типа int

	floatList.push_front(r);
	floatList.push_front(o);
	floatList.push_front(y);
	floatList.push_front(h);
	cout << "\n";
	cout << "Vivodim konteiner:" << endl;
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
	cout << "Dobavlaem k kagdomy el. symmy max i min time ";
	cout << "PERVIE 4 zifri s dobavleniem symmi, ostalnie simvoli nahalnogo konteinera ";
	cout << "\n";

	// заносим элементы в конец списка
	m = h + summarn1;
	w = o + summarn1;
	v = y + summarn2;
	q = r + summarn2;
	floatList.push_front(q);
	floatList.push_front(w);
	floatList.push_front(v);
	floatList.push_front(m);
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";

	return p;
}
