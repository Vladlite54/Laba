#include "SPString.h"

void SPString::WriteInfo(const char *str) {
    this->infoLen = strlen(str);
    this->info = new int[this->infoLen];
    for (int i = 0; i < infoLen; i++){
        this->info[i] = (int)str[i];
    }
}

SPString::SPString() : MyString() {
    info = nullptr; infoLen = 0;
}

SPString::SPString(const char *str) : MyString(str) {
    this->WriteInfo(str);
}

SPString::SPString(const SPString &other):MyString(other) {
    MyString temp = other;

    this->WriteInfo(temp.GetStr());
}

SPString::~SPString() {
    delete[] info;
}

void SPString::Print() {
    ::MyString::Print();
    for (int i = 0; i < infoLen; i++){
        cout << info[i] << " ";
    }
    cout << endl;
}

SPString &SPString::operator=(const SPString &other) {
    ::MyString::operator=(other);
    SPString temp = other;
    delete[] this->info;
    this->WriteInfo(temp.GetStr());
    return *this;

}

SPString SPString::operator+(const MyString &other) {
    MyString temp = ::MyString::operator+(other);
    SPString ntemp(temp.GetStr());
    ntemp.infoLen = temp.Length();
    ntemp.info = new int[ntemp.infoLen];
    ntemp.WriteInfo(ntemp.GetStr());
    return ntemp;
}

MyString &SPString::operator+=(const MyString &other) {
    ::MyString::operator+=(other);
    MyString temp(*this);
    delete[] this->info;
    this->WriteInfo(temp.GetStr());
    return *this;

}

MyString &SPString::operator++() {
    ::MyString::operator++();
    MyString temp(*this);
    delete[] this->info;
    this->WriteInfo(temp.GetStr());
    return *this;
}

MyString SPString::operator++(int xd) {
    SPString posttemp(*this);
	++*this;
	return posttemp;
}

MyString &SPString::Insert(int index, const MyString &other) {
    ::MyString::Insert(index, other);
    MyString temp = *this;
    this->WriteInfo(temp.GetStr());
    return *this;
}

MyString &SPString::Erase(const MyString &other) {
    ::MyString::Erase(other);
    MyString temp = *this;
    this->WriteInfo(temp.GetStr());
    return *this;
}

MyString &SPString::ConcatWith(const MyString &other) {
    ::MyString::ConcatWith(other);
    MyString temp = *this;
    this->WriteInfo(temp.GetStr());
    return *this;
}
