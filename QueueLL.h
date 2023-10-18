#include "Node.h"
#pragma once

class QueueLL
{
public: 
	QueueLL(); //constructor
	~QueueLL(); //destructor
	void enqueue(int e); //add element
	bool empty(); //checks empty
	void dequeue(); //delete node
	int front(); 
	void display();

private:
	Node* myfront;
	Node* myback;


};

