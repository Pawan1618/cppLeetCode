#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Top pointer
Node* top = nullptr;

// Check if stack is empty
bool isEmpty() {
    return top == nullptr;
}

// Push element onto stack
void push(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top; // link new node to current top
    top = newNode;       // update top
    cout << x << " pushed to stack" << endl;
}

// Pop element from stack
void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop" << endl;
        return;
    }
    Node* temp = top;
    int val = temp->data;
    top = top->next; // move top to next node
    delete temp;     // free memory
    cout << val << " popped from stack" << endl;
}

// Peek at top element
int peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return top->data;
}

// Display stack elements
void display() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    cout << "Top element is: " << peek() << endl;

    pop();
    display();

    pop();
    pop();
    pop(); // attempt to pop from empty stack

    return 0;
}
//practice pending 
\