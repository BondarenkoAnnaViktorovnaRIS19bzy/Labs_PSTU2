#pragma once
#pragma once
#include "Person.h"
#include <iostream> 
//����� Lorry ����������� �� ������ Car 
class Employee :

	public Person

{

public:

	Employee(void);//����������� ��� ���������� public:
public:

	~Employee(void);//���������� 
	void Show();
	void Input();
	Employee(string, int, int);//����������� � �����������

	Employee(const Employee&);//����������� ����������� 
	int Get_zarplata() { return zarplata; }//�����������

	void Set_zarplata(int);//��������

	Employee& operator=(const Employee&);//�������� ������������

	//friend istream& operator>>(istream& in, Lorry& l);//�������� �����

	//friend ostream& operator<<(ostream& out, const Lorry& l); //�������� ������ protected:
protected:
	int zarplata;//������� ����������������

};