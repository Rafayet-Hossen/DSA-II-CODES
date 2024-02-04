#include <iostream>
using namespace std;

pair<int,int> maxMinDivideConquer(int arr[], int low, int high)
{
    pair<int,int> result, left, right;
    int mid;
    // If only one element in the array
    if (low == high)
    {
        result.first = arr[low];
        result.second = arr[low];
        return result;
    }
    // If there are two elements in the array
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            result.first = arr[low];
            result.second = arr[high];
        }
        else
        {
            result.first = arr[high];
            result.second = arr[low];
        }
        return result;
    }
    // If there are more than two elements in the array
    mid = (low + high) / 2;
    left = maxMinDivideConquer(arr, low, mid);
    right = maxMinDivideConquer(arr, mid + 1, high);
    // Compare and get the minimum of both parts
    result.first = (left.first < right.first) ? left.first : right.first;

    // Compare and get the maximum of both parts
    result.second = (left.second > right.second) ? left.second : right.second;
    
    return result;
}
int main()
{
    // int arr[] = {1,2,-444,-999,43,11,143,12321,10};
    int arr[] = {1, 2, -444, -999, 43, 11, 143, 12321, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int,int> result = maxMinDivideConquer(arr, 0, n - 1);
    cout << "Maximum element is: " << result.second << endl;
    cout << "Minimum element is: " << result.first << endl;
    return 0;
}