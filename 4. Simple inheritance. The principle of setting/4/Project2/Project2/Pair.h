#pragma once
#pragma once
#include <string> 
#include <iostream> 
using namespace std;
class Pair

{

	//����������� ��� ���������� public:
public:
	Pair(void);
public: //����������

	virtual ~Pair(void); //���������� � �����������



	/////////////////
	//int a, b;

	//int  vvod_a()
	//{
		//cout << "\nInsert new a: ";
	//	cin >> a;
		//return a;
	//}
	//int  vvod_b()
	//{
		//cout << "\nInsert new b: ";
		//cin >> b;
		//return b;
	//}

	//////////////////


	Pair( int, int); //����������� �����������

	Pair(const Pair&);

	//���������

	//string Get_mark() { return mark; } 
	int Get_cyl() { return cyl; }

	int Get_power() { return power; } //������������

	//void Set_mark(string); 
	void Set_cyl(int); 
	void Set_power(int);
	///////////////////
	
	//void operator+(int n) { };
	///////////////////


	//���������� �������� ������������
	Pair& operator+(int n);
	Pair& operator-(int n);
	Pair& operator=(const Pair&); //���������� ���������-������� �����-������

	friend istream& operator>>(istream& in, Pair& c); friend ostream& operator<<(ostream& out, const Pair& c);

	//�������� protected:

	//string mark; 
	int cyl;

	int power;

};
