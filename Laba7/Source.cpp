//Source.cpp
#include <iostream>
#include <fstream>
#include "MyString.h"
#include "stack.h"

using namespace std;

void stacktest()
{

}

int main() {
    
    stack<int> pt(3);
 
    int a = 1;
    int b = 2;
    int c = 3;
    //int d = 4;
    // MyString a = "Hello";
    // MyString b = "World";
    // MyString c = "!!!";
    pt.push(&a);
    pt.push(&b);
    pt.push(&c);
    //pt.push(&d);
   
    pt.print();
    pt.pop();
    pt.pop();
    
    cout << "The top element is " << pt.peek() << endl;
    cout << "The stack size is " << pt.size() << endl;
 
    pt.pop();

    return 0;
}