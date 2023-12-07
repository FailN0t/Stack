#pragma once
#include "Stack.h"
template<class T>
class List_struct {
	struct Node {
		T data;
		Node* next;//”казатель на следующий элемент
	};

	Node* Head = nullptr;
	Node* Tail = nullptr;
	int count = -1;

public:
	//добавление элемента
	void addElement(T data) {
		Node* newElement = new Node;//создаем новый динамический элемент

		newElement->data = data;
		//if(cout == -1)
		if (Head == nullptr) {
			Tail = Head = newElement;
		}
		else {
			Tail -> next = newElement;
			Tail = newElement;
		}
		Tail->next = nullptr;
		count++;
	}

	void printList() {
		Node* move = Head;
		for (size_t i = 0; i <= count; i++)
		{
			cout << move->data << ", ";
			move = move->next;
		}
		cout << endl;
	}

	int operator[](int index) {
		Node* move = Head;
		if (index < 0 || index > count || count == -1) {
			throw exception("Out of range");
		}
		return 0;
	}
};