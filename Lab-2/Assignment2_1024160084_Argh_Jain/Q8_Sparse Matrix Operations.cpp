// Name: Argh | Roll No: 1024160084
#include <iostream>
using namespace std;

#define MAX 100

struct Element {
    int row, col, val;
};

struct Sparse {
    int rows, cols, num;
    Element data[MAX];
};

// Transpose
Sparse transpose(Sparse s) {
    Sparse t;
    t.rows = s.cols;
    t.cols = s.rows;
    t.num = s.num;
    int k = 0;
    for (int i = 0; i < s.cols; i++) {
        for (int j = 0; j < s.num; j++) {
            if (s.data[j].col == i) {
                t.data[k].row = s.data[j].col;
                t.data[k].col = s.data[j].row;
                t.data[k].val = s.data[j].val;
                k++;
            }
        }
    }
    return t;
}

int main() {
    Sparse s = {3, 3, 3, {{0,0,1},{1,1,2},{2,2,3}}};
    Sparse t = transpose(s);

    cout << "Transpose: ";
    for (int i = 0; i < t.num; i++)
        cout << "(" << t.data[i].row << "," << t.data[i].col << "," << t.data[i].val << ") ";
    return 0;
}
