#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<pair<ll, ll>> v(n);
    vector<ll> r(n), c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++)
    {
        v[i] = {c[i], r[i]};
    }
    sort(v.begin(), v.end());

    ll miniCost = p;
    ll alreadyShared = 1;
    for (auto it : v)
    {
        ll canShare = it.second;
        ll shareCost = it.first;
        if (shareCost >= p)
        {
            break;
        }
        if (alreadyShared + canShare > n)
        {
            miniCost += (n - alreadyShared) * shareCost;
            alreadyShared = n;
            break;
        }
        else
        {
            miniCost += shareCost * canShare;
            alreadyShared += canShare;
        }

        
    }
    miniCost += (n - alreadyShared) * p;
        cout << miniCost << endl;
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