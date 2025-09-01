// Name: Argh Jain
// Roll No: 1024160084
// Program: Menu-driven program for Simple Queue


#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return (front == -1); }
    bool isFull() { return (rear == SIZE - 1); }

    // Insert element in queue
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert.\n";
            return;
        }
        if (isEmpty()) front = 0;
        arr[++rear] = x;
        cout << x << " inserted into queue.\n";
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to delete.\n";
            return;
        }
        cout << "Removed element: " << arr[front] << endl;
        if (front == rear) front = rear = -1; // queue becomes empty
        else front++;
    }

    // Show all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Show front element
    void peek() {
        if (!isEmpty())
            cout << "Front element is: " << arr[front] << endl;
        else
            cout << "Queue is Empty!\n";
    }
};

int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue (Insert)\n2. Dequeue (Delete)\n3. Check if Empty\n4. Check if Full\n5. Display\n6. Peek (Front Element)\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
            case 2: q.dequeue(); break;
            case 3: cout << (q.isEmpty() ? "Queue is Empty\n" : "Queue is NOT Empty\n"); break;
            case 4: cout << (q.isFull() ? "Queue is Full\n" : "Queue is NOT Full\n"); break;
            case 5: q.display(); break;
            case 6: q.peek(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}
