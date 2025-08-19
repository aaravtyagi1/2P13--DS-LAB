#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements in sorted order: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    int st,end,mid,x,found = 0;
    cout << "Enter the number to search: ";
    cin >> x;
    st=0,end=4;
    while(st < end ){
        mid = (st + end) / 2;
        if (arr[mid]== x) {
            found = 1;
            cout << "Element found at index: " << mid << endl;
           break;
        } else if (arr[mid] < x) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (found == 0) {
        cout << "Element not found" << endl;
    }
    return 0;
}