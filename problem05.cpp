//This will calculate the combination or shortly nCr
#include<iostream>
using namespace std;
int nCr(int n,int r)
{
    //base case
    if(n<r)
        return 0;
    else if(n == 1)
        return 1;
    else if(r == 1)
        return n;
    else if(n == 0)
        return 1;
    return nCr(n-1,r)+nCr(n-1,r-1);

}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}

