//
//  main.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Xcode shortcut
// Command + option + [: move current line up
// Command + option + ]: move current line down
// Command + R         : Run APP



int main(int argc, const char * argv[]) {
    // std is the namespace1
    cout << "Hello, World!\n";
    cout << "Welcoment to ULIVZ's CPP world.\n\n";
    
    // Part.1 'sizeof' Operator
    
    cout << "type: \t\t" << "=============== size =================" << endl;
    
    cout << "bool: \t\t" << "sizeof：" << sizeof(bool);
    cout << "\t Maximum: " << (numeric_limits<bool>::max)();
    cout << "\t Minimum: " << (numeric_limits<bool>::min)() << endl;
    
    cout << "char: \t\t" << "sizeof：" << sizeof(char);
    cout << "\t Minimum: " << (numeric_limits<char>::min)();
    cout << "\t Minimum: " << (numeric_limits<char>::min)() << endl;
    
    cout << "signed char: \t\t" << "sizeof：" << sizeof(signed char);
    cout << "\t Minimum: " << (numeric_limits<signed char>::min)();
    cout << "\t Minimum: " << (numeric_limits<signed char>::min)() << endl;
    
    cout << "wchar_t: \t\t" << "sizeof：" << sizeof(wchar_t);
    cout << "\t Minimum: " << (numeric_limits<wchar_t>::min)();
    cout << "\t Minimum: " << (numeric_limits<wchar_t>::min)() << endl;
    
    cout << "short: \t\t" << "sizeof：" << sizeof(short);
    cout << "\t Minimum: " << (numeric_limits<short>::min)();
    cout << "\t Minimum: " << (numeric_limits<short>::min)() << endl;
    
    cout << "int: \t\t" << "sizeof：" << sizeof(int);
    cout << "\t Minimum: " << (numeric_limits<int>::min)();
    cout << "\t Minimum: " << (numeric_limits<int>::min)() << endl;
  
    cout << "unsigned: \t\t" << "sizeof：" << sizeof(unsigned);
    cout << "\t Minimum: " << (numeric_limits<unsigned>::min)();
    cout << "\t Minimum: " << (numeric_limits<unsigned>::min)() << endl;
    
    cout << "long: \t\t" << "sizeof：" << sizeof(long);
    cout << "\t Minimum: " << (numeric_limits<long>::min)();
    cout << "\t Minimum: " << (numeric_limits<long>::min)() << endl;
    
    cout << "unsigned long: \t\t" << "sizeof：" << sizeof(unsigned long);
    cout << "\t Minimum: " << (numeric_limits<unsigned long>::min)();
    cout << "\t Minimum: " << (numeric_limits<unsigned long>::min)() << endl;
    
    cout << "double: \t\t" << "sizeof：" << sizeof(double);
    cout << "\t Minimum: " << (numeric_limits<double>::min)();
    cout << "\t Minimum: " << (numeric_limits<double>::min)() << endl;
   
    cout << "long double: \t\t" << "sizeof：" << sizeof(long double);
    cout << "\t Minimum: " << (numeric_limits<long double>::min)();
    cout << "\t Minimum: " << (numeric_limits<long double>::min)() << endl;
    
    cout << "float: \t\t" << "sizeof：" << sizeof(float);
    cout << "\t Minimum: " << (numeric_limits<float>::min)();
    cout << "\t Minimum: " << (numeric_limits<float>::min)() << endl;
    
    cout << "size_t: \t\t" << "sizeof：" << sizeof(size_t);
    cout << "\t Minimum: " << (numeric_limits<size_t>::min)();
    cout << "\t Minimum: " << (numeric_limits<size_t>::min)() << endl;
    
    cout << "string: \t\t" << "sizeof：" << sizeof(string);
    cout << "\t Minimum: " << (numeric_limits<string>::min)();
    cout << "\t Minimum: " << (numeric_limits<string>::min)() << endl;
    
    
    // Part.2 'typedef' Operator
    typedef char char2;
    
    // This following usage will throw a warning:
    // ISO C++11 does not allow conversion from string literal to 'char *'
    // char* str1 = "hello world\n";
    char const* name = "ULIVZ";
    cout << name << endl;
    
    // Part.3 'enum'
    enum color { red, green, blue } c;
    c = blue;
    cout << c << endl;
    
    
    
    return 0;
}




