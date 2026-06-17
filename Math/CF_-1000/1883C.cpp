#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);

    ll even_count = 0;
    ll ans = 1e9;

        for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        
           if(arr[i]%k==0)ans=0;
            ans = min(ans, k - arr[i] % k);
        
        if (arr[i] % 2 == 0)
            even_count++;
    }
    if (k == 4)
    {
        if (even_count >= 2)
        {
           ans = min(ans, 0LL);
        }
        else if (even_count == 1)
        {
            ans = min(ans, 1LL);
        }
        else if (even_count == 0)
        {
           ans = min(ans, 2LL);
        }
    }
    
    
        cout << ans << endl;
    
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