#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

string infToPost(const string& in) {
    stack<char> s;
    string post = "";

    for (char c : in) {
        if (isalnum(c))
            post += c;
        else if (c == '(')
            s.push(c);
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                post += s.top();
                s.pop();
            }
            if (!s.empty()) s.pop();
        }
        else {
            while (!s.empty() && prec(c) <= prec(s.top())) {
                post += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        post += s.top();
        s.pop();
    }

    return post;
}

int main() {
    string inf;
    cout << "Enter infix: ";
    cin >> inf;

    cout << "Postfix: " << infToPost(inf) << endl;

    return 0;
}
