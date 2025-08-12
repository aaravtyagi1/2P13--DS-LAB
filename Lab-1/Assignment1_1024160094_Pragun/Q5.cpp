#include <iostream>
using namespace std;
int main(){
    int r,c;
    int arr[10][10];

    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;

    cout<<"Enter elements of the matrix: "<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<r;i++) {
        int rSum = 0;
        for(int j = 0;j<c;j++){
            rSum += arr[i][j];
        }
        cout<<"Sum of row "<<i + 1<<": "<<rSum<<endl;
    }

    for (int j = 0;j<c;j++){
        int cSum = 0;
        for(int i = 0;i<r;i++) {
            cSum += arr[i][j];
        }
        cout<<"Sum of column "<< j + 1<<": " <<cSum<<endl;
    }

}
