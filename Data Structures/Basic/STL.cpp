#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <stdlib.h>
#include "BST.h"
#include "DLL.h"
#include "DNode.h"
#include "Node.h"
#include "QueueDLL.h"
#include "SLL.h"
#include "StackArray.h"
#include "StackDLL.h"
using namespace std;
int main()
{
	/*
	//Q1: Insert elements into a stack and then use a queue to reverse the stack.
	stack<int> myStack;
	queue<int> q;
	for (int  i = 0; i < 10; i++)
	{
		myStack.push(i);
	}
	while (!myStack.empty())
	{
		int temp = myStack.top();
		myStack.pop();
		q.push(temp);
	}
	//Q2: Insert random numbers into a priority queue and then output the elements in a dec order
	cout << endl << endl << "Printing the contents of a priority queue: \n";

	priority_queue<int> pq;

	for (int i = 0; i < 10; i++) {
		int x = rand() % 10;
		pq.push(x);
	}

	while (!pq.empty()) {
		int x = pq.top();
		pq.pop();

		cout << x << ", ";
	}
	//--------------------------------------------------------------------------

	// Example 3:	Using lists and list iterators.
	cout << endl << endl << "Printing the contents of a list "
		<< "forwards and backwards: " << endl;

	list<int> myList;

	for (int i = 0; i < 10; i++) {
		myList.push_back(i);
		myList.push_front(i);
	}

	list<int>::iterator temp;
	for (temp = myList.begin(); temp != myList.end(); temp++)
		cout << *temp << ", ";
	cout << endl;

	list<int>::reverse_iterator rtemp;
	for (rtemp = myList.rbegin(); rtemp != myList.rend(); rtemp++)
		cout << *rtemp << ", ";
	cout << endl;


	//--------------------------------------------------------------------------

	// Example 4: Using vectors and vector iterators.
	cout << endl << endl << "Printing the contents of a vector using three "
		<< "different ways." << endl;

	vector<int> myVector;

	for (int i = 0; i < 10; i++)
		myVector.push_back(i);


	vector<int>::iterator temp2;
	for (temp2 = myVector.begin(); temp2 != myVector.end(); temp2++)
		cout << *temp2 << ", ";
	cout << endl;

	for (int i = 0; i < myVector.size(); i++)
		cout << *(myVector.begin() + i) << ", ";
	cout << endl;

	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i] << ", ";
	cout << endl;
	//--------------------------------------------------------------------------

	// Example 5: Sorting a vector
	sort(myVector.begin(), myVector.end());
	//--------------------------------------------------------------------------


	// Example 6: Removing the duplicates from a stack.
	while (!myStack.empty()) 	myStack.pop();
	cout << "\n\nContents of the stack reversed are: " << endl;
	for (int i = 0; i < 10; i++) {
		int x = rand() % 10;
		cout << x << ", ";
		myStack.push(x);
	}
	myVector.clear();
	while (!myStack.empty())
	{
		int x = myStack.top();
		myStack.pop();

		if (find(myVector.begin(), myVector.end(), x) == myVector.end())
		{
			myVector.push_back(x);
		}
	}

	while (!myVector.empty())
	{
		myStack.push(myVector.back());
		myVector.pop_back();
	}

	cout << endl << endl << "After removing duplicates: " << endl;
	while (!myStack.empty()) 
	{
		int x = myStack.top();
		myStack.pop();

		cout << x << ", ";
	}
	*/
	


	system("pause");
	return 0;
}
