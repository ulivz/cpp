//
//  datatypes.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include "../include/datatypes.hpp"

#include <iostream>

using namespace std;

void my_char_func() {
    // This following usage will throw a warning:
    // ISO C++11 does not allow conversion from string literal to 'char *'
    // char* str1 = "hello world\n";
    
    // Using a customized type 'char2'.
    typedef char char2;
    char2 const* name = "ULIVZ";
    cout << name << endl;
}

void my_enum_func() {
    // Quick question: How to get the type of a value?
    enum color { red, green, blue } my_color;
    my_color = blue;
    cout << my_color << endl;
}

void my_num_func() {
    int a, b;
    int c;
    float f;
    
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
    
    f = c/2.55;
    cout << f << endl;
}
