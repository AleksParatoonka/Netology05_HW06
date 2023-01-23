#include <cmath>
#include "math_functions.h" 


int addition(int x, int y) {
    return x + y;
}
int subtraction(int x, int y) {
    return x - y;
}
int multyplication(int x, int y) {
    return x * y;
}
double division(int x, int y) {
    return static_cast<double>(x) / y;
}
int exponentiation(int x, int y) {
    return pow(x, y);
}