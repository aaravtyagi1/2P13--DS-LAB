#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    set<int> distinct;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        distinct.insert(arr[i]);
    }

    cout << "Total distinct elements: " << distinct.size() << endl;
}
