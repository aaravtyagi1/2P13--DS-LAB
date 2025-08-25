#include <iostream>
#include <stack>
#include <cmath>  
using namespace std;


int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        
        if (c >= '0' && c <= '9') {
            st.push(c - '0');  
        }
        else { 
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': st.push(pow(val1, val2)); break;
            }
        }
    }

    return st.top();  
}

int main() {
    string postfix;
    cout << "Enter a Postfix Expression (single-digit operands): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}
