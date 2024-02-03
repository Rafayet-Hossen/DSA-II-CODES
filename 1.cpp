#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "How are you? ";
    string str1;
    cin>>str1;
    str.append(str1);
    cout<<str<<endl;
    string str3 ="JAVA , C++, C";
    str.append(str3,7,3);
    cout<<str<<endl;

    return 0;
}