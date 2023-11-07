#ifndef STACK_H
#define STACK_H

#include <cstring>
#include <iostream>
using namespace std;
#pragma once


template<typename T>
class stack
{
public:
    stack();
    ~stack();
    void print(); // For debugging
    void push(T* value);
    void pop();
    T* top();
    void clear();
private:
    static int maxsize;
    T** st;
    int size;
};

#endif