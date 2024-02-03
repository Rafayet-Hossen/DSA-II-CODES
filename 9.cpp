#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    cout<<s<<endl;
    cout<<s.size()<<endl;
    string myname = s.substr(0,24);
    string new_str = s.substr(25);

    cout<<myname<<endl;
    cout<<"size of my name: "<<myname.size()<<endl;
    cout<<new_str<<endl;
    cout<<"Size of new string: "<<new_str.size()<<endl;

    return 0;
}
//Hello my name is Rafayet I love C++
