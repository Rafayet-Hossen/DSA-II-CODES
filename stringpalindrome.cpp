#include<iostream>
#include<string>
using namespace std;
void reverse_String(string &s,int start,int end)
{
    if(start>=end)
        return;
    swap(s[start],s[end]);

    reverse_String(s,start+1,end-1);
}
int main()
{
    string s,s1;
    getline(cin,s);
    s1 = s;
    reverse_String(s,0,s.length()-1);
    if(s1 == s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}