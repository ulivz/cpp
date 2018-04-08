#include "../include/function.hpp"

char* hello_world() {
    char* str = "Hello World";
    return str;
}

int count(int a, int b) {
    return a + b;
}

int math_min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}
