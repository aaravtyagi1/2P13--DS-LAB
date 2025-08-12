// Develop a Menu driven program to demonstrate the following operations of Arrays
// ——MENU——-
// 1.CREATE
// 2. DISPLAY
// 3. INSERT
// 4. DELETE
// 5. LINEAR SEARCH
// 6. EXIT

#include <iostream>
using namespace std;

const int MAX = 100;
int arr[MAX], n = 0; // n = current number of elements

void createArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void displayArray() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertElement() {
    int pos, val;
    cout << "Enter position (0-based index): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
}

void deleteElement() {
    int pos;
    cout << "Enter position to delete (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void linearSearch() {
    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Element not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
