// Name: Argh Jain
// Roll No: 1024160084
#include <iostream>
#include <stack>
using namespace std;

string reverseString(string s) {
    stack<char> st;
    for (char c : s)
        st.push(c);

    string rev = "";
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }
    return rev;
}

int main() {
    string str = "DataStructure";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl;
    return 0;
}
