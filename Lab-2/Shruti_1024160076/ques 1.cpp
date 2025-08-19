#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;  // middle index

        if (arr[mid] == target) 
        {
            return mid;  // found
        }
        else if (arr[mid] < target) 
        {
            low = mid + 1;  // search right half
        }
        else 
        {
            high = mid - 1; // search left half
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