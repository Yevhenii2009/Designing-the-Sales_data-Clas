#pragma once

#include <iostream>
#include <limits>

template<typename T>
void inputValue(T& value)
{
    while (!(std::cin >> value))
    {
        std::cout << "Invalid input! Try again: ";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}