#include <iostream>
using namespace std;

class Stack {
    int arr[100];   // Array to store stack elements
    int top;        // Index of the top element

public:

    // Constructor
    Stack() {
        top = -1;
    }

    // Push element
    void push(int val) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    // Pop element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        top--;
    }

    // Return top element
    int Top() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[top];
    }

    // Check whether stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty()) {
        cout << s.Top() << " ";
        s.pop();
    }

    return 0;
}
