#include<bits/stdc++.h>
using namespace std;
int calc_sum(int arr[],int low,int high)
{
    if(low == high)
    {
        if(arr[low] % 2 == 0)
        {
            return arr[low];
        }
        else
            return 0;
        
    }
    else
    {
        int mid = (low+high)/2;
        int left = calc_sum(arr,low,mid);
        int right = calc_sum(arr,mid+1,high);
        return left+right;
    }
}
int main(){
    int arr[] = {1,2,3,2,5,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<calc_sum(arr,0,n-1)<<endl;
    return 0;
}