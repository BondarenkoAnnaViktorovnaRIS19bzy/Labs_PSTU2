#include "Vector.h"
#include"Error.h"
#include<iostream>
using
namespace
	std;
int main()
{
	try
	{
		Vector x(8);
		//int n;
		//cin >> n;
		Vector y(2);
		Vector d;
		cout << "Vivod pervogo vektora";
		cout << "\n";
		cout << x;
		cout << "\nthe lenght of 1 vektor=" << x() << endl;
		cout << "Vvedite nomer elementa";
		int i;
		int c;
		cin >> i;
		cout << "Element =";

		cout << x[i] << endl;
		cout << "\n";
		cout << "Kolithestvo elementov vtorogo vektora n=2";
		cout << "\n";
		cout << "Vivod vtorogo vektora";
		cout << "\n";
		cout << y << "";
		cout << "\n";
		cout << "Dobavlaet n elementov vektora 2 v konez vektora 1";
		cout << "\n";
		d = x + y + 6;
		cout << d;
		cout << "\n";
		cout << "Vvedite n elementov dla ydalenia iz kontza vektora 1";
		cout << "\n";

		int n;
		cin >> n;
		cout << "\n";

		cout << "Vivod vektora 1 posle ydalenia";
		cout << "\n";
		if (n == 1)  cout << --x;
		--x;
		if (n == 2)  cout << --x;

		--x;
		if (n == 3)  cout << --x;
		--x;
		if (n == 4)  cout << --x;
		--x;
		if (n == 5)  cout << --x;
		--x;
		if (n == 6)  cout << --x;
		--x;
		if (n == 7)  cout << --x;
		if (n >= 8)  cout << "nihego net";

		//if (n== 3) --x; --x;
		//cout << x;
		//--x;
	}
	catch
		(Error& e)
	{
		e.what();
	}
	return
		0;
}
