//
//  modifiers.cpp
//  helloworld
//
//  Created by ULIVZ on 4/8/18.
//  Copyright © ULIVZ. All rights reserved.
//

#include <iostream>
#include "../include/modifiers.hpp"

using namespace std;

// const
// volatile
// restrict
// explicit

int my_modifiers() {
    short int i;
    short unsigned int j;

    j = 50000;
    i = j;

    cout << i << " " << j;
    return 0;
    // -15536 50000
    // 不是很明白 ...
}
