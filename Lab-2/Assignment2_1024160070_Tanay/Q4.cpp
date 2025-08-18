#include<bits/stdc++.h>
using namespace std;

// (a) part
// int main(){
//     string str1,str2;
//     cout << "enter str1: " << endl;
//     cin >> str1;
//     cout << "enter str2: " << endl;
//     cin >> str2;
//     string result = str1 + " " + str2;
//     cout << "Concatenated string: " << result << endl;
// }


// B part
// int main(){
//     string str1;
//     cout << "enter str1: " << endl;
//     cin >> str1;
//     string rev = "";
//     for(int i = str1.length()-1;i>=0;i--){
//         rev += str1[i];
//     }
//     cout << "reversed string: " << rev << endl;
// }

//C part
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
// int main(){
//     string str1;
//     string result = "";
//     cout << "enter str1: " << endl;
//     cin >> str1;
    
//     for (int i = 0; i < str1.length(); i++) {
//         if (!isVowel(str1[i])) {
//             result += str1[i];
//         }
//     }
//     cout << "without vowels: " << result << endl;
// }

//D part(Write a program to sort the strings in alphabetical order.)

// int main() {
//     string arr[] = {"banana", "apple", "cherry", "mango"};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     sort(arr, arr + n);

//     cout << "Strings in alphabetical order:\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

//E Part(Convert a Character from Uppercase to Lowercase)
// char tolowered(char ch){
//     if(ch >='A' && ch<='Z'){
//         return (ch += 32);
//     }
//     else return ch;
// }
// int main(){
//     int i,n;
//     string str;
//     cout << "enter str: " << endl;
//     cin >> str;
//     for(i=0;i<=str.length()-1;i++){
//         str[i] = tolowered(str[i]);
//     }
//     cout << "Lowercase string: " << str << endl;
// }
