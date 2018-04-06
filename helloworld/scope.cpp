//
//  scope.cpp
//  helloworld
//
//  Created by Chen, Luke(AWF) on 4/6/18.
//  Copyright © 2018 Chen, Luke(AWF). All rights reserved.
//

#include <iostream>
#include "scope.hpp"

using namespace std;

// Global varible.
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




