#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int evaluate(string exp) {
    stack<int> st;
    for (char c : exp) {
        if (isdigit(c)) st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch(c) {
                case '+': st.push(a+b); break;
                case '-': st.push(a-b); break;
                case '*': st.push(a*b); break;
                case '/': st.push(a/b); break;
            }
        }
    }
    return st.top();
}

int main() {
    string postfix = "231*+9-"; // (2 + 3*1) - 9 = -4
    cout << "Result: " << evaluate(postfix) << endl;
}
