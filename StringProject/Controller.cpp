//
//  Controller.cpp
//  StringProject
//
//  Created by Marlor, Brandon on 2/2/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

Controller :: Controller()
{
    derpy = "derp derp derp";
    otherWords = "oh more words?";
}

void Controller :: start()
{
    numberMethods();
}

/*
 Test out the methods that use numbers on strings in C++
 */
void Controller :: numberMethods()
{
    int count = derpy.size();
    cout << "The number of letters in the derpy variable is: " << count <<endl;
    cout << "So, the size() method of string works like the length() method of Java on String" << endl;
    
    string temp = derpy.substr(3);
    cout << temp << endl;
}
 
/*
using namespace std;

int main ()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len ;
    
    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    
    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    
    // total length of str3 after concatentaion
    len = str3.size();
    cout << "str3.size() : " << len << endl;
    
    return 0;
}
*/
