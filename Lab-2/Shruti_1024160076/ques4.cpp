// 4a part 
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    str1 += str2;   // concatenate
    cout << "Concatenated String: " << str1 << endl;

  return 0;
}

//4b part 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end()); // STL function
    cout << "Reversed String: " << str << endl;

  return 0;
}

//4c part
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() 
{
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }

    cout << "String without vowels: " << result << endl;
  return 0;
}
//4d part
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); // to consume newline

    string arr[100];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr, arr + n); // STL sort

    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
//4e part
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    cout << "Lowercase: " << char(tolower(ch)) << endl;

  return 0;
}