#include "Menu.h"


using namespace std;


void MenuAddSportsman(SportsmansGroup& group)
{
	cout << endl << "***������� ���������� � ����������***" << endl;
	group.AddSportsman();
}


void MenuAddFootballer(SportsmansGroup& group)
{
	cout << endl << "***������� ���������� � ����������***" << endl;
	group.AddFootballer();
}


void MenuShowSportsmans(const SportsmansGroup& group)
{
	cout << endl << "***����������***" << endl;
	if (group.ObjectExist())
		group.ShowSportsmans();
	else
		cout << "���������� �� �������!" << endl;
}


void MenuSave(const SportsmansGroup& group)
{
	string file_name;
	cout << endl << "������� �������� �����: ";
	getline(cin >> ws, file_name);

	ofstream fout(".data/" + file_name + ".txt");

	if (fout) {
		group.Save(fout);
		cout << "������ ������� ���������!" << endl;
	}
	else
		cout << "�� ������� ������� ����!" << endl;
}


void MenuLoad(SportsmansGroup& group)
{
	string file_name;
	cout << endl << "������� �������� �����: ";
	getline(cin >> ws, file_name);

	ifstream fin(".data/" + file_name + ".txt");
	if (fin) {
		group.Load(fin);
		cout << "������ ������� �������!" << endl;
	}
	else
		cout << "�� ������� ������� ����!" << endl;
}


void MenuClear(SportsmansGroup& group)
{
	cout << "�������� ������ (�� - 1, ��� - 0): ";
	if (GetCorrectNumber(0, 1)) {
		group.Clear();
		cout << "������ ������� �������!" << endl;
	}
}



