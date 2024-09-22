#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Addition.h"
#include "Sportsman.h"
#include "SportsmansGroup.h"
#include "Footballer.h"


using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<string> menu = { "Добавить спорстмена", "Добавить футболиста",
        "Показать всех спортсменов", "Сохранить в файл",
        "Загрузить из файла", "Очистить" };

    SportsmansGroup SportsSchool;

    while (1)
    {
        switch (ChooseActionMenu(menu, true))
        {
        case 1:
        {
            SportsSchool.AddSportsman();
            break;
        }
        case 2:
        {
            /*Footballer f_player;
            f_player.GetID();*/
            break;
        }
        case 3:
        {
            SportsSchool.ShowSportsmans();
            break;
        }
        case 4:
        {
            SportsSchool.Save();
            break;
        }
        case 5:
        {
            SportsSchool.Load();
            break;
        }
        case 6:
        {
            SportsSchool.Clear();
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


