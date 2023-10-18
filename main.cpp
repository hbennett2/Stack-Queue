// Driver function - Hadley Bennett
#include <iostream>
#include "StackLL.h"
#include "QueueLL.h"
#include "Node.h"
#include "ElementType.h"
using namespace std;

int main()
{
    // Test Stack
    cout << "Origional Stack" << endl;
    cout << "----------------------------- " << endl;
    StackLL* stack = new StackLL();
    stack->push(10);
    stack->push(20);
    stack->display();  //20, 10
    stack->push(30);
    stack->display(); //30, 20, 10
    cout << "Empty? " << stack->empty() << endl; // false
    stack->pop();
    stack->display(); //20, 10
    cout << "Top: " << stack->top() <<endl; //20
    stack->pop(); 
    stack->display(); //10
    stack->pop();
    stack->pop();
    cout << "Empty? " << stack->empty() << endl; // true
    cout << "Top: " << stack->top() << endl; //error
    stack->push(40);
    stack->push(50);
    stack->push(60);
    stack->display(); //60, 50, 40
    cout << "----------------------------- " << endl;

   // Adding user input
    int value;
    cout << "Enter a value (>0) to add to the stack: "; //user input
    cin >> value;
    while (value > 0) //loop adds value to stack
    {
        stack->push(value);
        cout << "Enter a value (>0) to add to the stack: "; //user input
        cin >> value;
    }
    cout << "Updated Stack: ";
    stack->display();
    cout << "----------------------------- " << endl;

    // Print and remove top value
    cout << "Manipulating top of Stack" << endl;
    while (!stack->empty()) // terminates when empty
    {
        cout << "Pop: " << stack->top() << endl;
        stack->pop();
        cout << "New Top: " << stack->top() << endl;
    }
    delete stack; // clean memory
    
   
    // Test Queue
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Origional Queue" << endl;
    cout << "----------------------------- " << endl;
    QueueLL* queue = new QueueLL();
    QueueLL* queue1 = new QueueLL();
    queue->enqueue(10);
    queue->enqueue(20);
    queue->display();  //10, 20
    queue->enqueue(30);
    queue->display(); //10, 20, 30
    cout << "Empty? " << queue->empty() << endl; // false
    queue->dequeue();
    queue->display(); //20, 30
    cout << "My Front: " << queue->front() << endl; //20
    queue->dequeue();
    queue->display(); //30
    queue->dequeue();
    queue->dequeue(); //error 
    cout << "Empty? " << queue->empty() << endl; // true
    cout << "My Front: " << queue->front() << endl; //error
    queue->enqueue(40);
    queue->enqueue(50);
    queue->enqueue(60);
    queue->display(); //40, 50, 60
    cout << "----------------------------- " << endl;

   // Adding user input
    cout << "Enter a value (>0) to add to the queue:";
    cin >> value;
    while (value>0)
    {
        queue->enqueue(value);
        cout << "Enter a value (>0) to add to the queue:";
        cin >> value;
    }
    cout << "Updated Queue: ";
    queue->display();
    cout << "----------------------------- " << endl;

    // Move values form q to q1 (empty q)
    while (!queue->empty()) // terminates when empty
    {
        value = queue->front(); // save value
        queue->dequeue(); // delete 
        queue1->enqueue(value); // add value to q1
    }
    cout << "Queue #2: " <<  endl;
    queue1->display();
    cout << "Queue #1 empty? " << queue->empty() << endl;
    cout << "----------------------------- " << endl;

    delete queue; //clean memory




}

