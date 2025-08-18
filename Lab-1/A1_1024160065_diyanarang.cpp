//Q1

// #include <iostream>
// using namespace std;

// const int MAX = 100;
// int arr[MAX];
// int size = 0;

// int create() {
//     cout << "Enter number of elements: ";
//     cin >> size;

//     if (size > MAX || size < 1) {
//         cout << "Enter a valid input (under 100)" << MAX << ")\n";
//         size = 0;
//     } else {
//         cout << "Enter array elements:\n";
//         for (int i = 0; i < size; i++) {
//             cin >> arr[i];
//         }
//     }
//     return 0;
// }

// int display() {
//     if (size == 0) {
//         cout << "Array is empty\n";
//     } else {
//         cout << "Array elements: ";
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// int insert() {
//     if (size == MAX) {
//         cout << "Array is full. Cannot insert more elements.\n";
//         return 0;
//     }
//     int pos, val;
//     cout << "Enter position to insert (1 to " << size + 1 << "): ";
//     cin >> pos;
//     if (pos < 1 || pos > size + 1) {
//         cout << "Invalid position\n";
//         return 0;
//     }
//     cout << "Enter value to insert: ";
//     cin >> val;
//     for (int i = size; i >= pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos - 1] = val;
//     size++;
//     cout << "Element inserted.\n";
//     return 0;
// }

// int deleteElement() {
//     if (size == 0) {
//         cout << "Array is empty. Nothing to delete.\n";
//         return 0;
//     }
//     int pos;
//     cout << "Enter position to delete (1 to " << size << "): ";
//     cin >> pos;
//     if (pos < 1 || pos > size) {
//         cout << "Invalid position\n";
//         return 0;
//     }
//     for (int i = pos - 1; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     size--;
//     cout << "Element deleted.\n";
//     return 0;
// }

// int linearSearch() {
//     if (size == 0) {
//         cout << "Array is empty\n";
//         return 0;
//     }
//     int val;
//     cout << "Enter value to search: ";
//     cin >> val;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == val) {
//             cout << "Element found at position " << i + 1 << "\n";
//             return 0;
//         }
//     }
//     cout << "Element not found\n";
//     return 0;
// }

// int main() {
//     int option;
//     do {
//         cout << "MENU\n";
//         cout << "1. CREATE\n";
//         cout << "2. DISPLAY\n";
//         cout << "3. INSERT\n";
//         cout << "4. DELETE\n";
//         cout << "5. LINEAR SEARCH\n";
//         cout << "6. EXIT\n";
//         cout << "Enter your choice: ";
//         cin >> option;
//         switch (option) {
//             case 1: create();
//             break;
//             case 2: display();
//             break;
//             case 3: insert();
//             break;
//             case 4: deleteElement();
//             break;
//             case 5: linearSearch();
//             break;
//             case 6: cout << "Exiting program.\n";
//             break;
//             default: cout << "Invalid choice. Try again.\n";
//         }
//     } while (option != 6);
//     return 0;
// }

//Q2

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100], n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for(int i=0;i< n;i++){
//         for (int  j=i+1;j<n;j++){
//             if (arr[i]==arr[j]){
//                  for(int k=j;k<n-1;k++){ 
//                  arr[k]=arr[k+1];
//                  }
//                    n--; j--;
//             }
//         }
//     }

//     cout<<"Array after removing the duplicates: "<<endl;
//     for (int i = 0; i < n; i++) 
//     {
//         cout << arr[i] << " ";
//     }
// }

//Q3
// 10000

//Q4-a
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int arr[100], n, k;
//      cout<<"enter no of elemets"<<endl;
//      cin>>n;
//      cout<<"enter array elements"<<endl;
//      for(int i=0;i<n;i++){ 
//             cin>>arr[i];
// }
//      for(int i=0;i<n/2;i++){
//         k=arr[i]; 
//         arr[i]=arr[n-1-i]; 
//         arr[n-1-i]=k;
//      }
//      for(int i=0;i<n;i++) {
//      cout<<arr[i]<<" ";
//      }
//      return 0;
//  }


// Q4-b
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


//Q4-c
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

//Q5
// #include <iostream>
// using namespace std;

// int main() {
//     int r,c;
//     cout << "Enter number of rows and columns: ";
//     cin >> r >> c;

//     int arr[100][100];

//     cout << "Enter the elements of the array:\n";
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int rowsum = 0;
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             rowsum += arr[i][j];
//         }
//         cout << "Sum of row " << i+1 << " = " << rowsum << endl;
//     }
//     int colsum = 0;
//     for(int j = 0; j < c; j++) {
//         for(int i = 0; i < r; i++) {
//             colsum += arr[i][j];
//         }
//         cout << "Sum of column " << j+1 << " = " << colsum << endl;
//     }

//     return 0;
// }