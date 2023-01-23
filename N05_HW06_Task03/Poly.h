#pragma once
#include "Shape.h"
class Poly :
    public Shape
{
    protected:
        double edge_a;
        double edge_b;
        double edge_c;
        double edge_d;

        double angle_a;
        double angle_b;
        double angle_c;
        double angle_d;
    public:
        Poly(double edge_a, double edge_b, double edge_c, double edge_d, double angle_a, double angle_b, double angle_c, double angle_d, std::string name) :Shape(4) {
            this->edge_a = edge_a;
            this->edge_b = edge_b;
            this->edge_c = edge_c;
            this->edge_d = edge_d;
            this->angle_a = angle_a;
            this->angle_b = angle_b;
            this->angle_c = angle_c;
            this->angle_d = angle_d;
            this->name = name;
        }
        Poly(double edge_a, double edge_b, double edge_c, double edge_d, double angle_a, double angle_b, double angle_c, double angle_d) :Shape(4) {
            this->edge_a = edge_a;
            this->edge_b = edge_b;
            this->edge_c = edge_c;
            this->edge_d = edge_d;
            this->angle_a = angle_a;
            this->angle_b = angle_b;
            this->angle_c = angle_c;
            this->angle_d = angle_d;
            name = "Четырёхугольник";
        }
        double get_edge(char x);
        double get_angle(char x);


        void print_info() override;
};

