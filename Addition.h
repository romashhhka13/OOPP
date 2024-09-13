#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <format>


template <typename T>
T GetCorrectNumber(T min, T max, std::istream& in = std::cin)
{
    T x;
    while ((in >> x).fail() || in.peek() != '\n' || x < min || x > max)
    {
        in.clear();
        in.ignore(10000, '\n');
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