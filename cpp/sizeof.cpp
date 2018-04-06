//
//  sizeof.cpp
//  helloworld
//
//  Created by Chen, Luke(AWF) on 4/6/18.
//  Copyright © 2018 Chen, Luke(AWF). All rights reserved.
//

#include <iostream>
#include <limits>
#include <string>
#include "sizeof.hpp"

using namespace std;

void sizeof_func() {
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
    
    // wchar_t: Wide character constants
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
}
