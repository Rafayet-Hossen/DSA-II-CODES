#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(auto i: v)
        cout<<i<<endl;


    sort(v.begin(),v.end());
    for(auto i: v)
        cout<<i<<endl;




    return 0;
}
