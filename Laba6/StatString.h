#pragma once
#include "MyString.h"
//Status string
class StatString : public MyString 
{
private:
    int status;
public:
    StatString();
    StatString(const char* str);
    StatString(const char* str, int status);
    StatString(const StatString& other);
    void Print() override;
    void SetStatus(int status);

};