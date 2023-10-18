#pragma once
#include "Node.h"

class StackLL
{
public:
	StackLL(); //constructor
	~StackLL(); //destructor
	bool empty(); //checks empty
	void push(int e); //push element
	void pop(); //delete element
	int top(); //top of stack
	void display();

private:
	Node* mytop;
};

