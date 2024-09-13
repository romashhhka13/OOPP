#include "Sportsman.h"


using namespace std;


int Sportsman::max_id = 1;


istream& operator>>(istream& in, Sportsman& s){
    cout << "�������: ";
    getline(in >> ws, s.surname);

    cout << "���: ";
    getline(in >> ws, s.name);

    cout << "�������: ";
    s.age = GetCorrectNumber(1, 100, in);

    cout << "���: ";
    s.weight = GetCorrectNumber(1, 300, in);

    return in;
}

ostream& operator<<(ostream& out, const Sportsman& s){
    char symbol = 149; // marker
    out << "���������� � ��������� #" << s.id << endl
        << symbol << "�������: " << s.surname << endl
        << symbol << "���: " << s.name << endl
        << symbol << "�������: " << s.age << endl
        << symbol << "��� ���������: " << s.weight << endl;

    return out;
}

ifstream& operator>>(std::ifstream& fin, Sportsman& s)
{
    fin >> s.id;
    getline(fin >> ws, s.surname);
    getline(fin >> ws, s.name);
    fin >> s.age;
    fin >> s.weight;

    if (s.id >= s.max_id)
        s.max_id = s.id + 1;

    return fin;
}

std::ofstream& operator<<(std::ofstream& fout, const Sportsman& s){
    fout << s.id << endl
        << s.surname << endl
        << s.name << endl
        << s.age << endl
        << s.weight << endl;

    return fout;
}

int Sportsman::GetID(){
    return id;
}

void Sportsman::ResetMaxID(){
    max_id = 1;
}

Sportsman::Sportsman(){
    id = max_id++;
}
