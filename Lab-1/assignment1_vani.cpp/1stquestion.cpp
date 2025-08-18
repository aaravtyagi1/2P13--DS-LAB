#include<iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n = 0; 
void createArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout<< "enter" << n << "elements : " ; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void displayArray() {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertelement(){
    if(n>=MAX){
        cout<<"array is full , cant insert";
        return;
    }

    int pos, val;
 cout << "Enter position (1 to " << n+1 << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

     if (pos < 1 || pos > n+1) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;
    cout << "Element inserted.\n";

}
void deleteelement(){
    if (n == 0) {
        cout << "Array is empty ,Cannot delete.\n";
        return;
    }
    int pos;
    cout << "Enter position (1 to " << n << "): ";
    cin >> pos;
     if (pos < 1 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Element deleted.\n";
}
void linearsearch(){
    int key;
    cin>>key;
    bool found = false;
    for(int i=0; i<n;i++){
        if(arr[i]==key){
             cout << "Element found at position " << i+1 << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Element not found!";
    }
}
int main(){
    int choice;
    cout << "1. CREATE" << endl;
cout << "2. DISPLAY" << endl;
cout << "3. INSERT" << endl;
cout << "4. DELETE" << endl;
cout << "5. LINEAR SEARCH" << endl;
cout << "6. EXIT" << endl;
    cout << "Enter choice: ";
    cin >> choice;

     switch (choice) {
        case 1: createArray(); break;
        case 2: displayArray(); break;
        case 3: insertelement(); break;
        case 4: deleteelement(); break;
        case 5: linearsearch(); break;
}
     return 0;
}
