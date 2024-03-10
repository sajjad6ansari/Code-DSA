#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << value << " onto the stack.\n";
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cerr << "Stack underflow. Cannot pop element from an empty stack.\n";
            return -1; // Returning a sentinel value, you may choose a different approach
        }

        Node* poppedNode = top;
        int poppedValue = poppedNode->data;
        top = top->next;
        delete poppedNode;
        cout << "Popped " << poppedValue << " from the stack.\n";

        return poppedValue;
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return top == nullptr;
    }

    // Function to get the top element of the stack without removing it
    int peek() const {
        if (isEmpty()) {
            cerr << "Stack is empty. Cannot peek.\n";
            return -1; // Returning a sentinel value, you may choose a different approach
        }

        return top->data;
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();
    myStack.pop();

    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    myStack.pop(); // This will not use the exit function

    return 0;
}
