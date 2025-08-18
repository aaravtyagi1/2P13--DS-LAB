// Name: Argh | Roll No: 1024160084
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello", str2 = "World";

    // (a) Concatenate
    cout << "Concatenation: " << str1 + str2 << endl;

    // (b) Reverse
    reverse(str1.begin(), str1.end());
    cout << "Reversed: " << str1 << endl;

    // (c) Delete vowels
    string s = "Hello World";
    string result = "";
    for (char c : s) {
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            result += c;
    }
    cout << "Without vowels: " << result << endl;

    // (d) Sort strings
    string arr[] = {"banana", "apple", "cherry"};
    int n = 3;
    sort(arr, arr + n);
    cout << "Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // (e) Upper to lower
    char ch = 'A';
    cout << "Lowercase: " << char(tolower(ch)) << endl;

    return 0;
}
