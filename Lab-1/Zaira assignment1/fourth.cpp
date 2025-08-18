/* #include <iostream>
 using namespace std;

 int main() {
     int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
     for (int i = 0; i < n; i++) 
     {
         cin >> arr[i];
     }

     for (int i = 0; i < n / 2; i++)
      {
         int temp = arr[i];
        arr[i] = arr[n - i - 1];
         arr[n - i - 1] = temp;
     }

     cout << "Reversed array: ";
     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
     }
    cout << endl;
 }
*/

// #include <iostream>
// using namespace std;

// int main() {
//     int a[10][10], b[10][10], c[10][10];
//     int r1, c1, r2, c2;

//     cout << "Enter rows and columns of first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns of second matrix: ";
//     cin >> r2 >> c2;

//     if (c1 != r2) {
//         cout << "Matrix multiplication not possible.\n";
//         return 0;
//     }

//     cout << "Enter elements of first matrix:\n";
//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c1; j++)
//             cin >> a[i][j];

//     cout << "Enter elements of second matrix:\n";
//     for (int i = 0; i < r2; i++)
//         for (int j = 0; j < c2; j++)
//             cin >> b[i][j];

//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             c[i][j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     cout << "Resultant matrix:\n";
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[10][10], trans[10][10];
//     int r, c;

//     cout << "Enter rows and columns: ";
//     cin >> r >> c;

//     cout << "Enter matrix elements:\n";
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> a[i][j];

//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             trans[j][i] = a[i][j];

//     cout << "Transpose of matrix:\n";
//     for (int i = 0; i < c; i++) {
//         for (int j = 0; j < r; j++) {
//             cout << trans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
