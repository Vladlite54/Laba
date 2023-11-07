//Source.cpp
#include <iostream>
#include <fstream>
#include "MyString.cpp"
#include "SPString.cpp"
#include "StatString.cpp"
#include "stack.cpp"

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
    MyString *s1 = new StatString;
    *s1 = "QwEr";
    StatString s2("Stata", 2);
    StatString s3(s2);
    cout << "s1 = ";
    s1->Print();
    cout << "s2 with status 2 = ";
    s2.Print();
    cout << "Copied by s2 s3 = ";
    s3.Print();
    cout << "Set status 3 to s3:" << endl;
    s3.SetStatus(3);
    s3.Print();
    delete s1;
}

void stacktest()
{
    stack st;
    MyString str1 = "Hello";
    cout << "First string: ";
    str1.Print();
    StatString str2("World", 2);
    cout << "Second string: ";
    str2.Print();
    SPString str3 = "Testing ";
    cout << "Third string: ";
    str3.Print();
    cout << endl;
    cout << "Pushing second string, stack.top: " << endl;
    st.push(&str2);
    st.top()->Print();
    cout << "Pushing first string, stack.top: " << endl;
    st.push(&str1);
    st.top()->Print();
    cout << "Pushing third string, stack.top: " << endl;
    st.push(&str3);
    st.top()->Print();
    cout << "Poping from stack, stack.top: " << endl;
    st.pop();
    st.top()->Print();
    cout << "Pushing third string, stack.top: " << endl;
    st.push(&str3);
    st.top()->Print();
}

int main() {
    /* SPStringTest();
    cout << endl;
    StatStringTest(); */
    stacktest();
    return 0;
}