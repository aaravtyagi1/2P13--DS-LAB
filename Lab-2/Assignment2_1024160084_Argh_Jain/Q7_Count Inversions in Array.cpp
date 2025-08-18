// Name: Argh | Roll No: 1024160084
#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, k = left, inv = 0;
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            inv += (mid - i);
        }
    }
    while (i <= mid - 1) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left; i <= right; i++) arr[i] = temp[i];
    return inv;
}

int mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv = 0;
    if (left < right) {
        mid = (left + right) / 2;
        inv += mergeSort(arr, temp, left, mid);
        inv += mergeSort(arr, temp, mid + 1, right);
        inv += merge(arr, temp, left, mid + 1, right);
    }
    return inv;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[ n ];
    cout << "Inversions: " << mergeSort(arr, temp, 0, n - 1);
    return 0;
}
