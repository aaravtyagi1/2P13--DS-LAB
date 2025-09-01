/*
Name: Argh Jain
Roll No: 1024160084
Program: Interleave the first half of the queue with the second half
*/

#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    if (q.size() % 2 != 0) {
        cout << "Queue size must be even for interleaving!" << endl;
        return;
    }

    int n = q.size() / 2;
    queue<int> firstHalf;

    for (int i = 0; i < n; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {
        q.push(firstHalf.front()); firstHalf.pop();
        q.push(q.front()); q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(4); q.push(7); q.push(11);
    q.push(20); q.push(5); q.push(9);

    cout << "Original Queue: 4 7 11 20 5 9\n";
    interleaveQueue(q);

    cout << "Queue after interleaving: ";
    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
    cout << endl;

    return 0;
}
