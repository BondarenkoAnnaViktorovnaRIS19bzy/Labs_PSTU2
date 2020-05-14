#pragma once
#include <iostream>
using namespace std;
class Iterator
{
friend class Vector;//
public:

	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator ==(const Iterator& it) { return elem == it.elem; }
	bool operator !=(const Iterator& it) { return elem != it.elem; }
	void operator++() { ++elem; };
	void operator--() { --elem; };
	void operator=(int n) { };
	int& operator *() const {return *elem; };

private:
	int* elem;

};


class Vector
{
public:
	//конструктор с параметрами: выделяет память под s элементов и заполняет их
	//значением k
	Vector(int s, int k = 0);

	//конструктор с параметрами
	Vector(const Vector& a);
	//деструктор
	~Vector();
	//оператор присваивания
	Vector& operator=(const Vector& a);
	//операция доступа по индексу
	int& operator[](int index);
	//операция для добавление vectora
	Vector operator=( int n);

	Vector operator+(Vector);
	//операция, возвращающая длину вектора
	int operator()();
	//перегруженные операции ввода-вывода

	friend ostream& operator<<(ostream& out, const Vector& a);
	friend istream& operator>> (istream& in, Vector& a);

	Iterator skip() { return beg; }
	Iterator last() { return end; }

private:
	int size;//размер вектора
	int* data;//укзатель на динамический массив значений вектора

	Iterator beg;
	Iterator end;
};
