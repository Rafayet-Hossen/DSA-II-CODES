#include<bits/stdc++.h>
using namespace std;
pair<int,int> minmax(int arr[],int low,int high)
{
    pair<int,int> result,left,right;
    if(low == high)
    {
        result.first = arr[low];
        result.second = arr[low];
        return result;
    }
    else
    {
        int mid = (low+high)/2;
        
        left = minmax(arr,low,mid);
        right = minmax(arr,mid+1,high);

        result.first = min(left.first,right.first);
        result.second = max(left.second,right.second);
        return result;
    }
}
int main(){
    int arr[] = {1, 2, 3,-1, 2,100, 5, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    pair<int,int> res = minmax(arr,0,n-1);
    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}