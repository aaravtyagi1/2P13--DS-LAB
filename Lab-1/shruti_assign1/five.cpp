#include <iostream>
using namespace std;

int main() {
    int a[10][10], r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cin >> a[i][j];
        }
    }

    cout << "\nSum of each row:\n";
    for (int i = 0; i < r; i++) 
    {
        int sum = 0;
        for (int j = 0; j < c; j++) 
        {
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    cout << "\nSum of each column:\n";
    for (int j = 0; j < c; j++) 
    {
        int sum = 0;
        for (int i = 0; i < r; i++) 
        {
            sum += a[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }

  return 0;
}