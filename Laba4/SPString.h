#include "MyString.h"

class SPString : public MyString
{
private:
    int* info;
    int infoLen;
public:
    SPString(): MyString(){info = nullptr; infoLen = 0;}
    SPString(const char* str);
    ~SPString() override {delete[] info;}
    void Print() override;
};


