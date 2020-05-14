#include "Pair.h"


Pair::Pair(void)
{
	
	first = 0;
	second = 0;
}
Pair::~Pair(void)
{
}
Pair::Pair(int C, int P)
{
	
	first = C;
	second = P;
}
Pair::Pair(const Pair& pair)
{
	
	first = pair.first;
	second = pair.second;
}
void
Pair::Set_first(int C)
{
	first = C;
}

void
Pair::Set_second(int P)
{
	second = P;
}
Pair& Pair::operator=(const Pair& c)
{
	if (&c == this)
		return *this;
	
	second = c.second;
	first = c.first;
	return *this;
}
istream& operator>>(istream& in, Pair& c)
{
	
	return in;
}
ostream& operator <<(ostream& out, const Pair& c)
{
	
	out << "\n";
	return
		out;
}
void
Pair::Show()
{
	
	cout << "\n";
}