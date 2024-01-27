#include<bits/stdc++.h>
using namespace std;
void digitPrint(int n)
{
    //base case
    if(n == 0)
        return;
    else
    {
        digitPrint(n/10);
        cout<<n%10<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    digitPrint(n);
    return 0;
}