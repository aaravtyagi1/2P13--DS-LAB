#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX];
int n=0;

void createArray()
 {
    cout << "Enter no. of elements: ";
    cin >> n;
    if (n > MAX) {
        cout << "Enter number < " << MAX << endl;
        n = 0;
        return;
    }
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }
}

void displayArray() 
{
    if (n == 0) {
        cout << "Array is empty\n";
        return;
    }
    for (int i = 0; i < n; i++)
     {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement()
 {
    if (n == MAX)
     {
        cout << "Array is full\n";
        return;
    }
    int pos, val;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    if (pos < 1 || pos > n + 1)
     {
        cout << "Invalid position\n";
        return;
    }
    for (int i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
}

void deleteElement()
 {
    if (n == 0)
     {
        cout << "Nothing to delete\n";
        return;
    }
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    if (pos < 1 || pos > n)
     {
        cout << "Invalid position\n";
        return;
    }
    for (int i = pos - 1; i < n - 1; i++)
     {
        arr[i] = arr[i + 1];
    }
    n--;
}

void linearSearch() 
{
    if (n == 0) 
    {
        cout << "Array is empty\n";
        return;
    }
    int key;
    cout << "Enter value to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key)
         {
            cout << "Found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Not found\n";
}

int main() 
{
    int ch;
    do 
    {
        cout << "\n1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) 
        {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Bye!\n"; break;
            default: cout << "Wrong choice\n";
        }
    } 
    while (ch != 6);
}
