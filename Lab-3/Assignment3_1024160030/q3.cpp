#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    char arr[MAX_SIZE];

public:
    Stack() { top = -1; }
    void push(char value) {
        if (top < MAX_SIZE - 1) 
        arr[++top] = value;
    }
    char pop() {
        if (top >= 0) 
        return arr[top--];
        return '\0';
    }
    bool isEmpty() {
        return (top < 0);
    }
};

bool balanced(string expr) {
    Stack s;
    char ch;

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            s.push(expr[i]);
            continue;
        }

        if (s.isEmpty()) {
            return false;
        }

        switch (expr[i]) {
        case ')':
            ch = s.pop();
            if (ch == '{' || ch == '[') return false;
            break;
        case '}':
            ch = s.pop();
            if (ch == '(' || ch == '[') return false;
            break;
        case ']':
            ch = s.pop();
            if (ch == '(' || ch == '{') return false;
            break;
        }
    }
    return s.isEmpty();
}

int main() {
    string expr;
    cout << "Enter an expression to check for balanced parentheses: ";
    getline(cin, expr);

    if (balanced(expr)) {
        cout << "The expression has balanced parentheses." << endl;
    } else {
        cout << "The expression does not have balanced parentheses." << endl;
    }

    return 0;
}