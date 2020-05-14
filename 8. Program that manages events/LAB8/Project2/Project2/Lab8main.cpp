#include "Object.h"
#include "Person.h"
#include "Employee.h"
#include "Vector.h"
#include "Dialog.h"

#include <string>
#include <iostream>
using
namespace
	std;
void
main()
{


	Person* a = new Person;
	a->Input();
	a->Show();
	Employee* b = new Employee;
	b->Input();
	b->Show();

	Vector v(10);

	Object* p = a;
	// v.Add(p);
	p = b;
	// v.Add(p);
	v.Show();
	v.Del();
	cout << "\nVector size" << v();

	Dialog D;
	D.Execute();
}
