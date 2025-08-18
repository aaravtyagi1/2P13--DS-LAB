//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. Code the Bubble sort with the following elements: 64 34 25 12 22 11 90
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=n-1;i>=0;i--){
        int swaping = 0;
        for(j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                swaping = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swaping == 0){
            break;
        }
    }
}
int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    BubbleSort(arr,n);
    cout << "Sorted Array: ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}