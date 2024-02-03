#include<bits/stdc++.h>
using namespace std;
//bool comp(const pair<char,string>&a,const pair<char,string>&b)
//{
//    return a.first>b.first;
//}
int main()
{
    vector<pair<char,string>>cs;
    cs.push_back(make_pair('X',"X-Man"));
    cs.push_back(make_pair('V',"Varisu"));
    cs.push_back(make_pair('T',"Tare Zamin Par"));
    cs.push_back(make_pair('R',"Rangastalam"));


    for(auto i:cs)
        cout<<i.first<<" --> "<<i.second<<endl;

    sort(cs.begin()+1,cs.end()-1);
    cout<<"After sort"<<endl;
    for(auto i:cs)
        cout<<i.first<<" --> "<<i.second<<endl;

    return 0;
}
//rbegin --> rend is the easiest way to sort a vector of pair
//another way to sort is using user defined compare function
