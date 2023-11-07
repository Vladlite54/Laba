//Source.cpp
#include <iostream>
#include <fstream>
#include "MyString.h"
#include "SPString.h"
#include "StatString.h"

using namespace std;

void SPStringTest() {
    cout << "Class: Special string/SPString" << endl;
    SPString s1 = "Abc";
    SPString s2 = "Bcde";
    cout << "s1 = ";
    s1.Print();
    cout << "s2 = ";
    s2.Print();
    SPString res = s1 + s2;
    cout << "res = s1 + s2 = ";
    res.Print();
}

void StatStringTest(){
    cout << "Class: Status string/StatString" << endl;
    StatString s1;
    s1 = "QwEr";
    StatString s2("Stata", 2);
    StatString s3(s2);
    cout << "s1 = ";
    s1.Print();
    cout << "s2 with status 2 = ";
    s2.Print();
    cout << "Copied by s2 s3 = ";
    s3.Print();
    cout << "Set status 3 to s3:" << endl;
    s3.SetStatus(3);
    s3.Print();
}

int main() {
    SPStringTest();
    cout << endl;
    StatStringTest();
    return 0;
}