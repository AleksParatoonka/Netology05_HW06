#include "Counter.h"
#include <iostream>

void Counter::print_count() {
    std::cout << "Count: " << count << std::endl;
}
void Counter::increment() {
    this->count += 1;
}
void Counter::decrement() {
    this->count -= 1;
}
