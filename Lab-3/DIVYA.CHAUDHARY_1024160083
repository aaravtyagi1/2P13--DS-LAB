//Q1

#include <iostream>
using namespace std;

#define MAX 5   

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

  
    bool isEmpty() {
        return (top == -1);
    }

   
    bool isFull() {
        return (top == MAX - 1);
    }

   
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    // Peek operation
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main program with menu
int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            if (s.isEmpty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;
            break;
        case 5:
            if (s.isFull())
                cout << "Stack is full." << endl;
            else
                cout << "Stack is not full." << endl;
            break;
        case 6:
            s.display();
            break;
        case 7:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}


// Q2

#include <iostream>
#include <cstring>   // for strlen
using namespace std;

#define MAX 100

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(char c) {
        if (!isFull())
            arr[++top] = c;
    }

    char pop() {
        if (!isEmpty())
            return arr[top--];
        return '\0'; // return null char if empty
    }
};




//Q3

#include <iostream>
#include <stack>
using namespace std;

// Function to check if brackets match
bool isMatchingPair(char open, char close) {
    return ((open == '(' && close == ')') ||
            (open == '{' && close == '}') ||
            (open == '[' && close == ']'));
}

// Function to check if expression is balanced
bool isBalanced(string expr) {
    stack<char> s;

    for (char ch : expr) {
        // If opening bracket → push
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If closing bracket → check top
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || !isMatchingPair(s.top(), ch)) {
                return false; // mismatch found
            }
            s.pop();
        }


//Q4

#include <iostream>
#include <stack>
#include <cctype>   // for isalnum
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to check associativity (only ^ is right associative)
bool isRightAssociative(char op) {
    return (op == '^');
}

// Function to convert Infix to Postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char ch : infix) {
        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix += ch;
        }
        // If '(', push
        else if (ch == '(') {
            s.push(ch);
        }
        // If ')', pop until '('
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(')
                s.pop(); // remove '('
        }
        // If operator
        else {
            while (!s.empty() && precedence(s.top()) > 0) {
                if ((precedence(s.top()) > precedence(ch)) ||
                    (precedence(s.top()) == precedence(ch) && !isRightAssociative(ch))) {
                    postfix += s.top();
                    s.pop();
                } else break;
            }
            s.push(ch);
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}


//Q5
#include <iostream>
#include <stack>
#include <cctype>  // for isdigit
using namespace std;

// Function to evaluate Postfix expression
int evaluatePostfix(string exp) {
    stack<int> s;

    for (char ch : exp) {
        // If operand (single digit), push into stack
        if (isdigit(ch)) {
            s.push(ch - '0');  // convert char to int
        }
        // If operator, pop two operands and apply operator
        else {
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();

            switch (ch) {
                case '+': s.push(val2 + val1); break;
                case '-': s.push(val2 - val1); break;
                case '*': s.push(val2 * val1); break;
                case '/': s.push(val2 / val1); break;
                case '^': {
                    int res = 1;
                    for (int i = 0; i < val1; i++) res *= val2;
                    s.push(res);
                    break;
                }
            }
        }
    }

    return s.top(); // final result
}

int main() {
    string exp;
    cout << "Enter Postfix Expression: ";
    cin >> exp;

    cout << "Result = " << evaluatePostfix(exp) << endl;
    return 0;
}
