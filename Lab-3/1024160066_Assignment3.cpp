// Q1.
#include <iostream>
using namespace std;

const int maximumStackCapacity = 100;
int dataArray[maximumStackCapacity];
int currentTopIndex = -1;

void pushElement(int value) {
    if (currentTopIndex == maximumStackCapacity - 1) {
        cout << "Error: Stack has reached maximum capacity!" << endl;
        return;
    }
    currentTopIndex++;
    dataArray[currentTopIndex] = value;
    cout << "Successfully added " << value << " to the stack." << endl;
}

void popElement() {
    if (currentTopIndex == -1) {
        cout << "Error: Cannot remove from an empty stack!" << endl;
        return;
    }
    cout << "Removed " << dataArray[currentTopIndex] << " from the stack." << endl;
    currentTopIndex--;
}

bool checkIfStackEmpty() {
    return currentTopIndex == -1;
}

bool checkIfStackFull() {
    return currentTopIndex == maximumStackCapacity - 1;
}

void displayAllElements() {
    if (checkIfStackEmpty()) {
        cout << "The stack contains no elements." << endl;
        return;
    }
    cout << "Current stack contents (top to bottom): ";
    for (int position = currentTopIndex; position >= 0; position--) {
        cout << dataArray[position] << " ";
    }
    cout << endl;
}

void peekTopElement() {
    if (checkIfStackEmpty()) {
        cout << "No elements available - stack is empty." << endl;
        return;
    }
    cout << "Element at the top: " << dataArray[currentTopIndex] << endl;
}

int main() {
    int userMenuChoice, inputNumber;

    while (true) {
        cout << "\n--- Stack Management System ---" << endl;
        cout << "1. Add Element (Push)" << endl;
        cout << "2. Remove Element (Pop)" << endl;
        cout << "3. Verify Empty Status" << endl;
        cout << "4. Verify Full Status" << endl;
        cout << "5. Show All Elements" << endl;
        cout << "6. View Top Element" << endl;
        cout << "7. Quit Program" << endl;
        cout << "Select an option: ";
        cin >> userMenuChoice;

        switch (userMenuChoice) {
            case 1:
                cout << "Enter value to add: ";
                cin >> inputNumber;
                pushElement(inputNumber);
                break;

            case 2:
                popElement();
                break;

            case 3:
                if (checkIfStackEmpty()) {
                    cout << "Confirmed: Stack contains no elements." << endl;
                } else {
                    cout << "Stack has elements present." << endl;
                }
                break;

            case 4:
                if (checkIfStackFull()) {
                    cout << "Confirmed: Stack has reached maximum capacity." << endl;
                } else {
                    cout << "Stack has available space." << endl;
                }
                break;

            case 5:
                displayAllElements();
                break;

            case 6:
                peekTopElement();
                break;

            case 7:
                cout << "Terminating application..." << endl;
                return 0;

            default:
                cout << "Invalid selection! Choose options 1-7 only." << endl;
        }
    }

    return 0;
}
// Q2.
// #include <iostream>
// #include <string>
// using namespace std;

// const int maximumStackSize = 1000;
// char characterStack[maximumStackSize];
// int topIndex = -1;

// void pushCharacter(char letter) {
//     if (topIndex == maximumStackSize - 1) {
//         cout << "Stack overflow! Cannot add more characters." << endl;
//         return;
//     }
//     topIndex++;
//     characterStack[topIndex] = letter;
// }

// char popCharacter() {
//     if (topIndex == -1) {
//         cout << "Stack underflow! No characters to remove." << endl;
//         return '\0';
//     }
//     char removedCharacter = characterStack[topIndex];
//     topIndex--;
//     return removedCharacter;
// }

// bool isStackEmpty() {
//     return topIndex == -1;
// }

// string reverseStringUsingStack(string originalText) {
//     string reversedText = "";

//     for (int index = 0; index < originalText.length(); index++) {
//         pushCharacter(originalText[index]);
//     }

//     while (!isStackEmpty()) {
//         reversedText += popCharacter();
//     }

//     return reversedText;
// }

// int main() {
//     string inputString;
//     string outputString;

//     cout << "=== String Reversal using Stack ===" << endl;
//     cout << "Enter the string to reverse: ";
//     getline(cin, inputString);

//     outputString = reverseStringUsingStack(inputString);

//     cout << "Original string: " << inputString << endl;
//     cout << "Reversed string: " << outputString << endl;

//     return 0;
// }
// Q3.
// #include <iostream>
// #include <string>
// #include <stack>

// using namespace std;

// bool isOpeningBracket(char character) {
//     return character == '(' || character == '[' || character == '{';
// }

// bool isClosingBracket(char character) {
//     return character == ')' || character == ']' || character == '}';
// }

// bool isMatchingPair(char openBracket, char closeBracket) {
//     return (openBracket == '(' && closeBracket == ')') ||
//            (openBracket == '[' && closeBracket == ']') ||
//            (openBracket == '{' && closeBracket == '}');
// }

// bool checkBalancedParentheses(const string& inputExpression) {
//     stack<char> bracketStack;

//     for (char currentCharacter : inputExpression) {
//         if (isOpeningBracket(currentCharacter)) {
//             bracketStack.push(currentCharacter);
//         } else if (isClosingBracket(currentCharacter)) {
//             if (bracketStack.empty()) {
//                 return false;
//             }

//             char poppedBracket = bracketStack.top();
//             bracketStack.pop();

//             if (!isMatchingPair(poppedBracket, currentCharacter)) {
//                 return false;
//             }
//         }
//     }
    
//     return bracketStack.empty();
// }

// int main() {
//     string userExpression;
    
//     cout << "Balanced Parentheses Checker" << endl;
//     cout << "Enter an expression to check: ";
//     getline(cin, userExpression);
    
//     if (checkBalancedParentheses(userExpression)) {
//         cout << "Result: The expression has balanced parentheses." << endl;
//     } else {
//         cout << "Result: The expression does NOT have balanced parentheses." << endl;
//     }
    
//     cout << "Expression checked: \"" << userExpression << "\"" << endl;
    
//     return 0;
// }
// Q4.
// #include <iostream>
// #include <string>
// using namespace std;

// const int maximumStackSize = 500;
// char operatorStack[maximumStackSize];
// int stackTopIndex = -1;

// void pushOperator(char operatorSymbol) {
//     if (stackTopIndex == maximumStackSize - 1) {
//         cout << "Stack overflow! Too many operators." << endl;
//         return;
//     }
//     stackTopIndex++;
//     operatorStack[stackTopIndex] = operatorSymbol;
// }

// char popOperator() {
//     if (stackTopIndex == -1) {
//         return '\0';
//     }
//     char removedOperator = operatorStack[stackTopIndex];
//     stackTopIndex--;
//     return removedOperator;
// }

// char peekTopOperator() {
//     if (stackTopIndex == -1) {
//         return '\0';
//     }
//     return operatorStack[stackTopIndex];
// }

// bool isStackEmpty() {
//     return stackTopIndex == -1;
// }

// bool isOperand(char character) {
//     return (character >= 'a' && character <= 'z') || 
//            (character >= 'A' && character <= 'Z') ||
//            (character >= '0' && character <= '9');
// }

// bool isOperator(char character) {
//     return character == '+' || character == '-' || 
//            character == '*' || character == '/' ||
//            character == '^';
// }

// int getOperatorPrecedence(char operatorSymbol) {
//     if (operatorSymbol == '+' || operatorSymbol == '-') {
//         return 1;
//     }
//     if (operatorSymbol == '*' || operatorSymbol == '/') {
//         return 2;
//     }
//     if (operatorSymbol == '^') {
//         return 3;
//     }
//     return 0;
// }

// bool isRightAssociative(char operatorSymbol) {
//     return operatorSymbol == '^';
// }

// string convertInfixToPostfix(string infixExpression) {
//     string postfixResult = "";
    
//     for (int index = 0; index < infixExpression.length(); index++) {
//         char currentSymbol = infixExpression[index];
        
//         if (currentSymbol == ' ') {
//             continue;
//         }
        
//         if (isOperand(currentSymbol)) {
//             postfixResult += currentSymbol;
//         }
//         else if (currentSymbol == '(') {
//             pushOperator(currentSymbol);
//         }
//         else if (currentSymbol == ')') {
//             while (!isStackEmpty() && peekTopOperator() != '(') {
//                 postfixResult += popOperator();
//             }
//             popOperator();
//         }
//         else if (isOperator(currentSymbol)) {
//             while (!isStackEmpty() && peekTopOperator() != '(' &&
//                    ((getOperatorPrecedence(peekTopOperator()) > getOperatorPrecedence(currentSymbol)) ||
//                     (getOperatorPrecedence(peekTopOperator()) == getOperatorPrecedence(currentSymbol) && 
//                      !isRightAssociative(currentSymbol)))) {
//                 postfixResult += popOperator();
//             }
//             pushOperator(currentSymbol);
//         }
//     }
    
//     while (!isStackEmpty()) {
//         postfixResult += popOperator();
//     }
    
//     return postfixResult;
// }

// int main() {
//     string userInfixExpression;
//     string resultPostfixExpression;
    
//     cout << "=== Infix to Postfix Expression Converter ===" << endl;
//     cout << "Enter infix expression: ";
//     getline(cin, userInfixExpression);
    
//     resultPostfixExpression = convertInfixToPostfix(userInfixExpression);
    
//     cout << "Original infix expression: " << userInfixExpression << endl;
//     cout << "Converted postfix expression: " << resultPostfixExpression << endl;
    
//     return 0;
// }
// Q5.
// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// #define MAX_STACK_SIZE 100

// void evaluatePostfix() {
//     string postfixExpression;
//     int stack[MAX_STACK_SIZE];
//     int top = -1;

//     int i, number1, number2, result;

//     cout << "Enter a postfix expression (use spaces between numbers and operators): ";
//     getline(cin, postfixExpression);

//     for (i = 0; i < postfixExpression.length(); i++) {
//         char currentChar = postfixExpression[i];

//         if (isspace(currentChar)) {
//             continue;
//         }

//         else if (isdigit(currentChar)) {
//             int number = 0;
//             while (i < postfixExpression.length() && isdigit(postfixExpression[i])) {
//                 number = number * 10 + (postfixExpression[i] - '0');
//                 i++;
//             }
//             i--;
            
//             if (top >= MAX_STACK_SIZE - 1) {
//                 cout << "Error: Stack overflow." << endl;
//                 return;
//             }
//             stack[++top] = number;
//         }
        
//         else {
//             if (top < 1) {
//                 cout << "Error: Invalid expression or not enough operands for operator '" << currentChar << "'" << endl;
//                 return;
//             }
            
//             number2 = stack[top--];
//             number1 = stack[top--];

//             switch (currentChar) {
//                 case '+': result = number1 + number2; break;
//                 case '-': result = number1 - number2; break;
//                 case '*': result = number1 * number2; break;
//                 case '/':
//                     if (number2 == 0) {
//                         cout << "Error: Division by zero." << endl;
//                         return;
//                     }
//                     result = number1 / number2;
//                     break;
//                 default:
//                     cout << "Error: Invalid operator encountered: " << currentChar << endl;
//                     return;
//             }
            
//             stack[++top] = result;
//         }
//     }

//     if (top == 0) {
//         cout << "Result of postfix expression = " << stack[top] << endl;
//     } else {
//         cout << "Error: Invalid expression. The stack has " << top + 1 << " items left." << endl;
//     }
// }

// int main() {
//     evaluatePostfix();
//     return 0;
// }