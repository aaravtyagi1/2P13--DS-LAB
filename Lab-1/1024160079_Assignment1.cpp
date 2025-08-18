Q1
#include <iostream>
using namespace std;

int main(){
    int box[100], len=0, ch, x, add, place, mark;
    while(1){
        cout<<"\n1.Create  2.Display  3.Insert  4.Delete  5.Linear Search  6.Exit\n";
        cin>>ch;
        if(ch==1){
            cout<<"size "; cin>>len;
            for(x=0;x<len;x++) cin>>box[x];
        }
        else if(ch==2){
            for(x=0;x<len;x++) cout<<box[x]<<" ";
        }
        else if(ch==3){
            cout<<"val pos "; cin>>add>>place;
            for(x=len;x>place;x--) box[x]=box[x-1];
            box[place]=add; len++;
        }
        else if(ch==4){
            cout<<"pos "; cin>>place;
            for(x=place;x<len-1;x++) box[x]=box[x+1];
            len--;
        }
        else if(ch==5){
            cout<<"val "; cin>>add; mark=0;
            for(x=0;x<len;x++) if(box[x]==add){ cout<<"found at "<<x<<"\n"; mark=1; break; }
            if(!mark) cout<<"not found\n";
        }
        else if(ch==6) break;
    }
}



Q2
#include <iostream>
using namespace std;
int main(){
    int bag[60], size, p, q, r;
    cin>>size;
    for(p=0;p<size;p++) cin>>bag[p];
    for(p=0;p<size;p++){
        for(q=p+1;q<size;q++){
            if(bag[p]==bag[q]){
                for(r=q;r<size-1;r++) bag[r]=bag[r+1];
                size--; q--;
            }
        }
    }
    for(p=0;p<size;p++) cout<<bag[p]<<" ";
}



Q3
1 0 0 0 0


Q4a
#include <iostream>
using namespace std;
int main(){
    int stuff[40], cnt, p, hold;
    cin>>cnt;
    for(p=0;p<cnt;p++) cin>>stuff[p];
    for(p=0;p<cnt/2;p++){
        hold=stuff[p];
        stuff[p]=stuff[cnt-1-p];
        stuff[cnt-1-p]=hold;
    }
    for(p=0;p<cnt;p++) cout<<stuff[p]<<" ";
}


Q4b
#include <iostream>
using namespace std;
int main(){
    int h1,w1,h2,w2,a,b,c;
    int first[12][12], second[12][12], res[12][12];
    cin>>h1>>w1;
    for(a=0;a<h1;a++) for(b=0;b<w1;b++) cin>>first[a][b];
    cin>>h2>>w2;
    for(a=0;a<h2;a++) for(b=0;b<w2;b++) cin>>second[a][b];
    if(w1!=h2) return 0;
    for(a=0;a<h1;a++) for(b=0;b<w2;b++){ res[a][b]=0;
        for(c=0;c<w1;c++) res[a][b]+=first[a][c]*second[c][b];
    }
    for(a=0;a<h1;a++){ for(b=0;b<w2;b++) cout<<res[a][b]<<" "; cout<<"\n"; }
}



Q4c
#include <iostream>
using namespace std;
int main(){
    int rr,cc,a,b,mat[15][15];
    cin>>rr>>cc;
    for(a=0;a<rr;a++) for(b=0;b<cc;b++) cin>>mat[a][b];
    for(a=0;a<cc;a++){ for(b=0;b<rr;b++) cout<<mat[b][a]<<" "; cout<<"\n"; }
}


Q5
#include <iostream>
using namespace std;
int main(){
    int rws,cls,x,y,data[20][20],sum;
    cin>>rws>>cls;
    for(x=0;x<rws;x++) for(y=0;y<cls;y++) cin>>data[x][y];
    for(x=0;x<rws;x++){ sum=0; for(y=0;y<cls;y++) sum+=data[x][y]; cout<<"row"<<x<<"="<<sum<<"\n"; }
    for(y=0;y<cls;y++){ sum=0; for(x=0;x<rws;x++) sum+=data[x][y]; cout<<"col"<<y<<"="<<sum<<"\n"; }
}