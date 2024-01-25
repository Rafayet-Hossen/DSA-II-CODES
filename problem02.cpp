// This will find the minimum element of an array:
#include <iostream>
using namespace std;
int findMin(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int minimum = arr[n - 1];
        int myminimum = findMin(arr, n - 1);
        if (minimum < myminimum)
            return minimum;
        else
            return myminimum;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, -12232, 534, 23, -99999999, 32, -1, 121232};
    int result = findMin(arr, 11);
    cout << result << endl;
    return 0;
}
