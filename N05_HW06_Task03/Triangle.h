#pragma once
#include "Shape.h"
#include <iostream>

class Triangle :
    public Shape
{
protected:
    double edge_a;
    double edge_b;
    double edge_c;

    double angle_a;
    double angle_b;
    double angle_c;

public:
    Triangle() :Shape(3) {}
    Triangle(double edge_a, double edge_b, double edge_c, double angle_a, double angle_b, double angle_c, std::string name) :Shape(3) {
        this->edge_a = edge_a;
        this->edge_b = edge_b;
        this->edge_c = edge_c;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
        this->name = name;
    }
    Triangle(double edge_a, double edge_b, double edge_c, double angle_a, double angle_b, double angle_c) :Shape(3) {
        this->edge_a = edge_a;
        this->edge_b = edge_b;
        this->edge_c = edge_c;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
        name = "Треугольник";
    }

    double get_edge(char x);
    double get_angle(char x);
    void print_info() override;
};

