#include <iostream>
#include <stack>
#include <string>
using namespace std;

int eval(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int ePostfix(const string& exp) {
    stack<int> s;
    for (char c : exp) {
        if (isdigit(c))
            s.push(c - '0');
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(eval(a, b, c));
        }
    }
    return s.top();
}

int main() {
    string  PIYUSH;
    cout << "Enter postfix: ";
    cin >>PIYUSH;
    cout << "Result: " << ePostfix(PIYUSH) << endl;
    return 0;
}
