#include <iostream>
using namespace std;

#define MAX 100

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
        if (top == -1) return '\0'; 
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

// function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperand(char ch) {
    return ( (ch >= 'A' && ch <= 'Z') || 
             (ch >= 'a' && ch <= 'z') || 
             (ch >= '0' && ch <= '9') );
}

string infixToPostfix(string infix) {
    Stack s;
    string postfix = "";

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isOperand(ch)) {
            postfix += ch; // directly add operand
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            s.pop(); // remove '('
        }
        else { // operator
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(ch)) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    // pop remaining operators
    while (!s.isEmpty()) {
        postfix += s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix expression: " << infixToPostfix(infix) << endl;

    return 0;
}
