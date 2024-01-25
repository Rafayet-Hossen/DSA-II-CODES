#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(x == 0)
        return y;
    if(y == 0)
        return x;
    return gcd(y, x%y);
}
// this process is called Euclidean algorithm by subtraction.
int GCD(int a,int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a == b)
        return a;
    if(a>b)
        return GCD(a-b,b);
    return GCD(a,b-a);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<GCD(x,y)<<endl;
    return 0;
}