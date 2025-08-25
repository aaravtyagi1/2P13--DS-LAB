#include <iostream>
#define MAX 100
using namespace std;

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }

    void peek() {
        if (!isEmpty())
            cout << "Top element: " << arr[top] << endl;
        else
            cout << "Stack is empty\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    int ch, val;
    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Enter value: "; cin >> val; s.push(val); break;
            case 2: s.pop(); break;
            case 3: s.peek(); break;
            case 4: s.display(); break;
        }
    } while (ch != 5);
}
