#include "Time.h"
Time::Time(void)
{
	min = sec = 0;
}
Time::Time(int M, int S)
{
	min = M; sec = S;
}
Time::Time(const Time& t)
{
	min = t.min;
	sec = t.sec;
}
Time& Time::operator =(const Time& t)
{
	min = t.min;
	sec = t.sec;
	return*this;
}
ostream& operator<<(ostream& out, const Time& t)
{
	out << t.min << " : " << t.sec;
	return out;
}
istream& operator>>(istream& in, Time& t)
{
	cout << "\nmin?"; in >> t.min;
	cout << "\nsec?"; in >> t.sec;
	return in;
}

Time Time::operator+(const Time& t)
{
	int temp1 = min * 60+sec;
	int temp2 = t.min * 60+t.sec;
	Time temp((temp1 + temp2) / 60, (temp1 + temp2) % 60);
	

	return temp;
}
