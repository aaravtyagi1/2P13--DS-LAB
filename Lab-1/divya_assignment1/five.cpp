#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, x;

    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> x;

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nSum of each row:\n";
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < x; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    cout << "\nSum of each column:\n";
    for (int j = 0; j < x; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }

    return 0;
}