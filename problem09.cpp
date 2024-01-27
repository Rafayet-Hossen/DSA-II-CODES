#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    //base case
    if(n == 1)
    cout<< arr[0]<<" ";
    else
    { 
        printArray(arr,n-1);
        cout<<arr[n-1]<<" ";
    }
    
}
int main(){
    int arr[] = {1,4,3,5,6,5,4,6};
    printArray(arr,8);
    return 0;
}