#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    char arr[MAX_SIZE];

public:
    Stack() { top = -1; }

    void push(char value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    char pop() {
        if (top < 0) {
            return '\0';
        }
        return arr[top--];
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);

    Stack s;
    string reversedStr = "";

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    while (!s.isEmpty()) {
        reversedStr += s.pop();
    }

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
