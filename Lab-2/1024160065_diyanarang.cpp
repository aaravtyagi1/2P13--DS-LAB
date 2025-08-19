// Q1 BINARY SEARCH
// #include <iostream>
// using namespace std;

// int bsearch(int arr[],int size,int key){
//     int low=0, high=size-1;
    
//     while(low<=high){
//         int mid=low+(high-low)/2;
            // if (arr[mid]==key){
            // return mid;
            // }
            // else if(arr[mid]>key){
            //     high=mid-1;
            // }
            // else{
            //     low=mid+1;
            // }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={2,6,7,12,18,25,34,38,47,49,50,53};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int key;
//     cout<<"enter key"<<endl;
//     cin>>key;

//     int result=bsearch(arr,size,key);

//     if (result!=-1){
//         cout<<"element found at:"<< result<<endl;
//     }
//     else{
//         cout<<"element not found in array"<<endl;
//     }
//     return 0;
// }

// Q2 BUBBLE SORT
// #include <iostream>
// using namespace std;

// int bubblesort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//             int t=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=t;
//             }
//         }
//     } return 0;
// };
// int print(int arr[],int size){
//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[]={64,34,25,12,22,11,90};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     cout<<"array before: "<<endl;
//     print(arr,size);

//     bubblesort(arr,size);

//     cout<<"array after: "<<endl;

//     print(arr,size);
// }

// Q3 MISSING ELEMENT-LINEAR
// #include <iostream>
// using namespace std;

// int missinglinear(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]!=i+1){
//             cout<<"missing element linear: "<<i+1<<endl;
//         }
//     } return 0;
// }


// int missingbinary(int arr[],int size){
//     int low=arr[0],high=size-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if (arr[mid] == mid + 1) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     cout<<"missing element binary: "<<low+1<<endl;
//         return 0;
//     }
    

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,10};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     missinglinear(arr,size);
//     missingbinary(arr,size);
//     return 0;
// }

// Q 4-a
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1, str2;
//     cout << "Enter first string: ";
//     getline(cin, str1);
//     cout << "Enter second string: ";
//     getline(cin, str2);

//     str1 += str2;  
//     cout << "Concatenated string: " << str1 << endl;

//     return 0;
// }

// Q 4-b
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     int n = s.length();
//     cout<<n<<endl;
//     for (int i = 0; i < n / 2; i++) {
        
//         char t = s[i];
//         s[i] = s[n - i - 1];
//         s[n - i - 1] = t;
//     }

//     cout << "Reversed string: " << s << endl;

//     return 0;
// }

// Q 4-c
// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     cin >> str;
//     int i = 0, j = 0;
//     while (str[i] != '\0') {
//         if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
//               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {
//             str[j++] = str[i];
//         }
//         i++;
//     }
//     str[j] = '\0';
//     cout << str;
//     return 0;
// }

// Q4-d
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     char str[10][100], temp[100];
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> str[i];
//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (strcmp(str[i], str[j]) > 0) {
//                 strcpy(temp, str[i]);
//                 strcpy(str[i], str[j]);
//                 strcpy(str[j], temp);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) cout << str[i] << endl;
//     return 0;
// }

// Q4-e
// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cin >> ch;
//     if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
//     cout << ch;
//     return 0;
// }
// Q5-a
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int diag[n];
//     for (int i = 0; i < n; i++) cin >> diag[i];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) cout << diag[i] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q5-b
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int tri[3*n-2];
//     for (int i = 0; i < 3*n-2; i++) cin >> tri[i];
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (abs(i-j) <= 1) cout << tri[k++] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// Q5-c
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int lower[n*(n+1)/2];
//     for (int i = 0; i < n*(n+1)/2; i++) cin >> lower[i];
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i >= j) cout << lower[k++] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// Q5-d
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int upper[n*(n+1)/2];
//     for (int i = 0; i < n*(n+1)/2; i++) cin >> upper[i];
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i <= j) cout << upper[k++] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// Q5-e
// #include <iostream>
// using namespace std;
// int main() {
//     int n;git
//     cin >> n;
//     int sym[n*(n+1)/2];
//     for (int i = 0; i < n*(n+1)/2; i++) cin >> sym[i];
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i >= j) cout << sym[i*(i+1)/2 + j] << " ";
//             else cout << sym[j*(j+1)/2 + i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q6
// #include <iostream>
// using namespace std;

// struct Term {
//     int row, col, val;
// };

// struct SparseMatrix {
//     int rows, cols, numTerms;
//     Term data[100]; 
// };


// void display(SparseMatrix s) {
//     cout << "Row Col Val\n";
//     for (int i = 0; i < s.numTerms; i++) {
//         cout << s.data[i].row << "   " << s.data[i].col << "   " << s.data[i].val << "\n";
//     }
// }


// SparseMatrix transpose(SparseMatrix s) {
//     SparseMatrix t;
//     t.rows = s.cols;
//     t.cols = s.rows;
//     t.numTerms = s.numTerms;

//     int k = 0;
//     for (int i = 0; i < s.cols; i++) {
//         for (int j = 0; j < s.numTerms; j++) {
//             if (s.data[j].col == i) {
//                 t.data[k].row = s.data[j].col;
//                 t.data[k].col = s.data[j].row;
//                 t.data[k].val = s.data[j].val;
//                 k++;
//             }
//         }
//     }
//     return t;
// }

// SparseMatrix add(SparseMatrix a, SparseMatrix b) {
//     SparseMatrix c;
//     if (a.rows != b.rows || a.cols != b.cols) {
//         c.numTerms = 0;
//         cout << "Addition not possible!\n";
//         return c;
//     }

//     c.rows = a.rows;
//     c.cols = a.cols;
//     int i = 0, j = 0, k = 0;

//     while (i < a.numTerms && j < b.numTerms) {
//         if (a.data[i].row < b.data[j].row ||
//            (a.data[i].row == b.data[j].row && a.data[i].col < b.data[j].col)) {
//             c.data[k++] = a.data[i++];
//         } else if (b.data[j].row < a.data[i].row ||
//                   (b.data[j].row == a.data[i].row && b.data[j].col < a.data[i].col)) {
//             c.data[k++] = b.data[j++];
//         } else {
//             c.data[k] = a.data[i];
//             c.data[k].val = a.data[i].val + b.data[j].val;
//             i++; j++; k++;
//         }
//     }
//     while (i < a.numTerms) c.data[k++] = a.data[i++];
//     while (j < b.numTerms) c.data[k++] = b.data[j++];

//     c.numTerms = k;
//     return c;
// }


// SparseMatrix multiply(SparseMatrix a, SparseMatrix b) {
//     SparseMatrix c;
//     if (a.cols != b.rows) {
//         c.numTerms = 0;
//         cout << "Multiplication not possible!\n";
//         return c;
//     }

//     c.rows = a.rows;
//     c.cols = b.cols;
//     c.numTerms = 0;

//     for (int i = 0; i < a.numTerms; i++) {
//         for (int j = 0; j < b.numTerms; j++) {
//             if (a.data[i].col == b.data[j].row) {
//                 int r = a.data[i].row;
//                 int ccol = b.data[j].col;
//                 int val = a.data[i].val * b.data[j].val;

              
//                 int found = 0;
//                 for (int k = 0; k < c.numTerms; k++) {
//                     if (c.data[k].row == r && c.data[k].col == ccol) {
//                         c.data[k].val += val;
//                         found = 1;
//                         break;
//                     }
//                 }
//                 if (!found) {
//                     c.data[c.numTerms].row = r;
//                     c.data[c.numTerms].col = ccol;
//                     c.data[c.numTerms].val = val;
//                     c.numTerms++;
//                 }
//             }
//         }
//     }
//     return c;
// }

// int main() {
//     SparseMatrix a = {3, 3, 3, {{0,0,5}, {1,1,8}, {2,2,3}}};
//     SparseMatrix b = {3, 3, 3, {{0,0,4}, {1,2,7}, {2,1,6}}};

//     cout << "Matrix A:\n"; display(a);
//     cout << "Matrix B:\n"; display(b);

//     cout << "\nTranspose of A:\n";
//     SparseMatrix t = transpose(a);
//     display(t);

//     cout << "\nAddition (A+B):\n";
//     SparseMatrix addRes = add(a, b);
//     display(addRes);

//     cout << "\nMultiplication (A*B):\n";
//     SparseMatrix mulRes = multiply(a, b);
//     display(mulRes);

//     return 0;
// }


// Q7
// #include <iostream>
// using namespace std;

// long long merge(int arr[], int temp[], int left, int mid, int right) {
//     int i = left, j = mid, k = left;
//     long long invCount = 0;

//     while (i <= mid - 1 && j <= right) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//             invCount += (mid - i);
//         }
//     }

//     while (i <= mid - 1) temp[k++] = arr[i++];
//     while (j <= right) temp[k++] = arr[j++];

//     for (i = left; i <= right; i++) arr[i] = temp[i];

//     return invCount;
// }

// long long mergeSort(int arr[], int temp[], int left, int right) {
//     long long invCount = 0;
//     if (right > left) {
//         int mid = (left + right) / 2;
//         invCount += mergeSort(arr, temp, left, mid);
//         invCount += mergeSort(arr, temp, mid + 1, right);
//         invCount += merge(arr, temp, left, mid + 1, right);
//     }
//     return invCount;
// }

// long long countInversions(int arr[], int n) {
//     int temp[100];
//     return mergeSort(arr, temp, 0, n - 1);
// }

// int main() {
//     int arr[100], n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     cout << "Number of inversions = " << countInversions(arr, n) << endl;
//     return 0;
// }

// Q8
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100], n;
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int flag = 0;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) count++;
//     }

//     cout << count << endl;
//     return 0;
// }



