// Name: Argh | Roll No: 1024160084
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> s(arr, arr + n);
    cout << "Total distinct elements: " << s.size();
    return 0;
}
