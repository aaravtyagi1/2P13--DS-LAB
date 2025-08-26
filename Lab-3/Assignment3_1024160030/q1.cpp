#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    // (i) push()
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow - Cannot push element." << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack " << endl;
    }

    // (ii) pop()
    int pop() {
        if (isEmpty()) {
            cout << "Underflow - Cannot pop element." << endl;
            return -1;
        }
        int value = arr[top--];
        return value;
    }

    // (iii) isEmpty()
    bool isEmpty() {
        return (top < 0);
    }

    // (iv) isFull()
    bool isFull() {
        return (top >= MAX_SIZE - 1);
    }

    // (v) display()
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Elements in stack are: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // (vi) peek()
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Operations Menu ---" << endl;
        cout << "1. Push Element" << endl;
        cout << "2. Pop Element" << endl;
        cout << "3. Check if Stack is Empty" << endl;
        cout << "4. Check if Stack is Full" << endl;
        cout << "5. Display Stack" << endl;
        cout << "6. Peek Top Element" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            value = s.pop();
            if (value != -1) {
                cout << "Popped value: " << value << endl;
            }
            break;
        case 3:
            if (s.isEmpty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Stack is not empty." << endl;
            }
            break;
        case 4:
            if (s.isFull()) {
                cout << "Stack is full." << endl;
            } else {
                cout << "Stack is not full." << endl;
            }
            break;
        case 5:
            s.display();
            break;
        case 6:
            value = s.peek();
            if (value != -1) {
                cout << "Top element is: " << value << endl;
            }
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}