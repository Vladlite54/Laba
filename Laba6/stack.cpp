#include "stack.h"

stack::stack()
{
	head = nullptr;
	size = 0;
}

stack::~stack()
{
	if (this->head != nullptr)
	{
		Node *current = this->head;
		Node *prev = current;
		while (current->next != nullptr) 
		{
			prev = current;
			current = current->next;
			delete prev;
		}
		delete current;
	}
}

int stack::GetSize()
{
    return this->size;
}

bool stack::empty()
{
   if (this->head == nullptr) return true;
   else return false;
}

MyString* stack::top()
{
	return this->head->ref;
}

void stack::print()
{
	if (this->head == nullptr) return; //need exception
	Node *current = this->head;
	while (current->next != nullptr)
	{
		//cout << *current->ref;
		head->ref->Print();
		current = current->next;
	}
	current->ref->Print();
}

void stack::push(MyString* str)
{
	if (head == nullptr) this->head = new Node(str);
	else this->head = new Node(str, this->head);

	size++;
}

void stack::pop()
{
	if (head == nullptr) return; // need exception
	else
	{
		Node* temp = this->head;
		this->head = this->head->next;
		delete temp;
	}
}

StackEx::StackEx() {
	this->info = "No info";
}

StackEx::StackEx(MyString info) {
	this->info = info;
}

void StackEx::ShowInfo() {
	cout << this->info << endl;
}
