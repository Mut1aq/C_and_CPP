#pragma once
#include<iostream>
#include "DLL.h"
using namespace std;
template <class T>
class QueueDLL
{
private:
	DLL<T> list;
public:
	QueueDLL();
	~QueueDLL();
	void enq(T&);
	T deq(T&);
	T getFirst();
	T getLast();
	void print();
	void clear();
	bool isEmpty();
};
template <class T>
QueueDLL<T>::QueueDLL()
{

}
template <class T>
QueueDLL<T>::~QueueDLL()
{
	clear();
}
template <class T>
void QueueDLL<T>::enq(T& data)
{
	list.addToTail(data);
}
template <class T>
bool QueueDLL<T>::isEmpty()
{
	return list.isEmpty();
}
template <class T>
void QueueDLL<T>::clear()
{
	list.clearAll();
}
template <class T>
void QueueDLL<T>::print()
{
	list.print();
}
template <class T>
T QueueDLL<T>::deq(T& data)
{
	T value = list.getHead();
	list.deleteHead();
	return value;
}
template <class T>
T QueueDLL<T>::getLast()
{
	T value = list.getTail();
	return value;
}
template <class T>
T QueueDLL<T>::getFirst()
{
	T value = list.getHead();
	return value;
}