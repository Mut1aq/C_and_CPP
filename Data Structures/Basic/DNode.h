#pragma once
#include <iostream>
using namespace std;
template <class T>
class DLL;
template <class T> 
class DNode // T for Type
{
private:
	T data;
	DNode<T>* next;
	DNode<T>* previous;
	friend class DLL<T>;
public:
	DNode<T>(T&, DNode<T>*, DNode<T>*);
	~DNode<T>();
	T getData();
	DNode<T>* getNext();
	DNode<T>* getPrevious();
	void setData(T&);
	void setNext(DNode<T>*);
	void setPrevious(DNode<T>*);
};
template <class T> 
DNode<T>::DNode(T& d, DNode<T>* n, DNode<T>* p)
{
	data = d;
	next = n;
	previous = p;
}
template <class T> 
DNode<T>::~DNode()
{

}
template <class T> 
void DNode<T>::setData(T& d)
{
	data = d;
}
template <class T> 
void DNode<T>::setNext(DNode<T>* n)
{
	next = n;
}
template <class T> 
void DNode<T>::setPrevious(DNode<T>* p)
{
	previous = p;
}
template <class T> 
DNode<T>* DNode<T>::getPrevious()
{
	return previous;
}
template <class T> 
DNode<T>* DNode<T>::getNext()
{
	return next;
}
template <class T> 
T DNode<T>::getData()
{
	return data;
}
