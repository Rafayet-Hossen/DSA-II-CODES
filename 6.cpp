#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());

    cout<<s<<endl;
    sort(s.rbegin(),s.rend());

    cout<<s<<endl;

    return 0;
}
