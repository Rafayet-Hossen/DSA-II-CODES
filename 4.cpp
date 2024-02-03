#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> vs;
    string s;
    for(int i=0;i<5;i++)
    {
        cin>>s;
        vs.push_back(s);
    }
    sort(vs.begin(),vs.end());
    for(auto i: vs)
        cout<<i<<endl;
    return 0;
}
