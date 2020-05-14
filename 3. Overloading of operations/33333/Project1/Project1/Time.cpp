#include "Time.h"
#include <iostream>
//using namespace std ; //������������������������������

using namespace std;
//void main();

Time& Time::operator= (const Time& t)
{
	//�������� �� ����������������
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

//����������������������������������
Time Time::operator-(const Time& t)
{
	int temp1 = min * 60;
	int temp2 = t.min * 60;
	int temp3 = sec;
	int temp4 = t.sec;
	Time p;
	p.min = ((temp1 - temp2) - (temp4 - temp3)) / 60;

	p.sec = ((temp1 - temp2) - (temp4 - temp3)) % 60;

	return p;
}
//���������
Time Time::operator!=(const Time& t)
{
	int temp1 = min * 60;
	int temp2 = t.min * 60;
	int temp3 = sec;
	int temp4 = t.sec;
	Time p;
	if (temp1 != temp2)  cout << "Sravnenie vremennix intervalov - ne ravnie po min" << endl;
	if (temp1 != temp2);
	else cout << "Sravnenie vremennix intervalov - ravnie po min" << endl;
	if (temp3 != temp4) cout << "Sravnenie vremennix intervalov - ne ravnie po sec" << endl;
	if (temp3 != temp4);
	else cout << "Sravnenie vremennix intervalov - ravnie po sec" << endl;
	
	return p;
}


//���������������������������-�������������
istream& operator>>(istream& in, Time& t)
{
	cout << "min?"; in >> t.min;
	cout << "sec?"; in >> t.sec;
	return in;
}
//���������� ���������� �������-�������� ������
ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}
