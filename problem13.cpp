#include <iostream>
using namespace std;
void reverseEvenIndices(int arr[], int n)
{
    // base case
    if (n == 1)
        cout << arr[n - 1] << " ";
    else
    {
        if (n % 2 == 0)
            cout << arr[n] << " ";
        reverseEvenIndices(arr, n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseEvenIndices(arr, n - 1);
    return 0;
}
