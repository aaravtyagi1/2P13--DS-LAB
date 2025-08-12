#include <iostream>
using namespace std;
int main() {
    int A[10][10], trans[10][10];
    int r,c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    cout<<"Enter elements of the matrix: "<<endl;
    for(int i = 0; i<r; i++)
        for(int j = 0; j<c; j++)
            cin>>A[i][j];


    for(int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            trans[j][i] = A[i][j];
        }
    }

    cout << "Transpose of the matrix: "<<endl;
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
   
}
