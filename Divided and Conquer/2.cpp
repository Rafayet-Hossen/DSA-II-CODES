#include<bits/stdc++.h>
using namespace std;
pair<int,int> minmax(int arr[],int low , int high)
{
    pair<int,int>result,left,right;
    if(low == high)
    {
        result.first = arr[low];
        result.second = arr[low];
        return result;
    }
    if(high == low+1)
    {
        if(arr[low]<arr[high])
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
    int mid = (low+high)/2;

    left = minmax(arr,low,mid);
    right = minmax(arr,mid+1,high);

    result.first = min(left.first,right.first);
    result.second = max(left.second,right.second);

    return result;
        
}
int main(){
    int arr[] = {1, 2, -444, 43, 11, 143, 10};
    pair<int,int> result = minmax(arr,0,6);
    cout<<"Min: "<<result.first<<endl;
    cout<<"Max: "<<result.second<<endl;
    return 0;
}