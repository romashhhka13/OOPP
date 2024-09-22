#include "Footballer.h"


using namespace std;


void Footballer::Input()
{
	Sportsman::Input();
	cout << "������� ����� ������: ";
	number = GetCorrectNumber(1, 99);

	vector<string> positions = { "�������", "����� ��������",
		"������ ��������", "����������� ��������", "������ ������������",
		"�����������������", "������� ������������", "����� ����������",
		"������ ����������", "����������� ����������" };
	position = positions[ChooseActionMenu(positions, false, "������� ������ �� ����: ") - 1];
}


void Footballer::Output() const
{
	Sportsman::Output();
	char symbol = 149;
	cout << symbol << "����� ������: " << number << endl
		<< symbol << "������� �� ����: " << position << endl;
}
