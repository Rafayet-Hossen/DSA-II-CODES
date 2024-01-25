//This will find the nth fibonacchi no using recursion
#include<iostream>
using namespace std;
int nthFibonacchi(int n)
{
    //base case
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    return nthFibonacchi(n-1)+nthFibonacchi(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<nthFibonacchi(n)<<endl;
    return 0;
}
