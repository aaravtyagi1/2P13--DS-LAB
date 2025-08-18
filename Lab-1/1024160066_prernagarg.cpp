//Q1
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[100], n=0, ch, i, val, pos, f;
//     while(1){
//         cout<<"\n1.Create  2.Display  3.Insert  4.Delete  5.Linear Search  6.Exit\n";
//         cin>>ch;
//         if(ch==1){
//             cout<<"size ";
//             cin>>n;
//             for(i=0;i<n;i++) cin>>arr[i];
//         }
//         else if(ch==2){
//             for(i=0;i<n;i++) cout<<arr[i]<<" ";
//         }
//         else if(ch==3){
//             cout<<"val pos ";
//             cin>>val>>pos;
//             for(i=n;i>pos;i--) arr[i]=arr[i-1];
//             arr[pos]=val; n++;
//         }
//         else if(ch==4){
//             cout<<"pos "; 
//             cin>>pos;
//             for(i=pos;i<n-1;i++) arr[i]=arr[i+1];
//             n--;
//         }
//         else if(ch==5){
//             cout<<"val "; 
//             cin>>val;
//             f=0;
//             for(i=0;i<n;i++) if(arr[i]==val){ cout<<"found at "<<i<<"\n"; f=1; break; }
//             if(!f) cout<<"not found\n";
//         }
//         else if(ch==6) break;
//     }
//    return 0;
// }






//Q2
// #include <iostream>
// using namespace std;
// int main(){
//     int a[50], n, i, j, k;
//     cin>>n;
//     for(i=0;i<n;i++) cin>>a[i];
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]==a[j]){
//                 for(k=j;k<n-1;k++) a[k]=a[k+1];
//                 n--; j--;
//             }
//         }
//     }
//     for(i=0;i<n;i++) cout<<a[i]<<" ";
// }




//Q3
// 1 0 0 0 0




//Q4a
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[50], n, i, tmp;
//     cin>>n;
//     for(i=0;i<n;i++) cin>>arr[i];
//     for(i=0;i<n/2;i++){
//         tmp=arr[i]; arr[i]=arr[n-1-i]; arr[n-1-i]=tmp;
//     }
//     for(i=0;i<n;i++) cout<<arr[i]<<" ";
// }


//Q4b
// #include <iostream>
// using namespace std;
// int main(){
//     int r1,c1,r2,c2,i,j,k;
//     int a[10][10], b[10][10], m[10][10];
//     cin>>r1>>c1;
//     for(i=0;i<r1;i++) for(j=0;j<c1;j++) cin>>a[i][j];
//     cin>>r2>>c2;
//     for(i=0;i<r2;i++) for(j=0;j<c2;j++) cin>>b[i][j];
//     if(c1!=r2) return 0;
//     for(i=0;i<r1;i++) for(j=0;j<c2;j++){ m[i][j]=0;
//         for(k=0;k<c1;k++) m[i][j]+=a[i][k]*b[k][j];
//     }
//     for(i=0;i<r1;i++){ for(j=0;j<c2;j++) cout<<m[i][j]<<" "; cout<<"\n"; }
// }



//Q4c
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c,i,j,a[10][10];
//     cin>>r>>c;
//     for(i=0;i<r;i++) for(j=0;j<c;j++) cin>>a[i][j];
//     for(i=0;i<c;i++){ for(j=0;j<r;j++) cout<<a[j][i]<<" "; cout<<"\n"; }
// }


//Q5
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c,i,j,a[10][10], s;
//     cin>>r>>c;
//     for(i=0;i<r;i++) for(j=0;j<c;j++) cin>>a[i][j];
//     for(i=0;i<r;i++){ s=0; for(j=0;j<c;j++) s+=a[i][j]; cout<<"row"<<i<<"="<<s<<"\n"; }
//     for(j=0;j<c;j++){ s=0; for(i=0;i<r;i++) s+=a[i][j]; cout<<"col"<<j<<"="<<s<<"\n"; }
// }




