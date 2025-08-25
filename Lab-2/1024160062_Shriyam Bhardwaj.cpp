// Q1 BINARY SEARCH
#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  // middle index

        if (arr[mid] == target) {
            return mid;  // found
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // search right half
        }
        else {
            high = mid - 1; 
        }
    }
    return -1;  // not found
}

int main() {
    int arr[] = {2, 5, 7, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}



// Q2 BUBBLE SORT 

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

//Q3 A) LINEAR SEARCH

#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6;

    cout << "Missing number (Linear): " << findMissingLinear(arr, n) << endl;
    return 0;
}


///Q3 B)

#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; 

    while (low <= high) {
        int mid = (low + high) / 2;

        
        if (arr[mid] == mid + 1) {
        
            low = mid + 1;
        } else {
            
            high = mid - 1;
        }
    }
    return low + 1; 
}

int main() {
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6;

    cout << "Missing number (Binary Search): " << findMissingBinary(arr, n) << endl;
    return 0;
}



//Q4 A)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    str1 += str2; 
    cout << "Concatenated String: " << str1 << endl;

    return 0;
}


//B)

4b)#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end()); 
    cout << "Reversed String: " << str << endl;

    return 0;
}

//C)

4c)#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }

    cout << "String without vowels: " << result << endl;
    return 0;
}

//D)

4d)#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); 

    string arr[100];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr, arr + n); 

    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

//E)

4e)#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    cout << "Lowercase: " << char(tolower(ch)) << endl;

    return 0;
}


//Q5 A)

#include <iostream>
using namespace std;

class Diagonal {
    int n;
    int *A; 
public:
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x) {
        if (i == j) A[i-1] = x; 
    }
    int get(int i, int j) {
        if (i == j) return A[i-1];
        else return 0;
    }
    void display() {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                if (i==j) cout << A[i-1] << " ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
};

//B) 
class TriDiagonal {
    int n;
    int *A;
public:
    TriDiagonal(int n) {
        this->n = n;
        A = new int[3*n-2];
    }
    void set(int i, int j, int x) {
        if (i-j == 0) A[n-1 + i-1] = x;     
        else if (i-j == 1) A[i-2] = x;     
        else if (j-i == 1) A[2*n-1 + i-1] = x; 
    }
    int get(int i, int j) {
        if (i-j == 0) return A[n-1 + i-1];
        else if (i-j == 1) return A[i-2];
        else if (j-i == 1) return A[2*n-1 + i-1];
        else return 0;
    }
    void display() {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};


//C)

class LowerTriangular {
    int n;
    int *A;
public:
    LowerTriangular(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i >= j) A[i*(i-1)/2 + (j-1)] = x;
    }
    int get(int i, int j) {
        if (i >= j) return A[i*(i-1)/2 + (j-1)];
        else return 0;
    }
    void display() {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

//D)
class UpperTriangular {
    int n;
    int *A;
public:
    UpperTriangular(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i <= j) A[(j*(j-1))/2 + (i-1)] = x;
    }
    int get(int i, int j) {
        if (i <= j) return A[(j*(j-1))/2 + (i-1)];
        else return 0;
    }
    void display() {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

//E)

class Symmetric {
    int n;
    int *A;
public:
    Symmetric(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i >= j) A[i*(i-1)/2 + (j-1)] = x;
        else A[j*(j-1)/2 + (i-1)] = x; 
    }
    int get(int i, int j) {
        if (i >= j) return A[i*(i-1)/2 + (j-1)];
        else return A[j*(j-1)/2 + (i-1)];
    }
    void display() {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};



//Q6)
#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

struct SparseMatrix {
    int rows, cols, terms;
    Term data[100]; // adjust size if needed
};

// Function to read sparse matrix
void readMatrix(SparseMatrix &m) {
    cout << "Enter rows, cols, number of non-zero terms: ";
    cin >> m.rows >> m.cols >> m.terms;

    cout << "Enter row, col, value for each non-zero term:\n";
    for (int i = 0; i < m.terms; i++) {
        cin >> m.data[i].row >> m.data[i].col >> m.data[i].val;
    }
}

// Function to print sparse matrix
void printMatrix(SparseMatrix m) {
    cout << "Row Col Val\n";
    for (int i = 0; i < m.terms; i++) {
        cout << m.data[i].row << "   " << m.data[i].col << "   " << m.data[i].val << "\n";
    }
}

// (a) Transpose
SparseMatrix transpose(SparseMatrix m) {
    SparseMatrix t;
    t.rows = m.cols;
    t.cols = m.rows;
    t.terms = m.terms;

    int k = 0;
    for (int c = 0; c < m.cols; c++) {
        for (int i = 0; i < m.terms; i++) {
            if (m.data[i].col == c) {
                t.data[k].row = m.data[i].col;
                t.data[k].col = m.data[i].row;
                t.data[k].val = m.data[i].val;
                k++;
            }
        }
    }
    return t;
}

// (b) Addition of two matrices
SparseMatrix add(SparseMatrix a, SparseMatrix b) {
    SparseMatrix sum;
    if (a.rows != b.rows || a.cols != b.cols) {
        sum.terms = 0;
        cout << "Matrix dimensions do not match for addition!\n";
        return sum;
    }

    sum.rows = a.rows;
    sum.cols = a.cols;
    int i = 0, j = 0, k = 0;

    while (i < a.terms && j < b.terms) {
        if (a.data[i].row == b.data[j].row && a.data[i].col == b.data[j].col) {
            sum.data[k].row = a.data[i].row;
            sum.data[k].col = a.data[i].col;
            sum.data[k].val = a.data[i].val + b.data[j].val;
            if (sum.data[k].val != 0) k++;
            i++; j++;
        } else if ((a.data[i].row < b.data[j].row) ||
                   (a.data[i].row == b.data[j].row && a.data[i].col < b.data[j].col)) {
            sum.data[k++] = a.data[i++];
        } else {
            sum.data[k++] = b.data[j++];
        }
    }
    while (i < a.terms) sum.data[k++] = a.data[i++];
    while (j < b.terms) sum.data[k++] = b.data[j++];

    sum.terms = k;
    return sum;
}

// (c) Multiplication
SparseMatrix multiply(SparseMatrix a, SparseMatrix b) {
    SparseMatrix prod;
    if (a.cols != b.rows) {
        prod.terms = 0;
        cout << "Matrix dimensions do not match for multiplication!\n";
        return prod;
    }

    prod.rows = a.rows;
    prod.cols = b.cols;
    prod.terms = 0;

    SparseMatrix bT = transpose(b);

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < bT.rows; j++) {
            int sum = 0;
            for (int p = 0; p < a.terms; p++) {
                if (a.data[p].row == i) {
                    for (int q = 0; q < bT.terms; q++) {
                        if (bT.data[q].row == j && a.data[p].col == bT.data[q].col) {
                            sum += a.data[p].val * bT.data[q].val;
                        }
                    }
                }
            }
            if (sum != 0) {
                prod.data[prod.terms].row = i;
                prod.data[prod.terms].col = j;
                prod.data[prod.terms].val = sum;
                prod.terms++;
            }
        }
    }
    return prod;
}


int main() {
    SparseMatrix A, B;
    cout << "Enter first sparse matrix:\n";
    readMatrix(A);
    cout << "Enter second sparse matrix:\n";
    readMatrix(B);

    cout << "\nFirst Matrix:\n"; printMatrix(A);
    cout << "\nSecond Matrix:\n"; printMatrix(B);

    cout << "\nTranspose of First Matrix:\n";
    SparseMatrix AT = transpose(A);
    printMatrix(AT);

    cout << "\nAddition (A+B):\n";
    SparseMatrix C = add(A, B);
    printMatrix(C);

    cout << "\nMultiplication (A*B):\n";
    SparseMatrix D = multiply(A, B);
    printMatrix(D);

    return 0;
}

//Q7)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }

    cout << "Number of inversions = " << count << endl;
    return 0;
}

//Q8)


#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    unordered_set<int> distinct;
    for (int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }

    cout << "Total number of distinct elements = " << distinct.size() << endl;

    return 0;
}
