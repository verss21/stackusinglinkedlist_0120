#include <iostream>

using namespace std;

//node class representing a single node in linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

//stack class
class Stack {
private:
	Node* top; ///pointer to the top node of stack

public:
	Stack() {
		top = NULL; //initiaize the stack with a null top pointer
	}

	//push operation:  insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); // 1. allocate memory for the new node
		newNode->data = value; //2. assign value
		newNode->next = top; // set the next pointer of the new node to the current top node
		top = newNode; // update the top pointer to the new node
		cout << "Push Value: " << value << endl;
		return value;
	}
	
	// pop operation: remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value: " << top->data << endl;
		top = top->next; // update the top pointer to the next node
	}
};