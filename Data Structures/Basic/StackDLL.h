#pragma once
#include<iostream>
#include "DLL.h"
using namespace std;
template <class T>
class StackDLL
{
private:
	DLL<T> list;
public:
	StackDLL();
	~StackDLL();
	void push(T&);
	T pop(T&);
	T top();
	void print();
	void clear();
	bool isEmpty();
};
template <class T>
StackDLL<T>::StackDLL()
{

}
template <class T>
StackDLL<T>::~StackDLL()
{
	clear();
}
template <class T>
void StackDLL<T>::push(T& data)
{
	list.addToTail(data);
}
template <class T>
bool StackDLL<T>::isEmpty()
{
	return list.isEmpty();
}
template <class T>
void StackDLL<T>::clear()
{
	list.clearAll();
}
template <class T>
void StackDLL<T>::print()
{
	list.print();
}
template <class T>
T StackDLL<T>::pop(T& data)
{
	T value = list.getTail();
	list.deleteTail();
	return value;
}
template <class T>
T StackDLL<T>::top()
{
	T value = list.getTail();
	return value;
}