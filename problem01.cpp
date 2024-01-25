// This will find the maximum of an array
#include <iostream>
using namespace std;
int findMax(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int maximum = arr[n - 1];
        int mymaximum = findMax(arr, n - 1);
        if (maximum > mymaximum)
        {
            return maximum;
        }
        else
        {
            return mymaximum;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 54, 3242, 523, 1212, 43222234};
    int result = findMax(arr, 7);
    cout << result << endl;
    return 0;
}
