#include "stack.cpp"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    stack<int> st;
    int a = 254;
    int b = 912;
    int c = 483;
    int d = 742;
    int e = 123;
    int f = 843;
    int g = 765;
    int h = 645;
    int i = 654;
    int j = 768;
    int k = 255;
    st.push(&a);
    cout << "Pushing first element, st.top: " << *st.top() << endl;
    st.push(&b);
    cout << "Pushing second element, st.top: " << *st.top() << endl;
    st.push(&c);
    cout << "Pushing third element, st.top: " << *st.top() << endl;
    // st.pop();
    cout << "Poping element, st.top: " << *st.top() << endl;
    st.push(&d);
    cout << "Pushing fourth element, st.top: " << *st.top() << endl;
    st.push(&e);
    st.push(&f);
    st.push(&g);
    st.push(&h);
    st.push(&i);
    st.push(&j);
    st.push(&k);
    st.print();
    return 0;
}