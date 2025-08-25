#include <iostream>
#include <cstring>
using namespace std;



class Stack {
    int top;
    char arr[20];
public:
    Stack() : top(-1) {}

    int isEmpty() { return top == -1; }
    int isFull() { return top == 20 - 1; }

    void push(char x) {
        if (!isFull()) arr[++top] = x;
    }

    char pop() {
        if (!isEmpty()) return arr[top--];
        return '\0';
    }
};

int main() {
    Stack s;
    char str[20];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
        s.push(str[i]);

    cout << "Reversed string: ";
    while (!s.isEmpty())
        cout << s.pop();
    cout << endl;

    return 0;
}
