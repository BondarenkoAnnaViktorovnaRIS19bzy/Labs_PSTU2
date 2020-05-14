#include "Object.h"
#include "Pair.h"
#include "Rectangle.h"
#include "Vector.h"
#include <string>
#include <iostream>
using
namespace
	std;
void
main()
{

	Vector v(5);

	Pair a;
	cin >> a;
	Rectangle b;
	cin >> b;
	Object* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	
	cout << v << "";


	
}
