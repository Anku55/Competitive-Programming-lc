#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
        long long n; 
        cin >> n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll ans=arr[n-1]-arr[0];
        for(int i=0;i<n;i++)
        ans=max(ans,arr[i]-arr[0]);

        for(int i=0;i<n-1;i++)
        ans=max(ans,arr[n-1]-arr[i]);

        for(int i=0;i<n-1;i++)
        ans=max(ans,arr[i]-arr[i+1]);


        cout<<ans<<endl;

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