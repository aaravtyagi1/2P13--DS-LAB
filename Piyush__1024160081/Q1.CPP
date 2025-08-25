#include <iostream>
using namespace std;



class Stack {
    int top;
    int arr[20];
public:
    Stack() { top = -1; }

    int isEmpty() {
        return (top == -1);
    }

    int isFull() {
        return (top == 20 - 1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack." << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack Empty!" << endl;
            return -1;
        }
        return arr[top];
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack Empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    Stack s;
    int choice, val;

    while (1) {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                val = s.pop();
                if (val != -1)
                    cout << "Popped: " << val << endl;
                break;
            case 3:
                cout << (s.isEmpty() ? "Stack is Empty" : "Stack is NOT Empty") << endl;
                break;
            case 4:
                cout << (s.isFull() ? "Stack is Full" : "Stack is NOT Full") << endl;
                break;
            case 5:
                s.display();
                break;
            case 6:
                val = s.peek();
                if (val != -1)
                    cout << "Top element: " << val << endl;
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Choice!" << endl;
        }
    }
}
