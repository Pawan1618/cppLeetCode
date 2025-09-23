#include <iostream>
using namespace std;

#define MAX 100  // maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;  // initialize stack as empty
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == MAX - 1;
    }

    // Push element onto stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed to stack" << endl;
        }
    }

    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop" << endl;
        } else {
            int val = arr[top--];
            cout << val << " popped from stack" << endl;
        }
    }

    // Peek at top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  // return -1 if stack is empty
        } else {
            return arr[top];
        }
    }

    // Display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();  // trying to pop from empty stack

    return 0;
}
