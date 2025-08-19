#include <iostream>
using namespace std;
int hlo(int A[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDistinct = true;
        for (int j = 0; j < i; j++)
        {
            if (A[i] == A[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter number of elements";
    cin >> n;
    int A[n];
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int distinct = hlo(A, n);
    cout << "Total number of distinct elements " << distinct << endl;
    return 0;
}