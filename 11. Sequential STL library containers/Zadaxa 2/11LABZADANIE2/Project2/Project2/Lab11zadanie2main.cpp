#include "Time.h"
#include <iostream>
#include <list>
using namespace std;
void print0();
void print();
void print2();
void print3();

int main()
{
	std::list<float> floatList; // ����� ������ � ���������� ���� int
	float e, f, j, max, min, s, k;
	cout << "ZADANIE 1";
	cout << "\n";
	cout << "Vivodim elementi konteinera ";
	cout << "\n";
	// ������� �������� � ������ ������
	Time a;//����������� ��� ����������
	Time b; //����������� ��� ����������

	Time d; //����������� ��� ����������
	

	e = 11;
	f = 9;
	j = 5;

	floatList.push_front(j*2);
	
	floatList.push_front(j);

	floatList.push_front(f*2);
	
	floatList.push_front(f);

	floatList.push_front(e*2);
	
	floatList.push_front(e );

	cout << "a=" << a+e << endl; //����� ����������
	cout << "b=" << b+f << endl; //����� ����������
	cout << "d=" << d+j << endl; //����� ����������
	
	
	// �������� �������� � ������� ���������
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " "; 

	///////////////zadanie 3////////////////////////////////////
	cout << "\n";
	cout << "MINIM element raven= ";

	if (j < f) if (j < e) cout << j; cout << ":"; cout << j*2;

	cout << "\n";
	cout << "Dobavlaem MINIM element v konec konteinera ";
	cout << "\n";

	// ������� �������� � ����� ������
	floatList.push_back(j);
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " "; cout << j * 2;
	cout << "\n";
	cout << "\n";

	/////////////zadanie 5/////////////////////
	cout << "ZADANIE 5";
	cout << "\n";
	cout << "ISHEM MIN ELEMENT ";
	cout << "\n";
	//���� ������ �������
	
	j = 5;
	
	if (j < f) if (j < e) cout << "min=" << j<< ":"<< j * 2; min = j;
	cout << "\n";
	cout << "ISHEM MAX ELEMENT ";
	cout << "\n";
	if (e > f); else e = f;
	if (j > f); else j = f;
	if (e > j) cout << "max=" << e << ":" << e * 2; max = e;
	if (e > j); else  cout << " max=" << j; max = j;
	cout << "\n";
	max = e;
	
	cout << "Symma max i min elementa ";
	cout << "\n";
	s = max+min;
	cout << "=" << s<<":"<<s*2;

	cout << "\n";
	cout << "K kagdomy elementy konteinera dobavit symmy min i max elementov";

	j = 5;

	e = e + s;
	f =f + s;
	j= j + s;
	


	floatList.push_front(j * 2);

	floatList.push_front(j);

	floatList.push_front(f * 2);

	floatList.push_front(f);

	floatList.push_front(e * 2);

	floatList.push_front(e);
	cout << "\n";
	cout << "PERVIE 6 zifr s dobavleniem symmi, ostalnie simvoli nahalnogo konteinera+min elem     ";
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " "; j = 5; cout << j * 2;
	cout << "\n";
	cout << "\n";

	cout << "ZADANIE 4";
	cout << "\n";


	cout << "\nVVEDITE NOMER ELEMENTA(KEY) DLA YDALENIA:";
	cin >> k;
	print0();
	if (k == 1) print();
	if (k == 2) print2();
	if (k == 3) print3();
	
	return 0;

}
void print0()
{
	std::list<float> floatList; // ����� ������ � ���������� ���� int
	float e, f, j;

	cout << "Vivodim konteiner ";

	e = 11;
	f = 9;
	j = 5;

	floatList.push_front(j * 2);

	floatList.push_front(j);

	floatList.push_front(f * 2);

	floatList.push_front(f);

	floatList.push_front(e * 2);
	floatList.push_front(e);
	// �������� �������� � ������� ���������
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}

void print()
{
	std::list<float> floatList; // ����� ������ � ���������� ���� int
	float e, f, j;

	cout << "Vivodim konteiner s ydalenim elementom  ";

	e = 11;
	f = 9;
	j = 5;

	floatList.push_front(j * 2);

	floatList.push_front(j);

	floatList.push_front(f * 2);

	floatList.push_front(f);

	
	floatList.push_front(e);
	floatList.pop_front();
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print2()
{
	std::list<float> floatList; // ����� ������ � ���������� ���� int
	float e, f, j;

	cout << "Vivodim konteiner s ydalenim elementom  ";

	e = 11;
	
	j = 5;

	floatList.push_front(j * 2);

	floatList.push_front(j);

	floatList.push_front(e * 2);
	floatList.push_front(e);
	// �������� �������� � ������� ���������
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
void print3()
{
	std::list<float> floatList; // ����� ������ � ���������� ���� int
	float e, f, j;

	cout << "Vivodim konteiner s ydalenim elementom  ";

	
	f = 9;
	
	e = 11;
	

	floatList.push_front(f * 2);

	floatList.push_front(f);
	floatList.push_front(e * 2);
	floatList.push_front(e);

	// �������� �������� � ������� ���������
	for (std::list<float>::iterator iter = floatList.begin(); iter != floatList.end(); ++iter)
		std::cout << *iter << " ";
	cout << "\n";
}
