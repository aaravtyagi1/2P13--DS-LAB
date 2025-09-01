// Name: Argh Jain
// Roll No: 1024160084
// Program: Menu-driven program for Circular Queue


#include <iostream>
#define SIZE 5
using namespace std;

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    bool isEmpty() { return (front == -1); }
    bool isFull() { return ((rear + 1) % SIZE == front); }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert.\n";
            return;
        }
        if (isEmpty()) front = rear = 0;
        else rear = (rear + 1) % SIZE;
        arr[rear] = x;
        cout << x << " inserted into circular queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to delete.\n";
            return;
        }
        cout << "Removed element: " << arr[front] << endl;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Circular Queue elements are: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }

    void peek() {
        if (!isEmpty())
            cout << "Front element is: " << arr[front] << endl;
        else
            cout << "Queue is Empty!\n";
    }
};

int main() {
    CircularQueue cq;
    int choice, val;

    do {
        cout << "\n--- Circular Queue Menu ---\n";
        cout << "1. Enqueue (Insert)\n2. Dequeue (Delete)\n3. Check if Empty\n4. Check if Full\n5. Display\n6. Peek (Front Element)\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; cq.enqueue(val); break;
            case 2: cq.dequeue(); break;
            case 3: cout << (cq.isEmpty() ? "Queue is Empty\n" : "Queue is NOT Empty\n"); break;
            case 4: cout << (cq.isFull() ? "Queue is Full\n" : "Queue is NOT Full\n"); break;
            case 5: cq.display(); break;
            case 6: cq.peek(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}
