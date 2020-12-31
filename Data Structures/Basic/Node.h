#pragma once
#include <iostream>
using namespace std; 
class Node
{
public:
	int data;
	Node* next;
	Node (int, Node*);
	~Node ();
};
Node::Node (int d, Node* n)
{
	this->data = d;
	this->next = n;
}
Node::~Node ()
{

}