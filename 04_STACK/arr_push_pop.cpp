#include <iostream>
using namespace std;
#include <cstdlib>

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout<< "Stack overflow. Cannot push element onto the stack.\n";
            return;
        }

        arr[++top] = value;
        cout << "Pushed " << value << " onto the stack.\n";
    }

    // Function to pop an element from the stack
    int pop() {
        if (top == -1) {
            cout<< "Stack underflow. Cannot pop element from an empty stack.\n";
        }

        int poppedValue = arr[top--];
        cout << "Popped " << poppedValue << " from the stack.\n";

        return poppedValue;
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Function to get the top element of the stack without removing it
    int peek() const {
        if (top == -1) {
            cout<< "Stack is empty. Cannot peek.\n";
        }

        return arr[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();
    myStack.pop();

    std::cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    myStack.pop(); // This will cause stack underflow

    return 0;
}
