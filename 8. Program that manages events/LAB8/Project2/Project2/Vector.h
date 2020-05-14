#pragma once
#pragma once

#include "Object.h"
#include <iostream> 
#include <string>
using
namespace
	std;
class
	Vector
{
public:
	//Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add();
	void Del();
	void Show();
	//friend ostream& operator <<(ostream& out, const Vector&);
	int operator() ();
protected:
	Object** beg;
	int size;
	int cur;


};
