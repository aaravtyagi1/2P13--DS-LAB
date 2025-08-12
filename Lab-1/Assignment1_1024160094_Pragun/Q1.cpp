#include<iostream>
using namespace std;
class Operations{
    int arr[100] ,n;

public:
    Operations(){
        n = 0;
    }

    void create(){
        cout<<"Enter number of elements: ";
        cin>>n;
        cout<<"Enter "<<n<<" elements:"<<endl;
        for(int i = 0; i < n; i++){
            cin>>arr[i];

        }
    }

    void display(){
        if(n==0){
            cout<<"Array is empty"<<endl;
            return;
        }
        cout<<"Array elements: ";
        for(int i = 0;i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

     void insert(){
        if(n==0){
            cout << "Array is empty"<<endl;
            return;
        }
        int pos, value;
        cout << "Enter position to insert: ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> value;

        if(pos<1 || pos>n + 1) {
            cout << "Invalid position!"<<endl;
            return;
        }

        for(int i = n;i >= pos;i--){
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
        cout<<"Value inserted"<<endl;
    }

     void deleteElement(){
        if(n==0){
            cout<<"Array is empty"<<endl;
            return;
        }
        int pos;
        cout<<"Enter position to delete: ";
        cin >> pos;

        if(pos<1 || pos>n){
            cout<<"Invalid position"<<endl;
            return;
        }

        for (int i=pos - 1;i<n - 1;i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Value deleted"<<endl;
    }

     void linearSearch(){
        if(n == 0){
            cout<<"Array is empty"<<endl;
            return;
        }
        int value;
        cout<<"Enter value to search: ";
        cin>>value;

        for(int i = 0; i < n; i++){
            if(arr[i] == value){
                cout<<"Value found at position "<<i + 1<<endl;
                return;
            }
        }
        cout<<"Value not found"<<endl;
    }
};

int main(){
    Operations obj;
    int choice;
    do{
        cout<<"MENU: ";
        cout << "1. CREATE"<<endl<<"2. DISPLAY"<<endl<<"3. INSERT"<<endl<<"4. DELETE"<<endl<<"5. LINEAR SEARCH"<<endl<<"6. EXIT"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: obj.create(); break;
            case 2: obj.display(); break;
            case 3: obj.insert(); break;
            case 4: obj.deleteElement(); break;
            case 5: obj.linearSearch(); break;
            case 6: cout << "Exiting program"<<endl; break;
            default: cout << "Invalid choice"<<endl;
        }
    }while(choice != 6);
}
