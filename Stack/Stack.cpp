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

	}
};