#include "SportsmansGroup.h"


using namespace std;


void SportsmansGroup::AddSportsman(){
	cout << endl << "***������� ���������� � ����������***" << endl;
	shared_ptr<Sportsman> s = make_shared<Sportsman>();
	cin >> *s;
	group.push_back(s);
}

void SportsmansGroup::ShowSportsmans()
{
	cout << endl << "***����������***" << endl;
	if (ObjectsExist(group)) {
		for (const auto& s: group)
			cout << *s;
	}
	else
		cout << "���������� �� �������!" << endl;
}

void SportsmansGroup::Save()
{
	string file_name;
	cout << endl << "������� �������� �����: ";
	getline(cin >> ws, file_name);
		
	ofstream fout(".data/" + file_name + ".txt");
		
	if (fout) {
		fout << group.size() << endl;
		for (const auto& s : group)
			fout << *s;
		cout << "������ ������� ���������!" << endl;
	}
	else
		cout << "�� ������� ������� ����!" << endl;
}

void SportsmansGroup::Load()
{
	string file_name;
	cout << endl << "������� �������� �����: ";
	getline(cin >> ws, file_name);
	
	ifstream fin(".data/" + file_name + ".txt");
	if (fin) {
		int num_s;
		Clear();
		
		fin >> num_s;
		for (int i = 0; i < num_s; i++) {
			shared_ptr<Sportsman> s = make_shared<Sportsman>();
			fin >> *s;
			group.push_back(s);
		}
	
		cout << "������ ������� �������!" << endl;
	}
	else
		cout << "�� ������� ������� ����!" << endl;
}

void SportsmansGroup::Clear()
{
	Sportsman::ResetMaxID();
	group.clear();
}

SportsmansGroup::~SportsmansGroup(){
	Clear();
}


