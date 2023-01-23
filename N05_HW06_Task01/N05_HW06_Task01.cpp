// N05_HW06_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math_functions.h" 


int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y, z;
    std::cout << "������� ������ ����� : " ;
    std::cin >> x;
    std::cout << "������� ������ ����� : " ;
    std::cin >> y;
    std::cout << "�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : " ;
    std::cin >> z;
    
    switch (z) {
    case 1:
        std::cout << x << " ���� "<< y << " ����� "<< addition(x, y) << std::endl;
        break;
    case 2:
        std::cout << x << " ����� " << y << " ����� " << subtraction(x, y) << std::endl;
        break;
    case 3:
        std::cout << x << " �������� �� " << y << " ����� " << multyplication(x, y) << std::endl;
        break;
    case 4:
        std::cout << x << " ��������� �� " << y << " ����� " << division(x, y) << std::endl;
        break;
    case 5:
        std::cout << x << " � ������� " << y << " ����� " << exponentiation(x, y) << std::endl;
        break;
    default:
        std::cout << "������������ ����� ��������" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
