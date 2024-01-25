// This will find the sum of all the elements of an array
#include <iostream>
using namespace std;
int sumElement(int arr[], int n)
{
    // base case
    if (n == 1)
        return arr[0];
    else
    {
        return arr[n - 1] + sumElement(arr, n - 1);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int result = sumElement(arr, 5);
    cout << result << endl;
    return 0;
}
