#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int max(int a, int b, int c)
{
    return max(max(a, b), c);
}
int cross_max_sum(int arr[], int low, int mid, int high)
{
    int sum = 0;
    int leftsum = INT_MIN;
    for (int i = mid; i >= 1; i--)
    {
        sum = sum + arr[i];
        if (sum > leftsum)
        {
            leftsum = sum;
        }
    }
    sum = 0;

    int rightsum = INT_MIN;
    for (int i = mid; i <= high; i++)
    {
        sum = sum + arr[i];
        if (sum > rightsum)
        {
            rightsum = sum;
        }
    }
    return max(leftsum + rightsum - arr[mid], leftsum, rightsum);
}
int maximum_subarray_sum(int arr[], int low, int high)
{
    // if invalid range
    if (low > high)
    {
        return -1;
    }
    if (low == high)
    {
        return arr[low];
    }
    int mid = (low + high) / 2;
    return max(maximum_subarray_sum(arr, low, mid), maximum_subarray_sum(arr, mid + 1, high), cross_max_sum(arr, low, mid, high));
}
int main()
{
    int arr[] = {-2, 5, 6, -6, 9, -11, 2, 11, 13, -45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maximum_subarray_sum(arr, 0, n - 1) << endl;
    return 0;
}
