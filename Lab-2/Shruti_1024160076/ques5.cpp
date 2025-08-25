//5a part
#include <iostream>
using namespace std;

class Diagonal {
    int n;
    int *A; // store only diagonal
public:
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x) {
        if (i == j) A[i-1] = x;  // store only diagonal
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
//5b part
class TriDiagonal {
    int n;
    int *A;
public:
    TriDiagonal(int n) {
        this->n = n;
        A = new int[3*n-2]; // store diagonals
    }
    void set(int i, int j, int x) {
        if (i-j == 0) A[n-1 + i-1] = x;       // main diagonal
        else if (i-j == 1) A[i-2] = x;        // lower diagonal
        else if (j-i == 1) A[2*n-1 + i-1] = x; // upper diagonal
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
//5c part
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
//5d part
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
// 5e part 
class Symmetric 
{
    int n;
    int *A;
public:
    Symmetric(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i >= j) A[i*(i-1)/2 + (j-1)] = x;
        else A[j*(j-1)/2 + (i-1)] = x; // use symmetry
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