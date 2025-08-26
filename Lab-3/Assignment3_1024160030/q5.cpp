#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() { top = -1; }
    void push(int value) { if (top < MAX_SIZE - 1) arr[++top] = value; }
    int pop() { if (top >= 0) return arr[top--]; return -1; }
};

int evaluatePostfix(string exp) {
    Stack s;
    for (int i = 0; i < exp.length(); i++) {
        if (isdigit(exp[i])) {
            s.push(exp[i] - '0');
        }
        else {
            int val1 = s.pop();
            int val2 = s.pop();
            switch (exp[i]) {
            case '+': s.push(val2 + val1); break;
            case '-': s.push(val2 - val1); break;
            case '*': s.push(val2 * val1); break;
            case '/': s.push(val2 / val1); break;
            }
        }
    }
    return s.pop();
}

int main() {
    string postfix;
    cout << "Enter a postfix expression (single digit numbers only): ";
    getline(cin, postfix);
    cout << "Result of evaluation: " << evaluatePostfix(postfix) << endl;
    return 0;
}
