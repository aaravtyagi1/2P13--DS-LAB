// Name: Argh Jain
// Roll No: 1024160084
// Program: Implement Stack using One Queue

#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        int size = q.size();
        q.push(x);
        // rotate older elements behind the new one
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << x << " pushed into stack.\n";
    }

    void pop() {
        if (!q.empty()) {
            cout << "Popped: " << q.front() << endl;
            q.pop();
        } else cout << "Stack Empty!\n";
    }

    int top() {
        return q.empty() ? -1 : q.front();
    }

    bool empty() { return q.empty(); }
};

int main() {
    Stack s;
    s.push(1); s.push(2); s.push(3);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    return 0;
}
