#include <bits/stdc++.h>
using namespace std;
void dectobinary(int n)
{
    // base case
    if (n == 0)
        return;
    else
    {
        int msb = n%2;
        dectobinary(n/2);
        cout<<msb;
    }
    
}
int main()
{
    int n;
    cin >> n;
    dectobinary(n);
    return 0;
}