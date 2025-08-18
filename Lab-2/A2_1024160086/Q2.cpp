#include <iostream>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag;
    for (int i = 0; i < n-1; i++) {
        flag = true; 
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                flag = false;
                swap(arr[j], arr[j+1]);
            }
        }
        if (flag == true) {
            break; // If no swaps were made, the array is sorted
        }
    }
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}