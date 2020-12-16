#include<iostream>
#include"Stack.h"

template<class T>
Stack <T>::Stack()
{
	this->head = NULL;
	this->size = 0;
}

template<class T>
Stack <T>::~Stack()
{
	remove(this->head);
}

template<class T>
void Stack<T>::remove(Node* value)
{
	if (value->next) {
		remove(value->next);
	}

	delete value;
}

template<class T>
void Stack<T>::push(T value)
{
	Node* node = new Node();
	node->value = value;
	node->next = NULL;

	if (this->head == NULL) {
		this->head = node;
	}
	else {
		node->next = this->head;
		this->head = node;
	}

	this->size++;
}

template<class T>
void Stack<T>::pop()
{
	if (this->isEmpty()) {
		throw "Cannot pop element from empty stack!";
	}
	else {
		this->head = this->head->next;
		this->size--;

		if (this->isEmpty()) {
			this->head = NULL;
		}
	}
}

template<class T>
void Stack<T>::print()
{
	Node* nodeHead = this->head;

	while (nodeHead) {
		std::cout << nodeHead->value << " -> ";
		nodeHead = nodeHead->next;
	}
	std::cout << "End" << std::endl;
}

template<class T>
int Stack<T>::getSize() {
	return this->size;
}

template<class T>
bool Stack<T>::isEmpty()
{
	return this->head == NULL ? true : false;
}