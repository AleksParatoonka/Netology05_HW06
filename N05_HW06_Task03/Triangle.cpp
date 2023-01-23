#include "Triangle.h"
#include <iostream>

double Triangle::get_edge(char x) {
    switch (x) {
    case 'a':
        return edge_a;
    case 'b':
        return edge_b;
    case 'c':
        return edge_c;
    }
}
double Triangle::get_angle(char x) {
    switch (x) {
    case 'a':
        return angle_a;
    case 'b':
        return angle_b;
    case 'c':
        return angle_c;
    }
}
bool Triangle::is_shape_ideal()  {
    if (edges == 3 && (angle_a + angle_b + angle_c) == 180) {
        return true;
    }
    else {
        return false;
    }
}
void Triangle::print_about()  {
    Shape::print_about();
    std::cout << "Стороны: a= " << edge_a << " b=" << edge_b << " c=" << edge_c << std::endl;
    std::cout << "Углы: A=" << angle_a << " B=" << angle_b << " C=" << angle_c << std::endl;
}
