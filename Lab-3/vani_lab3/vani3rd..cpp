#include <iostream>
using namespace std;

#define MAX 100 #include <iostream>
using namespace std;

#define MAX 100 // maximum size of stack

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(char c) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = c;
    }

    char pop() {
        if (top == -1) {
            return '\0'; // indicates empty
        }
        return arr[top--];
    }

    char peek() {
        if (top == -1) return '\0';
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

bool isBalanced(string expr) {
    Stack s;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty()) return false;

            char top = s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.isEmpty();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (isBalanced(expression))
        cout << "Balanced ✅" << endl;
    else
        cout << "Not Balanced ❌" << endl;

    return 0;
}

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(char c) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = c;
    }

    char pop() {
        if (top == -1) {
            return '\0'; 
        }
        return arr[top--];
    }

    char peek() {
        if (top == -1) return '\0';
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

bool isBalanced(string expr) {
    Stack s;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty()) return false;

            char top = s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.isEmpty();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (isBalanced(expression))
        cout << "Balanced " << endl;
    else
        cout << "Not Balanced " << endl;

    return 0;
}
