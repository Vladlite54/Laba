//Source.cpp
#include <iostream>
#include <fstream>
#include "MyString.cpp"
#include "SPString.cpp"
#include "StatString.cpp"
#include "stack.cpp"

using namespace std;

void stacktest()
{
    stack st;
    st.pop();
    // MyString str1 = "Hello";
    // cout << "First string: ";
    // str1.Print();
    // StatString str2("World", 2);
    // cout << "Second string: ";
    // str2.Print();
    // SPString str3 = "Testing ";
    // cout << "Third string: ";
    // str3.Print();
    // cout << endl;
    // cout << "Pushing second string, stack.top: " << endl;
    // st.push(&str2);
    // st.top()->Print();
    // cout << "Pushing first string, stack.top: " << endl;
    // st.push(&str1);
    // cout << endl;
    // st.top()->Print();
    // cout << "Pushing third string, stack.top: " << endl;
    // st.push(&str3);
    // st.top()->Print();
    // cout << "Poping from stack, stack.top: " << endl;
    // st.pop();
    // st.top()->Print();
    // cout << "Pushing third string, stack.top: " << endl;
    // st.push(&str3);
    // st.top()->Print();
    // cout << "////////" << endl;
    // st.print();
    // cout << "//////////" << endl;

}

int main() {
    try {
        stacktest();
    }
    catch(StackEx &ex) {
        cout << "Error: "; ex.ShowInfo(); cout << endl;
    }
    catch(bad_alloc &ba) {
        cout << "Memory error: " << ba.what() << endl;
    }
    catch(...) {
        cout << "Something happened" << endl;
    }

    return 0;
}