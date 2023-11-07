#include "stack.h"

template<typename T>
int stack<T>::maxsize = 10;

template<typename T>
stack<T>::stack()
{
    st = nullptr;
    size = 0;
}

template<typename T>
stack<T>::~stack()
{
    delete[] st;
}

template <typename T>
void stack<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << i << ": " << *st[i] << endl;
    }
}

template <typename T>
void stack<T>::push(T* value)
{
    if (size + 1  > maxsize) 
    {
        cout << "Stack overflow" << endl;
        this->clear();
        return;
    }
    T* *temp = st;
    st = new T*[size + 1];
    st[0] = value;
    for (int i = 1; i <= size; i++)
    {
        st[i] = temp[i - 1];
    }
    size++;
}

template <typename T>
void stack<T>::pop()
{
    if (st == nullptr) return; // Need exception
    T** temp = st;
    st = new T*[size - 1];
    for (int i = 1; i < size; i++)
    {
        st[i - 1] = temp[i];
    }
    size--;
}

template <typename T>
T* stack<T>::top()
{
    if (st == nullptr) return nullptr; // Need exception
    return st[0];
}

template <typename T>
void stack<T>::clear()
{
    delete[] st;
    st = nullptr;
    size = 0;
}
