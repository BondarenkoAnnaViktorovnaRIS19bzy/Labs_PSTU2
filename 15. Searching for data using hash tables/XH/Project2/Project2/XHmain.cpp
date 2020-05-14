#include <iostream>
#include <clocale>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <clocale>




using namespace std;

#define s true
#define z false

const int n =100;
bool fl[n];

//’≈ÿ ‘”Õ ÷»ﬂ
int h(int key, int n)
{
	//int n = 100; 
	double A = 0.618033;
	int h1= n * fmod(key * A, 1);
	return h1;
}

int menu()
{
	//system("cls");
	cout << "" << endl;
	cout << "MENU:" << endl;
	cout << "1 - POISK" << endl;
	cout << "2 - PROSMOTR TABLE" << endl;
	cout << "3 - YDALENIE" << endl;
	cout << "4 - PROSMOTR FIO i SUMM" << endl;
	cout << "5 - VIXOD" << endl;

	int a = -1;

	while ((a > 5) || (a < 1))
	{
		cout << "Vvedite thislo:" << endl;
		if (!(cin >> a))
			cin.clear();
	}

	return a;
}

bool insert(int data, int* htable, bool* isEmpty, int n)
{
	int key = h(data, n);

	for (unsigned i = key; i < n; ++i)
		if (isEmpty[i])
		{
			htable[i] = data;
			isEmpty[i] = false;
			return true;
		}

	for (unsigned i = 0; i < key; ++i)
		if (isEmpty[i])
		{
			htable[i] = data;
			isEmpty[i] = false;
			return true;
		}

	return false;
}

int found(int data, int* a, int n)
{
	int key = h(data, n);

	if (fl[key] == z)
	{
		if (a[key] == data)
			return key;
	}

	for (int i = key + 1; i < n; ++i)
	{
		if (fl[i] == z)
		{
			if (a[key] == data)
				return i;
		}
	}

	for (int i = key - 1; i > -1; --i)
	{
		if (fl[i] == z)
		{
			if (a[key] == data)
				return i;
		}
	}

	return -1;
}

int main()
{
	setlocale(LC_ALL, "");

	int a[n], data;

	int key, boolean;
	bool flag, work = true;

	for (int i = 0; i < n; ++i)
	{
		fl[i] = s;
		a[i] = 0;
	}

	cout << "VIVIDIT MASSIV:" << endl;
	

	
	for (int i = 0; i < n; i++) {
		int data = rand() % 10 + 1;
		cout << data;
	}
	

	//cin.clear();

	while (work)
		switch (menu())
		{
		case 1:
			system("cls");

			int key;
			cout << " Î˛˜ > "; cin >> key;
			cout << "h(" << key << ")=" << h(key,n) << endl;
			system("pause>>void");
			system("pause");

			break;

		case 2:
			system("cls");

			
			for (int i = 0; i < n; i++) {
				int data = rand() % 10 + 1;
				cout << data;
			}
			
			
			
			
			
			//for (int i = 0; i < n; ++i)
			//{
			////	if (fl[i] == z)
			//	{
				//	cout.width(3);
				//	cout << right << i << ": ";
				//	cout << a[i];
				//	cout << endl;
				//}
			//}

			system("pause");

			break;

		case 3:
			system("cls");

			cout << "Vvedite element dla ydalenia:" << endl;
			cin >> data;

			boolean = found(data, a, n);

			if (boolean == -1)
			{
				cout << "net elementa" << endl;
			}

			else
			{
				fl[boolean] = s;
			}

			cout << "Element ydalen" << endl;

			system("pause");

			break;
		case 4:
			system("cls");

			void ma();
			{
				std::setlocale(0, "");
				std::string currentFileString;
				std::fstream inputFile("f2.txt", std::ios::in);

				while (std::getline(inputFile, currentFileString)) {
					std::string str;
					inputFile.close();
					inputFile.open("f2.txt");
					//int count = 0;
					while (inputFile >> str)
						//count++;
						std::cout << "SPISOK FIO i SUMM V FAILE F2.TXT = " << str << std::endl;
					inputFile.close();
				}
				std::system("pause");

			}


			break;


		case 5:
			work = false;
		}

	return 0;
}