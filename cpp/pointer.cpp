//
//  pointer.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include "pointer.hpp"

using namespace std;

void my_pointer1() {
    unsigned char a = 1;
    unsigned char* b = &a;
    
//    printf("%d\n", a);
//    cout << *b << endl; // Why cannot print out 1?
//    printf("%d\n", *b);

//    cout << &a << endl;
    
    // Get a type of a variable.
//    cout << "a is of type: " << typeid(a).name() << endl; // h?
}

void my_pointer2() {
    unsigned int a = 257;
    unsigned int* b = &a;
    unsigned char* c = (unsigned char*)&a;
    
    // 257 -> [1 00000001]
    // int, 4Byte, 32bit.
    
    //   0x00      0x01     0x02     0x03
    // [00000000 00000000 00000001 00000001]
    
    // *b => 0x00, 0x01, 0x02, 0x03 => 257
    // *c => 0x03                   => 1
    
    printf("%d\n", *b); // 257
    printf("%d\n", *c); // 1
    
    cout
    << *b << "\t"            // 257
    << *c << "\t\n" << endl; // Why?
}



