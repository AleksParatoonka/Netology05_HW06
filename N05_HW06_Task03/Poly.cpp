#include "Poly.h"
#include <iostream>

double Poly::get_edge(char x) {
    switch (x) {
    case 'a':
        return edge_a;
    case 'b':
        return edge_b;
    case 'c':
        return edge_c;
    case 'd':
        return edge_d;
    }
}
double Poly::get_angle(char x) {
    switch (x) {
    case 'a':
        return angle_a;
    case 'b':
        return angle_b;
    case 'c':
        return angle_c;
    case 'd':
        return angle_d;
    }
}
bool Poly::is_shape_ideal(){
    if (edges == 4 && (angle_a + angle_b + angle_c + angle_d) == 360) {
        return true;
    }
    else {
        return false;
    }
}

void Poly::print_about(){
    Shape::print_about();
    std::cout << "Стороны: a= " << edge_a << " b=" << edge_b << " c=" << edge_c << " d=" << edge_d << std::endl;
    std::cout << "Углы: A=" << angle_a << " B=" << angle_b << " C=" << angle_c << " D=" << angle_d << std::endl;
}
