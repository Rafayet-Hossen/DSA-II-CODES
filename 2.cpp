#include<bits/stdc++.h>
using namespace std;

int main(){
    string str2 = "C++ is an object-oriented programming language and includes classes, inheritance, polymorphism, data abstraction and encapsulation.C++ allows exception handling, and function overloading which are not possible in C.C++ is a powerful, efficient and fast language.";
    int pos;
//    for (int i = 0; (pos = str2.find("C++", i)) != string::npos; i = pos+1)
//    {
//        cout << "Found occurrence of 'C++' at position " << pos <<endl;
//    }
     for(int i=0; (pos = str2.find("data",i))!= -1; i = pos+1)
     {
         cout<<"an occurrence: "<<pos<<endl;
     }
    return 0;
}


