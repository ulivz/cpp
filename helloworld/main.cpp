//
//  main.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include "sizeof.hpp"
#include "function.hpp"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Xcode shortcut
// Command + option + [: move current line up
// Command + option + ]: move current line down
// Command + R         : Run APP

extern int a, b;
extern int c;
extern float f;

int main(int argc, const char * argv[]) {
    
    // 1. sizeof
    sizeof_func();
    
    // Part.2 'typedef' Operator
    typedef char char2;
    
    // This following usage will throw a warning:
    // ISO C++11 does not allow conversion from string literal to 'char *'
    // char* str1 = "hello world\n";
    char const* name = "ULIVZ";
    cout << name << endl;
    
    // Part.3 'enum'
    enum color { red, green, blue } my_color;
    my_color = blue;
    cout << my_color << endl;
    
    
    // Part.4 Variable
    int a, b;
    int c;
    float f;
    
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
    
    f = c/2.55;
    cout << f << endl;
    
    
    // Part.5 Function
    cout << hello_world() << endl;
    cout << math_min(1, 2) << endl;
    
    return 0;
}




