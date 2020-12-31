#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class SLL
{
public:
	Node* head;
	Node* tail;
	SLL();
	~SLL ();
	bool isEmpty();
	void addToHead (int);
	void print();
	void addToTail(int);
	int getHead();
	Node* getHeadNode();
	int getTail();
	Node* getTailNode();
	bool IsInList(int);
	int getSize();
	int getSum();
	int getSumOfEven();
	int getMax();
	int getValueAtIndex(int);
	void deleteFromHead();
	int deleteFromHead1();
	void deleteFromTail();
	int deleteFromTail1();
	bool deleteNode(int);
	void insert(int);
	void clearAll();
	void append(SLL&);
	void reverseList();
};
SLL::SLL ()
{
	head = tail = nullptr;
}
SLL::~SLL()
{
	clearAll();
}
bool SLL::isEmpty()
{
	return head == NULL;
}
void SLL::addToHead(int data)
{
	Node* temp = new Node(data, head);
	head = temp;
	if (tail == nullptr)
	{
		tail = temp;
	}
}
void SLL::print()
{
	Node* temp = head;
	if (isEmpty())
	{
		cout << "List is empty!" << endl;
		return;
	}
	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}

}
void SLL::addToTail(int data)
{
	Node* temp = new Node(data, nullptr);
	if (isEmpty())
	{
		head = tail = temp;
		return;
	}
	tail->next = temp;
	tail = temp;
}
int SLL::getHead()
{
	if (isEmpty())
	{
		cout << "List is empty!" << endl;
	}
	return head->data;
}
Node* SLL::getHeadNode()
{
	return head;
}
int SLL::getTail()
{
	return tail->data;
}
Node* SLL::getTailNode()
{
	return tail;
}
bool SLL::IsInList(int key)
{
	Node* temp = head;
	while (temp != nullptr)
	{
		if (temp->data == key)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
	/*
	for(Node* i = head; i != nullptr; i = i->next)
	{
	
	}
	*/
}
int SLL::getSize()
{
	int c = 0;
	Node* temp = head;
	while (temp != nullptr)
	{
		c++;
		temp = temp->next;
	}
	return c;
}
int SLL::getSum()
{
	int c = 0;
	Node* temp = head;
	while (temp != nullptr)
	{
		c += temp->data;
		temp->next;
	}
	return c;
}
int SLL::getSumOfEven()
{
	int c = 0;
	Node* temp = head;
	while (temp != nullptr)
	{
		if (temp->data % 2 == 0)
		{
			c += temp->data;
		}
		temp->next;
	}
	return c;
}
int SLL::getMax()
{
	if (isEmpty())
	{
		cout << "List is empty!" << endl;
		exit(1);
	}
	Node* temp = head->next;
	int max = head->data;
	while (temp != nullptr)
	{
		if (temp->data > max)
		{
			max = temp->data;
		}
		temp = temp->next;
	}
	return max;
}
int SLL::getValueAtIndex(int index)
{
	Node* temp = head;
	int c = 0;
	while (temp != nullptr)
	{
		if (index > 0)
		{
			cout << "Invalid index!" << endl;
			return -1;
		}
		if (c == index)
		{
			return temp->data;
		}
		temp = temp->next;
	}
	cout << "Invalid index!" << endl;
	return -1;
}
void SLL::deleteFromHead()
{
	if (isEmpty())
	{
		return;
	}
	Node* temp = head;
	if (head == tail)
	{
		tail = head = nullptr;
	}
	else
	{
		head = head->next;
	}
	delete temp;
}
int SLL::deleteFromHead1() 
{
	if (isEmpty())
	{ 
		cout << "Nothing to delete\n"; 
		return -99;
	}
	int delItem = head->data;
	deleteFromHead();
	return delItem;
}
void SLL::deleteFromTail()
{
	if (isEmpty())
	{
		return;
	}
	Node* temp = head;
	if (head == tail)
	{
		delete head;
		head = tail = nullptr;
		return;
	}
	else
	{
		while (temp->next != tail)
		{
			temp = temp->next;
		}
		temp->next = nullptr;
		delete tail;
		tail = temp;
	}
}
int SLL::deleteFromTail1() 
{
	if (isEmpty()) 
	{ cout << "Nothing to delete\n"; 
	return -99; 
	}
	int delItem = tail->data;
	deleteFromTail();
	return delItem;
}
bool SLL::deleteNode(int key)
{
	if (isEmpty())
	{
		return false;
	}
	if (head->data == key)
	{
		deleteFromHead();
		return true;
	}
	if (tail->data == key)
	{
		deleteFromTail();
		return true;
	}
	Node* temp = head;
	Node* temp2 = NULL;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			temp2->next = temp->next;
			delete temp;
			return true;
		}
		else
		{
			temp2 = temp;
			temp = temp->next;
		}
	}
	return false;
}
void SLL::insert(int key)
{
	if (isEmpty())
	{
		addToHead(key);
		return;
	}
	if (head->data > key)
	{
		addToHead(key);
	}
	if (tail->data < key)
	{
		addToTail(key);
	}
	Node* temp = head->next;
	Node* temp2 = head;
	while (temp != NULL)
	{
		if (temp->data > key)
		{
			Node* newNode = new Node(key, temp);
			temp2->next = newNode;
			return;
		}
		temp2 = temp;
		temp = temp->next;
	}
	return;
}
void SLL::clearAll()
{
	Node* temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	head = tail = NULL;
}
void SLL::append(SLL& list)
{
	/*
	Node* temp = tail;
	delete tail;
	Node* temp2 = list.head;
	while (temp != NULL)
	{		
		temp->next = temp2;
		temp2 = temp2->next;
	}
	tail = temp2;
	*/
	Node* temp = list.head;
	while (temp != NULL)
	{
		addToTail(temp->data);
		temp = temp->next;
	}
}
void SLL::reverseList()
{
	/*
	SLL list;
	Node* temp = head;
	while (temp != NULL)
	{
		list.addToHead(temp->data);
		temp = temp->next;	
	}
	clearAll();
	append(list);
	*/
	SLL list;
	while (!isEmpty())
	{
		int valueOfNode = deleteFromHead1();
		list.addToHead(valueOfNode);
	}
	append(list);
}
