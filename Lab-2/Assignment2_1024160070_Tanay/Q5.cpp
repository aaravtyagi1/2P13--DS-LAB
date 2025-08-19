#include<iostream>
using namespace std;

//A part(Diagonal Matrix)
// int main(){
//     int i,n;
//     cin >> n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 cout << arr[i] << " ";
//             }
//             else{
//                 cout << "0 ";
//             }
//         }
//         cout << "\n";
//     }
// }

//B part(Triagonal Matrix)
// int main(){
//     int i,n,k=0;
//     cin >> n;
//     int arr[n];
//     for(i=0;i<3*n-2;i++){
//         cin >> arr[i];
//     }
//     for(i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if((i-j==1)||(i-j==-1)||(i==j)){
//                 cout << arr[k] << " ";
//                 k++;
//             }
//             else{
//                 cout << "0 ";
//             }
//         }
//         cout << "\n";
//     }
// }

//C part(Lower triangular Matrix.)
// int main()
// {
//     int i,j,k=0,n;
//     cin >> n;
//     int size = (n*(n+1))/2;
//     int arr[size];
//     for(i=0;i<size;i++){
//         cin >> arr[i];
//     }
//     cout << "\n";
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i>=j){
//                 cout << arr[k] << " ";
//                 k++;
//             }
//             else{
//                 cout << "0 ";
//             }
//         }
//         cout << "\n";
//     }
// }

//D part(Upper triangular Matrix.)
// int main()
// {
//     int i,j,k=0,n;
//     cin >> n;
//     int size = (n*(n+1))/2;
//     int arr[size];
//     for(i=0;i<size;i++){
//         cin >> arr[i];
//     }
//     cout << "\n";
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i<=j){
//                 cout << arr[k] << " ";
//                 k++;
//             }
//             else{
//                 cout << "0 ";
//             }
//         }
//         cout << "\n";
//     }
// }


// int main() {
//     int n = 4; 
//     int size = n * (n + 1) / 2;
//     int A[size];  
//     int k;
//     cout << "Enter elements for upper triangle (i <= j):\n";
//     k = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j++) {
//             cout << "Element [" << i << "," << j << "]: ";
//             cin >> A[k++];
//         }
//     }
//     cout << "\nSymmetric Matrix:\n";
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             int row = i, col = j;
//             if (i > j) swap(row, col);
//             int index = ((row - 1) * (2 * n - row + 2)) / 2 + (col - row);
//             cout << A[index] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
