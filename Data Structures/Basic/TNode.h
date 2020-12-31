#pragma once
#include <iostream>
using namespace std;
template <class T> 
class BST;
template <class T>
class TNode 
{
private:
	T data;
	TNode* left;
	TNode* right;
	int depth;
	int height;
	int totalBelow;
	friend class BST<T>;
public:
	TNode(T&, TNode*, TNode*);
	~TNode();
	T getData();
	TNode* getLeft();
	TNode* getRight();
};
template <class T>
T TNode<T>::getData()
{
	return data;
}
template <class T>
TNode<T>* TNode<T>::getLeft()
{
	return left;
}
template <class T>
TNode<T>* TNode<T>::getRight()
{
	return right;
}
template <class T>
TNode<T>::~TNode()
{

}
template <class T>
TNode<T>::TNode(T& value, TNode* left, TNode* right) 
{
	data = value;
	this->left = left;
	this->right = right;
}