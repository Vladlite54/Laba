#ifndef STACK_H
#define STACK_H
#include "MyString.h"

#pragma once

class stack
{
public:
	stack();
	~stack();
	MyString* top();
	void print(); // For debug
	void push(MyString* str);
	void pop();
	int GetSize();
	bool empty();
private:
	struct Node
	{
		MyString* ref;
		Node* next;
		Node() { ref = nullptr; next = nullptr; }
		Node(MyString* str):Node() { ref = str; }
		Node(MyString* str, Node* next):Node(str) { this->next = next; }
	};
	Node* head;
	int size;
};

#endif