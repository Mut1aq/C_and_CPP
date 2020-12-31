#pragma once
#include <iostream>
#include "TNode.h"
using namespace std;
template <class T>
class BST
{
private:
	TNode<T>* root;
	void printInOrder(TNode<T>*);
	bool searchRecursively(T&, TNode<T>*);
	void clearAll(TNode<T>*);
	T sum(TNode<T>*);
	int count(TNode<T>*);
public:
	BST();
	~BST();
	bool isEmpty();
	TNode<T>* getRoot();
	bool isLeaf(TNode<T>*);
	bool isNotLeaf(TNode<T>*);
	void insert(T&);
	bool search(T&);
	void print();
	T getMax();
	T getMin();
	bool searchRecursively(T&);
	void clearAll();
	T sum();
	int count();
	bool deleteNode(T&);
	void deleteSingle(TNode<T>*, TNode<T>*);
	void deleteDouble(TNode<T>*);

};
template <class T>
void BST<T>::deleteDouble(TNode<T>* c)
{
	//pre
	TNode<T>* r = c->left;
	TNode<T>* p = c;
	while (r->right != NULL)
	{
		p = c;
		r = r->right;
	}
	c->data = r->data;
	deleteSingle(r, p);
	// succ
	/*
	TNode<T>* r = c->right;
	TNode<T>* p = c;
	while (r->left != NULL)
	{
		p = c;
		r = r->left;
	}
	c->data = r->data;
	deleteSingle(r, p);
	*/
}
template <class T>
void BST<T>::deleteSingle(TNode<T>* temp, TNode<T>* temp1)
{
	if (temp1 == NULL)
	{
		if (root->right == NULL)
		{
			root = root->left;
		}
		else
		{
			root = root->right;
		}
	}
	if (temp == temp1->left)
	{
		if (temp->right == NULL)
		{
			temp1->left = temp->left;
		}
		else
		{
			temp1->left = temp->right;
		}
	}
	else
	{
		if (temp->right != NULL)
		{
			temp1->right = temp->right;
		}
		else
		{
			temp1->right = temp->left;
		}
	}
	delete temp;
}
template <class T>
bool BST<T>::deleteNode(T& value)
{
	if (isEmpty())
	{
		return false;
	}
	TNode<T>* temp = root;
	TNode<T>* temp1 = NULL;
	while (temp != NULL)
	{
		if (temp->data == value)
		{
			temp1 = temp;
			break;
		}
		if (temp->data > value)
		{
			temp = temp->right;
		}
		else
		{
			temp = temp->left;
		}
	}
	if (temp == NULL)
	{
		return false;
	}
	if (temp->right == NULL || temp->left == NULL)
	{
		return deleteSingle(temp, temp1);
	}
	else
	{
		deleteDouble(temp);
	}
	return true;
}
template <class T>
int count(TNode<T>* temp)
{
	if (temp == NULL)
	{
		return 0;
	}
	return count(temp->left) + temp->data + count(temp->right);
}
template <class T>
int BST<T>::count()
{
	return count(TNode<T> * root);
}
template <class T>
T sum(TNode<T>* temp)
{
	if (temp == NULL)
	{
		return 0;
	}
	return sum(temp->left) + temp->data + sum(temp->right);
}
template <class T>
T BST<T>::sum()
{
	return sum(TNode<T> * root);
}
template <class T>
void BST<T>::clearAll()
{
	clearAll(root);
	root = NULL;
}
template <class T>
void BST<T>::clearAll(TNode<T>* temp)
{
	if (temp != NULL)
	{
		clearAll(temp->left);
		clearAll(temp->right);
		delete temp;
	}
}
template <class T>
bool BST<T>::searchRecursively(T& value, TNode<T>* temp)
{
	if (temp == NULL)
	{
		return false;
	}
	if (temp->data == value)
	{
		return true;
	}
	if (temp->data >= value)
	{
		return searchRecursively(T & value, temp->left);
	}
	else
	{
		return searchRecursively(T & value, temp->right);
	}
}
template <class T>
bool BST<T>::searchRecursively(T& key)
{
	return searchRecursively(key, root);
}
template <class T>
T BST<T>::getMin()
{
	if (isEmpty())
	{
		exit(0);
	}
	TNode<T>* temp = root;
	while (temp->left != NULL)
	{
		temp = temp->left;
	}
	return temp->data;
}
template <class T>
T BST<T>::getMax()
{
	if (isEmpty())
	{
		exit(0);
	}
	TNode<T>* temp = root;
	while (temp->right != NULL)
	{
		temp = temp->right;
	}
	return temp->data;
}
template <class T>
void BST<T>::print()
{
	printInOrder(root);
}
template <class T>
void BST<T>::printInOrder(TNode<T>* temp)
{
	if (root != NULL)
	{
		printInOrder(temp->left);
		cout << temp->data << endl;
		printInOrder(temp->right);
	}
}
template <class T>
bool BST<T>::search(T& value)
{
	TNode<T>* temp = root;
	while (temp != NULL)
	{
		if (temp->data == value)
		{
			return true;
		}
		if (temp->data > value)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	return false;
}
template <class T>
void BST<T>::insert(T& value)
{
	TNode<T>* newNode = new TNode(value, NULL, NULL);
	if (isEmpty())
	{
		root = newNode;
		return;
	}
	TNode<T>* temp = root;
	TNode<T>* temp2 = NULL;
	while (temp!= NULL)
	{
		temp2 = temp;
		if (temp->data > value)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->left;
		}
	}
	if (temp2->data >= value)
	{
		temp2->left = newNode;
	}
	else
	{
		temp2->right = newNode;
	}
}
template <class T>
bool BST<T>::isNotLeaf(TNode<T>* temp)
{
	return temp->right != NULL || temp->left != NULL;
}
template <class T>
bool BST<T>::isLeaf(TNode<T>* temp)
{
	return temp->right == NULL && temp->left == NULL;
}
template <class T>
TNode<T>* BST<T>::getRoot()
{
	return root;
}
template <class T>
BST<T>::BST()
{
	root = NULL;
}
template <class T>
BST<T>::~BST()
{

}
template <class T>
bool BST<T>::isEmpty()
{
	return root == NULL;
}