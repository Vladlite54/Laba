#pragma once

#ifndef STACK_H

#define STACK_H


template<typename T>
class stack
{
public:
	stack(size_t SIZE);
	~stack();
	void push(T *value);
	T pop();
	T peek();
	int size();
	void print();
	
private:
	T **arr;
	int top;
	int capacity;
};


template <typename T>
inline stack<T>::stack(size_t SIZE)
{
	capacity = SIZE;
	arr = new T*[SIZE];
	top = -1;
}

template <typename T>
inline stack<T>::~stack()
{
	
	delete[] arr;
}

template <typename T>
inline void stack<T>::push(T *value)
{
	if (top == capacity - 1){
		std::cout << "Stack overflow!" << endl;
		return;
	}

	T *temp = value;
	top += 1;
	arr[top] = temp;
	temp = nullptr;
}

template <typename T>
inline T stack<T>::pop()
{
    if (top == -1) {
		std::cout << "Stack is empty!" << endl;
		exit(EXIT_FAILURE);
	}

	return *arr[top--];
}

template <typename T>
inline T stack<T>::peek()
{
    if (top == -1) {
		std::cout << "Stack is empty!" << endl;
		exit(EXIT_FAILURE);
	}

	return *arr[top];
}

template <typename T>
inline int stack<T>::size()
{
    return top + 1;
}

template <typename T>
inline void stack<T>::print()
{
	for (int i = 0; i < this->size(); i++) {
		std::cout << *arr[i] << " "; 
	}
	std::cout << endl;
}

#endif