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
        std::cout << std::format("¬ведите коректное число ({} - {}): ", min, max);
    }
    return x;
}

template <typename T>
bool ObjectsExist(const T& objects)
{
    if (objects.size() == 0) {
        return false;
    }
    return true;
}

int ChooseActionMenu(std::vector<std::string>& menu, bool with_exit);