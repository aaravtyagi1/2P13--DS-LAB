#include<iostream>
using namespace std;

class MyStack {  
    int *arr;
    int size, top;
    
public:
    MyStack(int s) {  
        size = s;
        top = -1;
        arr = new int[s];
    }
    
    ~MyStack() {  
        delete[] arr;
    }
    
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack overflow\n";
            return;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed: " << value << endl;
        }
    }
    
    void pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
        } else {
            int value = arr[top];
            top--;
            cout << "Popped: " << value << endl;
        }
    }
    
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }
    
    bool isEmpty() {
        return top == -1;
    }
    
    bool isFull() {
        return top == size - 1;
    }
    
    
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyStack s(5); 
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout << "Top element: " << s.peek() << endl;
    
    s.pop();
    s.pop();
    
    cout << "Is empty: " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is full: " << (s.isFull() ? "Yes" : "No") << endl;
    
    s.display();

    return 0;
}