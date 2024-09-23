#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Addition.h"
#include "Sportsman.h"
#include "SportsmansGroup.h"
#include "Footballer.h"
#include "Menu.h"


using namespace std;
using namespace boost::archive;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    /*Sportsman s;
    s.Input();

    ofstream fout(".data/test.txt");
    text_oarchive oa(fout);
    oa << s;*/

    /*ifstream fin(".data/test.txt");
    text_iarchive ia(fin);
    ia >> s;*/

    //s.Output();


    vector<string> menu = { "Добавить спорстмена", "Добавить футболиста",
        "Показать всех спортсменов", "Сохранить в файл",
        "Загрузить из файла", "Очистить" };

    SportsmansGroup SportsSchool;

    while (1)
    {
        switch (ChooseActionMenu(menu))
        {
        case 1:
        {
            MenuAddSportsman(SportsSchool);
            break;
        }
        case 2:
        {
            MenuAddFootballer(SportsSchool);
            break;
        }
        case 3:
        {
            MenuShowSportsmans(SportsSchool);
            break;
        }
        case 4:
        {
            MenuSave(SportsSchool);
            break;
        }
        case 5:
        {
            MenuLoad(SportsSchool);
            break;
        }
        case 6:
        {
            MenuClear(SportsSchool);
            break;
        }
        case 0:
        {
            return 0;
        }
        default:
        {
            cout << "Неправильное действие" << endl;
        }
        }
    }
}


