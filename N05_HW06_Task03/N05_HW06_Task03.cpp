// N05_HW06_Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"

#include "Triangle.h"
#include "Square_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"

#include "Poly.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Square.h"
#include "Rhombus.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Shape shape;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Square_Triangle square_triangle1(10, 20, 30, 50, 60);
    Square_Triangle square_triangle2(10, 20, 30, 50, 40);
    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_Triangle equilateral_triangle(30);

    Poly poly(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rect rectangle(10, 20);
    Square square(20);
    Rhombus rhombus(30, 30, 40);

    shape.print_about();
    std::cout << std::endl;
    triangle.print_about();
    std::cout << std::endl;
    square_triangle1.print_about();
    std::cout << std::endl;
    square_triangle2.print_about();
    std::cout << std::endl;
    isosceles_triangle.print_about();
    std::cout << std::endl;
    equilateral_triangle.print_about();
    std::cout << std::endl;

    std::cout << std::endl;

    poly.print_about();
    std::cout << std::endl;
    rectangle.print_about();
    std::cout << std::endl;
    square.print_about();
    std::cout << std::endl;
    parallelogram.print_about();
    std::cout << std::endl;
    rhombus.print_about();
    std::cout << std::endl;
}