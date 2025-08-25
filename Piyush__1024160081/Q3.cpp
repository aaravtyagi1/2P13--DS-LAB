#include <iostream>
#include <cstring>
using namespace std;


class Stack {
    int top;
    char arr[20];
public:
    Stack() : top(-1) {}

    int isEmpty() { return top == -1; }
    int isFull() { return top == 20 - 1; }

    void push(char x) {
        if (!isFull()) arr[++top] = x;
    }

    char pop() {
        if (!isEmpty()) return arr[top--];
        return '\0';
    }
};

int paraBalanced(const char* expr) {
    Stack s;
    int len = strlen(expr);

    for (int i = 0; i < len; i++) {
        if (expr[i] == '(') {
            s.push('(');
        }
        else if (expr[i] == ')') {
            if (s.isEmpty()) return 0;
            s.pop();
        }
    }
    return s.isEmpty() ? 1 : 0;
}

int main() {
    char expr[20];
    cout << "Enter expression with parentheses: ";
    cin >> expr;

    if (paraBalanced(expr))
        cout << "Parentheses are Balanced\n";
    else
        cout << "Parentheses are Not Balanced\n";

    return 0;
}
