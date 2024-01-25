#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    //base case 
    if(n == 1)
        return;
    //This will work if the array is already sorted
    int count = 0;

    for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            count++;
        }
    //count is 0 means already sorted so we will return
    if(count == 0)
        return;
    
    //recursive call
    bubblesort(arr,n-1);

}
int main()
{
    int arr[] = {1,5,8,3,4};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}