#include "Sportsman.h"


using namespace std;


int Sportsman::max_id = 1;


//istream& operator>>(istream& in, Sportsman& s){
//    cout << "Фамилия: ";
//    getline(in >> ws, s.surname);
//
//    cout << "Имя: ";
//    getline(in >> ws, s.name);
//
//    cout << "Возраст: ";
//    s.age = GetCorrectNumber(1, 100, in);
//
//    cout << "Рост: ";
//    s.height = GetCorrectNumber(1, 300, in);
//
//    return in;
//}
//
//ostream& operator<<(ostream& out, const Sportsman& s){
//    char symbol = 149; // marker
//    out << "Информация о спортмене #" << s.id << endl
//        << symbol << "Фамилия: " << s.surname << endl
//        << symbol << "Имя: " << s.name << endl
//        << symbol << "Возраст: " << s.age << endl
//        << symbol << "Рост спортмена: " << s.height << endl;
//
//    return out;
//}

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

int Sportsman::GetID(){
    return id;
}

void Sportsman::ResetMaxID(){
    max_id = 1;
}

void Sportsman::Input()
{
    cout << "Фамилия: ";
    getline(cin >> ws, surname);

    cout << "Имя: ";
    getline(cin >> ws, name);

    cout << "Возраст: ";
    age = GetCorrectNumber(1, 100);

    cout << "Рост: ";
    height = GetCorrectNumber(1, 300);

    //return in;
}

void Sportsman::Output()
{
    char symbol = 149; // marker
    cout << "Информация о спортмене #" << id << endl
        << symbol << "Фамилия: " << surname << endl
        << symbol << "Имя: " << name << endl
        << symbol << "Возраст: " << age << endl
        << symbol << "Рост спортмена: " << height << endl;

    //return out;
}

Sportsman::Sportsman(){
    id = max_id++;
}
