#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve() {
    string s;
    cin>>s;
    ll ones=0;
    ll zeros=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            ones++;

        }else{
            zeros++;
        }
    }
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='1' && zeros>0){
            zeros--;
        }else if(s[i]=='0'&& ones>0){
            ones--;
        }else{
            break;
        }
    }

    cout<<zeros+ones<<endl;

  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}