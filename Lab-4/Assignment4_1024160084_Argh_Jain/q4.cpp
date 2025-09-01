// Name: Argh Jain
// Roll No: 1024160084
// Program: Find first non-repeating character in a string using Queue

#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void firstNonRepeating(string str) {
    unordered_map<char,int> freq;
    queue<char> q;

    cout << "Processing stream: " << str << endl;
    cout << "First non-repeating at each step: ";

    for (char ch : str) {
        freq[ch]++;
        q.push(ch);

        // Remove repeated characters
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

        if (q.empty()) cout << "-1 ";
        else cout << q.front() << " ";
    }
    cout << endl;
}

int main() {
    string str = "aabc";
    firstNonRepeating(str);
    return 0;
}
