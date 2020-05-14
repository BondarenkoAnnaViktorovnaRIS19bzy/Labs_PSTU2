#include <iostream>
#include <set>

using namespace std;
typedef set<double > tset;
tset::iterator i;

void print0();
void main()
{
	float b,c, d, e,min;
b = 1; c = 2; d = 3; e = 4;
	float a[4] = { b,c,d,e };
	tset s(a, a + 4);	
	cout << " Vivodim konteiner:";
	for (i = s.begin(); i != s.end(); i++)
		cout << *i << " ";
	cout << endl;
	
	cout << "\n";
	cout << " Zadanie 3";
	cout << "\n";
	cout << " Ihem min element i dobavlaem v kones konteinera";
		cout << "\n";
		if (c > b) c = b;
	if (e > d) e = d;
	if (e > c)  cout << "min=" << c; min = c;
	if (e > c); else  cout << " min=" << e; min = e;
	cout << "\n";
	
	
	cout << " Tak kak konteiner ne moget vivesti povtorayhiesa el vivodim summy min i 4 el=5";
	cout << "\n";
	
	print0();

}

void print0()
{
	float b, c, d, e,l, min;
	b = 1; c = 2; d = 3; e = 4;
	if (c > b) c = b;
	if (e > d) e = d;
	if (e > c)  
		min = c;
	if (e > c); else  
		
		min = e;
	b = 1; c = 2; d = 3; e = 4;

	float r[5] = { b,c,d,e,min };
	tset q(r, r + 5);
	
	l = 4+min;
	q.insert(l);
	cout << " Vivodim konteiner s dobavleniem min+4 elem v konze.";
	cout << "\n";
	for (i = q.begin(); i != q.end(); i++)
cout << *i << " ";
	cout << endl;
}
