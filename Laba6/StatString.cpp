#include "StatString.h"

StatString::StatString() : MyString() {
    this->status = 0;
}

StatString::StatString(const char *str) : MyString(str) {
    this->status = 0;
}

StatString::StatString(const char *str, int status) : MyString(str) {
    this->status = status;
}

StatString::StatString(const StatString &other) : MyString(other) {
    this->status = other.status;
}

void StatString::Print() {
    ::MyString::Print();
    cout << "Status: " << this->status << endl;
}

void StatString::SetStatus(int status) {
    this->status = status;
}
