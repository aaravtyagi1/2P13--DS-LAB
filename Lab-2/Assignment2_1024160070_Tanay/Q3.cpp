#include<iostream>
using namespace std;

//A part
// int findMissingLinear(int arr[], int n) {
//     int total = n * (n + 1) / 2;
//     int sum = 0;
//     for(int i = 0; i < n - 1; i++)
//         sum += arr[i];
//     return total - sum;
// }
// int main(){
//     int i,n;
//     cin >> n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int Missing_Number = findMissingLinear(arr,n);
//     cout << "Missing number: " << Missing_Number << endl;
// }

// B PART
// int findMissingBinary(int arr[], int n) {
//     int low = 0, high = n - 2;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == mid + 1)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return low + 1;
// }
// int main(){
//     int i,n;
//     cin >> n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int Missing_Number = findMissingBinary(arr,n);
//     cout << "Missing number: " << Missing_Number << endl;
// }

