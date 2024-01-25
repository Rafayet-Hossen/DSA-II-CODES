//This code is check is a number is palindrome or not
#include<iostream>
using namespace std;
int isPalindrome(int n,int temp)
{
    if(n == 0)
        return temp;
    temp = (temp*10)+(n%10);
    return isPalindrome(n/10,temp);
}
int main()
{
    int n;
    cin>>n;
    if(n == isPalindrome(n,0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
