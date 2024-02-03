#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i= 0;i< n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int val;
    cin>>val;
    vector<int>::iterator it = v.begin();
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == val)
        {
            v.erase(it);
            it--;
            i--;
        }
        it++;
    }
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;



    return 0;
}
