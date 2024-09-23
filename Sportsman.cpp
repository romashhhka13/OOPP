#include "Sportsman.h"


using namespace std;


int Sportsman::max_id = 1;


BOOST_CLASS_VERSION(Sportsman, 1)

ifstream& operator>>(std::ifstream& fin, Sportsman& s)
{
    fin >> s.id;
    getline(fin >> ws, s.surname);
    getline(fin >> ws, s.name);
    fin >> s.age;
    fin >> s.height;

    if (s.id >= s.max_id)
        s.max_id = s.id + 1;

    return fin;
}

std::ofstream& operator<<(std::ofstream& fout, const Sportsman& s){
    fout << s.id << endl
        << s.surname << endl
        << s.name << endl
        << s.age << endl
        << s.height << endl;

    return fout;
}

void Sportsman::ResetMaxID() {
    max_id = 1;
}

int Sportsman::GetID() const{
    return id;
}

void Sportsman::Input()
{
    cout << "�������: ";
    getline(cin >> ws, surname);

    cout << "���: ";
    getline(cin >> ws, name);

    cout << "�������: ";
    age = GetCorrectNumber(1, 100);

    cout << "����: ";
    height = GetCorrectNumber(1, 300);
}

void Sportsman::Output() const
{
    char symbol = 149; // marker
    cout << "���������� � ��������� #" << id << endl
        << symbol << "�������: " << surname << endl
        << symbol << "���: " << name << endl
        << symbol << "�������: " << age << endl
        << symbol << "���� ���������: " << height << endl;
}

Sportsman::Sportsman(){
    id = max_id++;
}
