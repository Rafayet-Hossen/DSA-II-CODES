#include<bits/stdc++.h>
using namespace std;
int power(int n,int k)
{
    //base case
    if(k==1)
        return n;
    return n*power(n,k-1);
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<power(n,k)<<endl;
    return 0;
}