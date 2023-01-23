#pragma once

#include <iostream>

class Shape
{
protected:
    int edges;
    std::string name;
public:
    Shape() {
        name = "Фигура";
        edges = 0;
    }
    Shape(int a) {
        edges = a;
        //name = "Неизвестно";
    }
    int get_edges();
    virtual void print_info();
};

