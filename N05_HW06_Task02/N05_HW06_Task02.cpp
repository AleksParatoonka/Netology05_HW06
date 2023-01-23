// N05_HW06_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Counter.h"
#include <windows.h>

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string input;
    int start = 1;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> input;

    if (input == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> start;
    }
    Counter counter(start);

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
        std::cin >> input;
        if (input == "+") {
            counter.increment();

        }
        if (input == "-") {
            counter.decrement();

        }
        if (input == "=") {
            counter.print_count();
        }
    } while (input != "х");

    std::cout << "До свидания!";
}