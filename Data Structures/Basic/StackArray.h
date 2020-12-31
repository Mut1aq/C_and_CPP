#pragma once
#include<iostream>
using namespace std;
template <class T>
class StackArray
{
private:
	T* data;
	int capacity, last;
public:
	StackArray(int);
	~StackArray();
	void push(T&);
	T pop();
	T top();
	bool isEmpty();
	bool isFull();
	void clear();
};
template <class T>
StackArray<T>::StackArray(int capacity)
{
	last = -1;
	this->capacity = capacity;
	data = new T[capacity];
}
template <class T>
StackArray<T>::~StackArray()
{
	delete[] data;
}
template <class T>
bool StackArray<T>::isEmpty()
{
	return last == -1;
}
template <class T>
bool StackArray<T>::isFull()
{
	return last == capacity - 1;
}
template <class T>
void StackArray<T>::clear()
{
	last = -1;
}
template <class T>
void StackArray<T>::push(T& value)
{
	if (!isFull())
	{
		data[++last] = value;
	}
}
template <class T>
T StackArray<T>::pop()
{
	if (!isEmpty())
	{
		return data[last--];
	}
}
template <class T>
T StackArray<T>::top()
{
	if (isEmpty())
	{
		return -1;
	}
	return data[last];

}