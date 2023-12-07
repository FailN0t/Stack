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
	List_struct() {
		for (size_t i = 0; i < count; i++)
		{
			addElement(3);
		}
	}
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
		
		for (size_t i = 0; i < index; i++)
		{
			move = move->next;
		}
		return move->data;
	}
private:
	Node& operator[](int index) {
		Node* move = Head;
		if (index < 0 || index > count || count == -1) {
			throw exception("Out of range");
		}

		for (size_t i = 0; i < index; i++)
		{
			move = move->next;
		}
		return move;
	}
	friend myList;
};

template<class T>
class myList {
	List_struct<T> list();
	List_struct::Node* move2 = list[0]
public:
	void print() {
		cout << move2->data << endl;
	}
};