#include<bits/stdc++.h>
using namespace std;
struct compare
{
    bool operator()(const int &a,const int &b)
    {
        return a<b;
    }
};

int main(){
    vector<int> v = {3,4,2,6,8,76,5,4,};
    priority_queue<int,vector<int>,compare> pq;
    for(int i = 0;i< v.size();i++)
    {
        pq.push(v[i]);
    }
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}