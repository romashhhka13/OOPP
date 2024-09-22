#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <format>


template <typename T>
T GetCorrectNumber(T min, T max)
{
    T x;
    while ((std::cin >> x).fail() || std::cin.peek() != '\n' || x < min || x > max)
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << std::format("Введите коректное число ({} - {}): ", min, max);
    }
    return x;
}


int ChooseActionMenu(std::vector<std::string>& menu, bool with_exit = true,
    std::string action_text = "Выберете действие: ");