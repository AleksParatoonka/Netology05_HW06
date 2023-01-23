#include "Shape.h"
#include <iostream>

int Shape::get_edges() { return edges; }
bool Shape::is_shape_ideal() 
{
    if (edges == 0) {
        return true;
    }
    else {
        return false;
    }
}
void Shape::print_about() {
    std::cout << name << std::endl;
    if (is_shape_ideal() == 1) {
        std::cout << "����������" << std::endl;
    }
    else {
        std::cout << "������������" << std::endl;
    }
    std::cout << "� ������ " << edges << " ������" << std::endl;
}