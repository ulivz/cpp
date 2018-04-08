#include <iostream>
#include "../include/scope.hpp"

using namespace std;

// Global varible.
// Need to point out that cpp interpreter will initialize the
// global variable.

// int     - 0
// char    - '\0'
// float   - 0
// double  - 0
// pointer - NULL

// But local variables will not be initialized automatically. so
// you should init by yourself.

int g = 20;
int g2 = 20;

void my_scope_1() {
    // Local varible.
    int g = 10;
    cout << g << endl;
}

void my_scope_2() {
    // Use global varible directly.
    cout << g << endl;
}

void my_scope_3() {
    // Change global varible.
    g2 = 21;
}

void my_scope_4() {
    cout << g2 << endl;
}




