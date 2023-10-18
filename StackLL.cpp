//Implements a stack
#include "StackLL.h"
#include "Node.h"
#include <iostream>
using namespace std;

StackLL::StackLL()
{
	mytop = NULL; //assign mytop to null
}


StackLL::~StackLL()
{
	Node* temp;  
	temp = mytop; 
	while (temp != NULL) //traverse stack and deallocate 
	{
		Node* save = temp;
		temp = temp->next; 
		delete save;
	}
}

bool StackLL::empty()
{
	if (mytop == NULL) //check if stack empty
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void StackLL::push(int e)
{
	Node* newptr = new Node(e);
	
	if (empty()) //insert node if empty
	{
		mytop = newptr;
	}
	else
	{
		newptr->next = mytop; // newptr points to node before the newest node
		mytop = newptr; //mytop = newest node
	}
}

void StackLL::pop()
{
	if (empty())
	{
		cout << "Error - stack is empty - cannot pop" << endl;
	}
	else
	{
		Node* temp;
		temp = mytop;
		mytop = mytop->next; //temp is assigned node that needs pop
		delete temp;
	}
}

int StackLL::top()
{
	if (empty())
	{
		cout << "Error - stack is empty - cannot display top" << endl;
		return -1;
	}
	else
	{
		return mytop->data; 
	}
}

void StackLL::display()
{
	Node* temp; 
	temp = mytop;
	while (temp != NULL)
	{
		cout << temp->data << ",";
		temp = temp->next; // traverse through nodes
	}
	cout << endl;
}

