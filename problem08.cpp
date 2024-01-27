#include<iostream>
#include<vector>
using namespace std;
int frequency(int arr[],int n,int key)
{

    if(n==1)
    {
        if(arr[0] == key)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int val = arr[n-1];
        int rest = frequency(arr,n-1,key);
        if(val == key)
        {
            return  1+rest;
        }
        else
        {
            return rest;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< frequency(arr,n,1) <<endl;
    return 0;
}