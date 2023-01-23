#pragma once
class Counter
{
public:

    int count;
    Counter(int x) {
        count = x;
    }

    void print_count();
    void increment();
    void decrement();
};

