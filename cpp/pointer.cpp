//
//  pointer.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include <iostream>
#include "pointer.hpp"

using namespace std;

void my_pointer1() {
    unsigned char a = 1;
    unsigned char* b = &a;
    
    printf("%d\n", *b);
//    cout << *b << endl; // Why cannot print out 1?
//    cout << &a << endl;
}


