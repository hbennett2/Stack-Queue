//Implements a queue

#include "QueueLL.h"
#include "Node.h"
#include <iostream>
using namespace std;

QueueLL::QueueLL()
{
	myfront = NULL;
	myback = NULL;
}

QueueLL::~QueueLL()
{
	Node* temp;  // temp
	temp = myfront;
	while (temp != NULL) //traverse stack and deallocate 
	{
		Node* save = temp;
		temp = temp->next;
		delete save;
	}
}

bool QueueLL::empty()
{
	if (myfront == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void QueueLL::enqueue(int e)
{
	Node* newptr = new Node(e);

	if (empty()) //insert node if empty
	{
		myfront = newptr; 
		myback = newptr;
	}
	else
	{
		myback->next = newptr; //points to eq
		myback = newptr; // is eq
	}
}

void QueueLL::dequeue()
{
	Node* temp; 
	if (empty())
	{
		cout << "Error - queue is empty - cannot dequeue" << endl;
	}
	else
	{
		temp = myfront;
		myfront = myfront->next; //temp is assigned to node that needs dq
		delete temp;
	}
	if (myfront == NULL) //error check both must be null
	{
		myback = NULL;
	}
}

int QueueLL::front()
{
	if (empty())
	{
		cout << "Error - cannot display front - queue is empty" << endl;
		return -1;
	}
	else
	{
		return myfront->data;
	}
}

void QueueLL::display()
{
	Node* temp;
	temp = myfront;
	while (temp != NULL)
	{
		cout << temp->data << ",";
		temp = temp->next; // traverse through nodes
	}
	cout << endl;
}
