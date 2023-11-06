#pragma once
#include "MyString.h"
//special string
class SPString : public MyString
{
private:
    int* info;
    int infoLen;
    void WriteInfo(const char* str);
public:
    SPString();
    SPString(const char* str);
    SPString(const SPString& other);
    ~SPString() override;
    void Print() override;
    SPString& operator=(const SPString& other);
    SPString operator+(const MyString& other);
    MyString& operator+=(const MyString& other) override;
    MyString& operator ++() override;
    MyString operator ++(int xd) override;
    MyString& Insert(int index, const MyString& other) override;
	MyString& Erase(const MyString& other) override;
	MyString& ConcatWith(const MyString& other) override;
};


