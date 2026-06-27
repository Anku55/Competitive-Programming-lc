#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
        long long n; 
        cin >> n;
        vector<ll>a(n),b,c;
        for(int i=0;i<n;i++)
        cin>>a[i];

        ll maxi=-1e9;
        for(int i=0;i<n;i++){
            if(a[i]>maxi){
                maxi=a[i];
            }
        }

        for(int i=0;i<n;i++ ){
            if(a[i]!=maxi){
                b.push_back(a[i]);
            }else{
                c.push_back(a[i]);
            }
        }
        if(b.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it :b){
                cout<< it<<" ";
            }
            cout<<endl;
            for(auto it : c){
                cout<<it<<" "<<endl;
            }

            cout<<endl;
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}