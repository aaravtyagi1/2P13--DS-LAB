#include <iostream>
#include <stack>
using namespace std;

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string expr) {
    stack<char> s;

    for (char ch : expr) {
        
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || !isMatchingPair(s.top(), ch)) {
                return false;  // mismatch
            }
            s.pop(); 
        }
    }

    
    return s.empty();
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced expression " << endl;
    else
        cout << "Unbalanced expression " << endl;

    return 0;
}
