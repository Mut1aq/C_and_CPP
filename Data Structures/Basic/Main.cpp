#include <iostream>
#include <stdlib.h>
#include "Node.h"
#include "SLL.h"
#include "DNode.h"
#include "DLL.h"
#include "TNode.h"
#include "BST.h"
/*
using namespace std;

template <class T>
bool isEqual(DLL<T>&, DLL<T>&);

int main()
{
	system("pause");
}

template <class T>
bool isEqual(DLL<T>& list, DLL<T>& list2)
{
	DNode<T>* temp = list.getHeadNode();
	DNode<T>* temp2 = list2.getHeadNode();
	while (temp != NULL && temp2 != NULL)
	{
		if (temp->getData() != temp2->getData())
		{
			return false;
		}
		temp = temp->getNext();
		temp2 = temp2->getNext();
	}
	if (temp == NULL && temp2 == NULL)
	{
		return true;
	}
	return false;
}
*/