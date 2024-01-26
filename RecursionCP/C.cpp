#include <bits/stdc++.h>
using namespace std;
void printDigit(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printDigit(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printDigit(n);
    return 0;
}