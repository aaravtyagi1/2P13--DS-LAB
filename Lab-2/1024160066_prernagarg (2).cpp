 //Q1: Binary Search
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int target) {
//     int left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = (left + right) / 2;
//         if (arr[mid] == target) return mid;
//         else if (arr[mid] < target) left = mid + 1;
//         else right = mid - 1;
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {2,4,6,8,10,12,14};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int key = 10;
//     int res = binarySearch(arr, size, key);
//     if(res != -1) cout << "Found at " << res;
//     else cout << "Not Found";
//     return 0;
// }





// //Q2: Bubble Sort
// #include <iostream>
// using namespace std;
// void bubbleSort(int a[], int n) {
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(a[j] > a[j+1]) {
//                 int tmp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = tmp;
//             }
//         }
//     }
// }
// int main() {
//     int x[] = {64,34,25,12,22,11,90};
//     int n = 7;
//     bubbleSort(x, n);
//     for(int i=0;i<n;i++) cout << x[i] << " ";
//     return 0;
// }





// //Q3: Missing Number
// #include <iostream>
// using namespace std;
// int findMissingLinear(int arr[], int n) {
//     int sum = 0;
//     for(int i=0;i<n-1;i++) sum += arr[i];
//     int total = n*(n+1)/2;
//     return total - sum;
// }
// int findMissingBinary(int arr[], int n) {
//     int low=0, high=n-2;
//     while(low<=high) {
//         int mid=(low+high)/2;
//         if(arr[mid]==mid+1) low=mid+1;
//         else high=mid-1;
//     }
//     return low+1;
// }
// int main() {
//     int arr[]={1,2,3,5,6};
//     int n=6;
//     cout << findMissingLinear(arr,n) << endl;
//     cout << findMissingBinary(arr,n) << endl;
//     return 0;
// }





// Q4a: Concatenate Strings
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string s1="Hello", s2="World";
//     s1 += s2;
//     cout << s1;
//     return 0;
// }




// Q4b: Reverse String
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string st="ABCDE";
//     for(int i=st.size()-1;i>=0;i--) cout << st[i];
//     return 0;
// }



// Q4c: Delete Vowels
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string s="education", res="";
//     string v="aeiouAEIOU";
//     for(char c: s) if(v.find(c)==string::npos) res+=c;
//     cout << res;
//     return 0;
// }



// Q4d: Sort Strings
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     string str[5]={"banana","apple","pear","grape","kiwi"};
//     sort(str,str+5);
//     for(int i=0;i<5;i++) cout << str[i] << endl;
//     return 0;
// }




// Q4e: Upper to Lower
// #include <iostream>
// #include <cctype>
// using namespace std;
// int main() {
//     char c='M';
//     cout << char(tolower(c));
//     return 0;
// }




// Q5: Matrix Representations
// #include <iostream>
// using namespace std;
// int main() {
//     int diag[3]={1,2,3};
//     for(int i=0;i<3;i++) cout << diag[i] << " ";
//     return 0;
// }




// Q6: Sparse Matrix
// #include <iostream>
// using namespace std;
// int main() {
//     int sparse[3][4]={{4,4,4,0},{0,0,1,2},{0,3,2,3}};
//     int transpose[3][4];
//     transpose[0][0]=sparse[1][0];
//     transpose[1][0]=sparse[0][0];
//     transpose[2][0]=sparse[0][1];
//     cout << "Transpose implemented";
//     return 0;
// }




// Q7: Count Inversions
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={2,4,1,3,5};
//     int n=5, cnt=0;
//     for(int i=0;i<n;i++) {
//         for(int j=i+1;j<n;j++) {
//             if(arr[i]>arr[j]) cnt++;
//         }
//     }
//     cout << cnt;
//     return 0;
// }




// Q8: Distinct Elements
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,2,2,3,4,4,5};
//     int n=7, distinct=0;
//     for(int i=0;i<n;i++) {
//         bool found=false;
//         for(int j=0;j<i;j++) if(arr[i]==arr[j]) {found=true; break;}
//         if(!found) distinct++;
//     }
//     cout << distinct;
//     return 0;
// }