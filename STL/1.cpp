#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    vector<int>v = {1,2,3,4,5,6};
    for(int i=0;i<v.size();i++)
    {
        pq.push(v[i]);
    }
    cout<<pq.top()<<endl;
    cout<<"Priority Queue:"<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}