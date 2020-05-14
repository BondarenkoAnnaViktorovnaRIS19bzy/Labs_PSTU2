#include<iostream>
#include "fraction.h"
using namespace std;
fraction make_fraction(double F, int S)
{
	
	fraction t;
	t.Init(F, S);
	
	return t;
}
void main()
{
	
	fraction mas[3];
	for (int i = 0; i < 3; i++)
		mas[i].Read();
	cout << "" << endl << "\n";
	cout << "ZADANO_____________________" << endl << "\n";

	for (int i = 0; i < 3; i++)
		mas[i].Show();

	

	cout << "" << endl << "\n";
	cout << "REZULTAT_____________________" << endl << "\n";
	for (int i = 0; i < 3; i++)
	{
		mas[i].Summa();
		cout << "kolih*nominal__ " << i+1 << "__banknoti:__(" << mas[i].first << "*" << mas[i].second << ")=";
		cout << mas[i].Summa() << endl;

	}

	for (int i = 0; i < 3; i++)
	{
		mas[i].Summa();
		int s;
		if (i = 2);
		s = mas[0].Summa() + mas[1].Summa() + mas[2].Summa();
		cout << "summ=" << s << endl << "\n";
	}

	
}
