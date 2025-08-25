#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    char* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new char[capacity];
        top = -1;
    }
    void push(char c) {
        if (top < capacity - 1) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0';
    }

    bool isEmpty() {
        return top == -1;
    }
};

string reverseString(string str) {
    Stack s(str.length());
    
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    
    string reversed = "";
    while (!s.isEmpty()) {
        reversed += s.pop();
    }
    
    return reversed;
}

int main() {
    string input = "DataStructure";
    string result = reverseString(input);
    cout << result << endl;
    return 0;
}