#pragma once

#include "Pair.h"
#include <iostream> 
//����� Lorry ����������� �� ������ Car 
class Rectangle :

	public Pair

{

public:

	Rectangle(void);//����������� ��� ���������� public:

	~Rectangle(void);//���������� 
	Rectangle(int, int, int);//����������� � �����������

	Rectangle(const Rectangle&);//����������� ����������� 
	int Get_gruz() { return gruz; }//�����������

	void Set_Gruz(int);//��������


	///////////////

	//Rectangle operator+(int n);

	////////////////
	Pair& operator+(const Pair&n);




	Rectangle& operator=(const Rectangle&);//�������� ������������

	friend istream& operator>>(istream& in, Rectangle& l);//�������� �����

	friend ostream& operator<<(ostream& out, const Rectangle& l); //�������� ������ protected:

	int gruz;//������� ����������������

};
