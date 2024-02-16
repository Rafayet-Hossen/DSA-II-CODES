#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
    if(y == 0)
        return 1;
    else if(y == 1)
        return x;
    else
    {
        long long temp = power(x,y/2);
        if(y%2 == 0)
            return temp*temp;
        else
            return temp*temp*x;

    }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}