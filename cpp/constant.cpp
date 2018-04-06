//
//  constant.cpp
//  helloworld
//
//  Created by ULIVZ on 4/6/18.
//  Copyright © 2018 ULIVZ. All rights reserved.
//

#include <iostream>
#include "constant.hpp"

using namespace std;

////////////////////////////////////////////
// Integer Constant
// 212
// 215u    ('u' means 'unsigned')
// 0xFeeL  ('L' means 'long')
// 078     invalid, 8 is not a otcal number.
// 032UU   invalid, duplicate suffix.

// 85      Decimal(10)
// 0213    Otcal(8)
// 0x4b    Hexadecmical(16)
// 30
// 30u
// 30l
// 20ul
//
//
////////////////////////////////////////////
// Float Constant
// 3.14159
// 3.14149E-5L
// 510E             // invalid, uncompleted index 'E'
// 210f             // invalid, index or demical not found!
// .e55             // invalid, no integer or demical
//
//
////////////////////////////////////////////
// Boolean Constant
// true
// false
//
//
////////////////////////////////////////////
// Character Constant
// \\ \
// \' '
// \" "
// etc.
//
////////////////////////////////////////////
// String Constant




void my_constant() {
    int my_int1     = 1994;
    int my_int2     = 0x12;
    int my_int3     = 0123;
    float my_float1 = 3.14159;
    bool my_bool1   = true;
    bool my_bool2   = false;
    
    cout
    << my_int1   << '\t'
    << my_int2   << '\t'
    << my_int3   << '\t'
    << my_float1 << '\t'
    << my_bool1  << '\t' // will log 1, why?
    << my_bool2  << '\t' // will log 0, why?
    
    << endl;
}





