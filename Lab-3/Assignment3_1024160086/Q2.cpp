#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "DataStructure";
    stack<char> s;

    
    for (char ch : str) {
        s.push(ch);
    }

    
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversed << endl;

    return 0;
}
