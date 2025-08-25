#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 100

class CharStack {
private:
    int top;
    char arr[MAX_SIZE];

public:
    CharStack() { top = -1; }
    void push(char value) { if (top < MAX_SIZE - 1) arr[++top] = value; }
    char pop() { if (top >= 0) return arr[top--]; return '\0'; }
    char peek() { if (top >= 0) return arr[top]; return '\0'; }
    bool isEmpty() { return (top < 0); }
};

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string infix) {
    CharStack s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix += ch;
        }
        else if (ch == '(') {
            s.push('(');
        }
        else if (ch == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            s.pop();
        }
        else { 
            while (!s.isEmpty() && precedence(ch) <= precedence(s.peek())) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.isEmpty()) {
        postfix += s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);
    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
    return 0;
}