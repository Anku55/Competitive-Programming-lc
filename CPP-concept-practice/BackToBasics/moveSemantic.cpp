#include<bits/stdc++.h>
using namespace std;
string getData() {
    return "Hello World";
}

int main(){

    vector<string>v;
    v.reserve(3);
    string s {getData()};

    
    v.push_back(s);
    v.push_back(move(s));
    s="hello";
    // yes it make senes to reuse data after std::move
    
    cout<<s<<"\n";
    cout<<s.size()<<"\n";



    return 0;
}