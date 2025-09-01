// Name: Argh Jain
// Roll No: 1024160084
// Program: Implement Stack using Two Queues

#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front()); q1.pop();
        }
        swap(q1, q2);
        cout << x << " pushed into stack.\n";
    }

    void pop() {
        if (!q1.empty()) {
            cout << "Popped: " << q1.front() << endl;
            q1.pop();
        } else cout << "Stack Empty!\n";
    }

    int top() {
        return q1.empty() ? -1 : q1.front();
    }

    bool empty() { return q1.empty(); }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    return 0;
}