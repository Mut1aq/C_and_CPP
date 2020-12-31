#pragma once
#include <iostream>
#include "DNode.h"
using namespace std;
template <class T>
class DLL
{
private:
	DNode<T>* head;
	DNode<T>* tail;
public:
	DLL();
	~DLL();
	T getHead();
	T getTail();
	DNode<T>* getHeadNode();
	DNode<T>* getTailNode();
	void change(T&);
	void clearAll();
	bool isEmpty();
	void print();
	void printReverse();
	bool search(T&);
	void addToHead(T&);
	void addToTail(T&);
	void deleteHead();
	void deleteTail();
	bool deleteDNode(T&);
	void insert(T&);
	void append(DLL<T>&);
	void mergeInOrder(DLL<T>&);
	bool isSorted();


};
template <class T>
DLL<T>::DLL()
{
	head = tail = NULL;
}
template <class T>
DLL<T>::~DLL()
{
	clearAll();
}
template <class T>
T DLL<T>::getHead()
{
	if (isEmpty())
	{
		exit(0);
	}
	return head->data;
}
template <class T>
T DLL<T>::getTail()
{
	if (isEmpty())
	{
		exit(0);
	}
	return tail->data;
}
template <class T>
DNode<T>* DLL<T>::getHeadNode()
{
	return head;
}
template <class T>
DNode<T>* DLL<T>::getTailNode()
{
	return tail;
}
template <class T>
void DLL<T>::change(T& key)
{
	head->data = key;
}
template <class T>
void DLL<T>::clearAll()
{
	DNode<T>* temp = NULL;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	head = tail = NULL;
}
template <class T>
bool DLL<T>::isEmpty()
{
	return head == tail;
}
template <class T>
void DLL<T>::print()
{
	DNode<T>* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}
template <class T>
void DLL<T>::printReverse()
{
	DNode<T>* temp = tail;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->previous;
	}
}
template <class T>
bool DLL<T>::search(T& key)
{
	DNode<T>* temp = head;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			return true;
		}
	}
	return false;
}
template <class T>
void DLL<T>::addToHead(T& value)
{
	DNode<T>* temp = new DNode<T>(value, head, NULL);
	if (head != NULL)
	{
		head->previous = temp;
	}
	head = temp;
	if (tail == NULL)
	{
		tail = temp;
	}
}
template <class T>
void DLL<T>::addToTail(T& value)
{
	DNode<T>* temp = new DNode<T>(value, NULL, tail);
	if (tail != NULL)
	{
		tail->next = temp;
	}
	tail = temp;
	if (head == NULL)
	{
		head = temp;
	}
}
template <class T>
void DLL<T>::deleteHead()
{
	if (isEmpty())
	{
		return;
	}
	DNode<T>* temp = head;
	if (head == tail)
	{
		head = tail = NULL;
	}
	else
	{
		head = head->next;
		head->previous = NULL;
		delete temp;
	}
}
template <class T>
void DLL<T>::deleteTail()
{
	if (isEmpty())
	{
		return;
	}
	DNode<T>* temp = tail;
	if (head == tail)
	{
		head = tail = NULL;
	}
	else
	{
		tail = tail->previous;
		tail->next = NULL;
	}
	delete temp;
}
template <class T>
bool DLL<T>::deleteDNode(T& value)
{
	if (isEmpty())
	{
		return false;
	}
	if (head->data == value)
	{
		deleteHead();
		return true;
	}
	if (tail->data == value)
	{
		deleteTail();
		return true;
	}
	DNode<T>* temp = head;
	while (temp != NULL)
	{
		if (temp->data == value)
		{
			temp->previous->next = temp->next;
			temp->next->previous = temp->previous;
			delete temp;
			return true;
		}
		temp = temp->next;
	}
	return false;
}
template <class T>
void DLL<T>::insert(T& value) // the condition for this function is that the list MUST be sorted
{
	if (isEmpty())
	{
		addToHead(value);
	}
	if (head->data >= value)
	{
		addToHead(value);
	}
	if (tail->data <= value)
	{
		addToTail(value);
	}
	DNode<T>* temp = head->next;
	while (temp != NULL)
	{
		if (temp->data > value)
		{
			DNode<T>* newNode = new DNode(value, temp, temp->previous);
			temp->previous->next = newNode;
			temp->previous = newNode;
			return;
		}
		temp = temp->next;
	}
}
template <class T>
void DLL<T>::append(DLL& list)
{
	DNode<T>* temp = list.head;
	while (temp != NULL)
	{
		addToTail(temp->data);
		temp = temp->next;
	}
}
template <class T>
void DLL<T>::mergeInOrder(DLL<T>& list)
{
	DLL<T> result;
	DNode<T>* temp1 = head;
	DNode<T>* temp2 = list.head;
	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->data > temp2->data)
		{
			result.addToTail(temp2->data);
			temp2 = temp2->next;
		}
		else if (temp1->data < temp2->data)
		{
			result.addToTail(temp1->data);
			temp1 = temp1->next;
		}
		else
		{
			result.addToTail(temp1->data);
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	while (temp1 != NULL)
	{
		result.addToTail(temp1->data);
		temp1 = temp1->next;
	}
	while (temp2 != NULL)
	{
		result.addToTail(temp2->data);
		temp2 = temp2->next;
	}
	clearAll();
	append(result);
}
template <class T>
bool DLL<T>::isSorted()
{
	DNode<T>* temp = head;
	while (temp != tail)
	{
		if (temp->data > temp->next->data)
		{
			return false;
		}
		temp = temp->next;
	}
	return true;
}
//template <class T>
//void DLL<T>::selectionSort()
