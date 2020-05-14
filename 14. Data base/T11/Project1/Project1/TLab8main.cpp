#include <fstream> 
#include <iostream> 
#include <string> 
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iomanip>

using namespace std;

struct Firma {
	string Name_Podrazdelenia;
	string Fenics;
	int Doxod;
	string Date;
	
};

class DataBase
{
public:
	DataBase();
	void Add(Firma firma);
	void Delete(int index);
	void Save(string fn);
	void Load(string fn);
	std::vector<Firma> data;
};

DataBase db;

int ReadUnsIntFromStdIn() {
	string tmp;
	cin >> tmp;
	int res = -1;
	try {
		res = std::stoi(tmp);
		if (res < 0)
			res = -1;
	}
	catch (...) {
		res = -1;
	}
	return res;
}

void DeleteRecord(int recNum) {
	cout << "DELETE RECORD #" << recNum << endl;
	if ((recNum < 0) | (recNum >= db.data.size())) {
		cout << "Wrong record ID" << endl;
		return;
	}
	db.data.erase(db.data.begin() + recNum);
	db.Save("file.txt");
}

void EditRecord(int recNum) {
	cout << "EDIT RECORD #" << recNum << endl;
	if ((recNum < 0) | (recNum >= db.data.size())) {
		cout << "Wrong record ID" << endl;
		return;
	}
	char cmd;
	while (true) {
		cout << "1: Name podrazdelenia firmi: " << db.data[recNum].Name_Podrazdelenia << endl;
		cout << "2: Fenics: " << db.data[recNum].Fenics << endl;
		cout << "3: Doxod: " << db.data[recNum].Doxod << endl;
		cout << "4: God: " << db.data[recNum].Date << endl;
		
		cout << "5: Save and exit" << endl;
		cout << "> ";
		cin >> cmd;
		
		switch (cmd) {
		case '1': {
			cout << "Input new name podrazdelenia firmi: ";
			cin >> db.data[recNum].Name_Podrazdelenia;
			break;
		}
		case '2': {
			cout << "Input new name firmi: ";
			cin >> db.data[recNum].Fenics;
			break;
		}
		case '3': {
			cout << "Input new doxod: ";
			cin >> db.data[recNum].Doxod;
			break;
		}
		case '4': {
			cout << "Input new god: ";
			cin >> db.data[recNum].Date;
			break;
		}
		
		case '5':
			cout << "Save and exit" << endl;
			goto exit;
			break;
		}
	}
exit:;
	db.Save("file.txt");
}

void AddRecord() {
	Firma pod;
	cout << "ADD RECORD" << endl;
	cout << "1: Name podrazdelenia firmi: ";
	cin >> pod.Name_Podrazdelenia;
	cout << "2: Firma: ";
	cin >> pod.Fenics;
	pod.Doxod = -1;
	while (pod.Doxod == -1) {
		cout << "3: Doxod: ";
		pod.Doxod = ReadUnsIntFromStdIn();
	}
	cout << "4: God: ";
	cin >> pod.Date;
	
	db.data.push_back(pod);
	db.Save("file.txt");
}

void Sell(int recNum, int recNum2) {
	


	if (recNum < recNum2)  cout << "Doxod Perioda-1 nige" << endl; else cout << "Doxod Perioda-2 nige" << endl;
	
	{
		
		return;
	}



}
/////////////////////////////////////////
void Add(int recNum) {
	
	
	if (recNum < 1000)  cout << "NET PRIBILI V ETOM GODY" << endl; 
	if (recNum > 1000)  cout << "EST PRIBIL V ETOM GODY" << endl;
	{
		
		return;
	}
	
	cout << "Name podrazdelenia firmi: " << db.data[recNum].Name_Podrazdelenia << endl;
	cout << "Fenics: " << db.data[recNum].Fenics << endl;
	cout << "Doxod: " << db.data[recNum].Doxod << endl;
	cout << "God: " << db.data[recNum].Date << endl;
	
	cout << "Input count: ";
	int count = ReadUnsIntFromStdIn();
	

	db.Save("file.txt");
}

void VieverMode() {
	cout << "VIEVER MODE" << endl;
	char cmd;
	while (true) {
		cout << setw(5) << left << "id" << setw(20) << "Name podrazdelenia" << setw(20) << "Fenics" << setw(20) << "Doxod" << setw(20) << "God" << endl;
		for (int i = 0; i < db.data.size(); i++) {
			cout << setw(3) << left << i + 1 << ": " << setw(20) << db.data[i].Name_Podrazdelenia << setw(20) << db.data[i].Fenics << setw(20) << db.data[i].Doxod << setw(20) << db.data[i].Date <<  endl;
		}
		cout << "1: Edit/Izmenenie" << endl;
		cout << "2: Delete" << endl;
		cout << "3: Add " << endl;
		cout << "4: Doxod nige srednego" << endl;
	
		///////////////////
		
		cout << "5: Otsenka pribili" << endl;
		cout << "6: Main menu" << endl;
		cout << "> ";
		cin >> cmd;
		
		switch (cmd) {
		case '1': {
			cout << "Input record number: ";
			int recNum = ReadUnsIntFromStdIn() - 1;
			EditRecord(recNum);
			break;
		}
		case '2': {
			cout << "Input record number: ";
			int recNum = ReadUnsIntFromStdIn() - 1;
			DeleteRecord(recNum);
			break;
		}
		case '3': {
			AddRecord();
			break;
		}
		case '4': {
			cout << "VVedite srednii doxod po firme 2 raza: ";

			int recNum = ReadUnsIntFromStdIn() - 1;
			int recNum2 = ReadUnsIntFromStdIn() - 1;
			Sell(recNum, recNum2);
			
			break;
		}
		
		/////////////////////////////////////////////////
		case '5': {
			cout << "VVESTI SUMMU DOXODA: ";
			int recNum = ReadUnsIntFromStdIn() - 1;
			Add(recNum);
			break;
		}
		case '6':
			cout << "Exit" << endl;
			goto exit;
			break;
		}
	}
exit:;

}

int main(void)
{
	db.Load("file.txt");
	char cmd;
	while (true) {
		cout << "1: Vivesti vce coxranennoe" << endl;
		cout << "2: Ydalit vce zapisi" << endl;
		cout << "3: Exit" << endl;
		cout << "> ";
		cin >> cmd;
		cin.ignore(256, '\n');
		switch (cmd) {
		case '1':
			VieverMode();
			break;
		case '2':
			db.data.clear();
			db.Save("file.txt");
			break;
		case '3':
			cout << "Exit" << endl;
			goto exit;
			break;
		}
	}
exit:;
}

DataBase::DataBase() {

}

void DataBase::Save(string fn)
{
	cout << "Save:" << endl;
	ofstream out(fn, ios_base::out | std::ios::binary);
	for (Firma index : data) {
		cout << "   Writed: " << index.Name_Podrazdelenia << " " << index.Fenics << " " << index.Date << " " << index.Doxod << endl;
		out << index.Name_Podrazdelenia << " " << index.Fenics << " " << index.Date << " " <<index.Doxod << endl;
	}
	out.close();
}

void DataBase::Load(string fn)
{
	cout << "Load:" << endl;
	ifstream in(fn);
	Firma pod;
	string Name_Podrazdelenia, Fenics, Date;
	int Doxod;
	while (in >> Name_Podrazdelenia >> Fenics >> Date >>  Doxod) {
		cout << "   Readed: " << Name_Podrazdelenia << " " << Fenics << " " << Date << " " <<  Doxod << endl;
		pod.Name_Podrazdelenia = Name_Podrazdelenia;
		pod.Fenics = Fenics;
		pod.Doxod = Doxod;
		pod.Date = Date;
		
		data.push_back(pod);
	}
	in.close();
}