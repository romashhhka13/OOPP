#include "SportsmansGroup.h"


using namespace std;


void SportsmansGroup::AddSportsman(){
	cout << endl << "***Введите информацию о спортсмене***" << endl;
	Sportsman* s = new Sportsman;
	cin >> *s;
	group.push_back(s);
}

void SportsmansGroup::ShowSportsmans()
{
	cout << endl << "***Спортсмены***" << endl;
	if (ObjectsExist(group)) {
		for (const auto& s: group)
			cout << *s;
	}
	else
		cout << "Спортсмены не найдены!" << endl;
}

void SportsmansGroup::Save()
{
	string file_name;
	cout << endl << "Введите название файла: ";
	getline(cin >> ws, file_name);
		
	ofstream fout(".data/" + file_name + ".txt");
		
	if (fout) {
		fout << group.size() << endl;
		for (const auto& s : group)
			fout << *s;
		cout << "Данные успешно сохранены!" << endl;
	}
	else
		cout << "Не удалось открыть файл!" << endl;
}

void SportsmansGroup::Load()
{
	string file_name;
	cout << endl << "Введите название файла: ";
	getline(cin >> ws, file_name);
	
	ifstream fin(".data/" + file_name + ".txt");
	if (fin) {
		int num_s;
		Clear();
		
		fin >> num_s;
		for (int i = 0; i < num_s; i++) {
			Sportsman* s = new Sportsman;
			fin >> *s;
			group.push_back(s);
		}
	
		cout << "Данные успешно считаны!" << endl;
	}
	else
		cout << "Не удалось открыть файл!" << endl;
}

void SportsmansGroup::Clear()
{
	Sportsman::ResetMaxID();
	for (auto s : group)
		delete s;
	group.clear();
}

SportsmansGroup::~SportsmansGroup(){
	Clear();
}


