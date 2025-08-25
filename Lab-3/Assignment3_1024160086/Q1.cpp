#include<iostream>
using namespace std;
class stack{
    int arr[5];
    int top;
  public:
    stack(){
      top = -1;
    }
    bool isFull(){
      return top == 4;
    }
    bool isEmpty(){
      return top == -1;
    }
    void push(int val){
      if(isFull()){
        cout << "Stack Overflow" << endl;
        return;
      }
      else{
        top++;
        arr[top] = val;
      }
    }
    void pop(){
      if(isEmpty()){
        cout << "Stack Underflow" << endl;
        return;
      }
      else{
        top--;
      }
    }
    void peek(){
      if(isEmpty()){
        cout << "Stack is empty" << endl;
        return;
      }
      else{
        cout << arr[top] << endl;
      }
    }
    void display(){
      if(isEmpty()){
        cout << "Stack is empty" << endl;
        return;
      }
      else{
        for(int i = top ; i >= 0 ; i--){
          cout << arr[i] << " ";
        }
        cout << endl;
      }
    }
};
int main(){
    stack s;
    int choice, val;
    while(true){
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout<< "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                if(s.isEmpty())
                    cout << "Stack is empty" << endl;
                else
                    cout <<"stck is not empty" << endl;
                break;
            case 5:
                if(s.isFull())
                    cout << "Stack is full" << endl;
                else
                    cout << "Stack is not full" << endl;
                break;
            case 6:
                s.display();
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }
}