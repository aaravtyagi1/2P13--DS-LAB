//Q1:Implement the Binary search algorithm regarded as a fast search algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search.

#include<bits/stdc++.h>
using namespace std;
int BinarySearchByRecursion(int arr[],int low,int high, int target){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid]==target){
        return mid;
    }
    else if(arr[mid] < target){
        return BinarySearchByRecursion(arr,mid+1,high,target);
    }
    else{
        return BinarySearchByRecursion(arr,low,mid-1,target);
    }
}
int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int me;
    cin >> me;
    int answer = BinarySearchByRecursion(arr,0,n-1,me);
    if(answer == -1){
        cout << "target is not in array\n";
    }
    else{
        cout << "target is at site: " << answer << endl;
    }
}