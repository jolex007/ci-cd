#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int devide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Devide by zero");
    }
    return a / b;
}