
#pragma once
#include "Pair.h"
#include <iostream> 
//����� Rectangle ����������� �� ������ Pair 
class Rectangle :

	public Pair

{

public:

	Rectangle(void);//����������� ��� ���������� public:
public:

	~Rectangle(void);//���������� 
	void Show();
	Rectangle(int, int, int);//����������� � �����������

	Rectangle(const Rectangle&);//����������� ����������� 
	int Get_plohadperim() { return plohadperim; }//�����������

	void Set_plohadperim(int);//��������

	Rectangle& operator=(const Rectangle&);//�������� ������������

	friend istream& operator>>(istream& in, Rectangle& l);//�������� �����

	friend ostream& operator<<(ostream& out, const Rectangle& l); //�������� ������ protected:

	int plohadperim;//������� 

};