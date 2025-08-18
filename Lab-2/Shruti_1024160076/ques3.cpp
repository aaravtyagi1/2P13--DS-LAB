#include <iostream>
using namespace std;
// ques3a part

int findMissingLinear(int arr[], int n) 
{
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        sum += arr[i];
    }
    return total - sum;
}

int main() 
{
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6;

    cout << "Missing number (Linear): " << findMissingLinear(arr, n) << endl;
  return 0;
}

//ques 3b part 
#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; 

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1)
        {
            
            low = mid + 1;
        } else 
        {
            
            high = mid - 1;
        }
    }
    return low + 1; 
}

int main() 
{
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6;

    cout << "Missing number (Binary Search): " << findMissingBinary(arr, n) << endl;
    return 0;
}