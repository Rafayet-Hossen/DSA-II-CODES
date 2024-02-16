#include <iostream>
using namespace std;

// Function to partition the array such that elements greater than the pivot will be on the left and smaller on the right
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Taking last element as pivot
    int i = (low - 1);     // Index for greater element

    for (int j = low; j <= high-1; j++)
    {
        // If current element is greater than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // Increment index of greater element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to implement QuickSort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Getting pivot element's correct position
        quickSort(arr, low, pi - 1);        // Recursively sorting elements before and after partition
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int binary_search(int arr[],int low,int high,int key)
{
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
// Driver function
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    for(auto i: arr)
        cout<<i<<" ";
    cout<<endl;
    cout<<binary_search(arr,0,n-1,7)<<endl;
    return 0;
}