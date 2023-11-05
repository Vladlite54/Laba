#include "SPString.h"

SPString::SPString(const char *str):MyString(str)
{
    infoLen = strlen(str);
    info = new int[infoLen];
    for (size_t i = 0; i < strlen(str); i++){
        info[i] = (int)str[i];
    }
}

void SPString::Print()
{
    ::MyString::Print();
    for (int i = 0; i < length; i++){
        cout << (int)str[i] << " ";
    }
    cout << endl;
}
