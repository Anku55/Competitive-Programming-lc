#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;

    cin >> n;

    ll firstMini = LLONG_MAX;
    vector<ll> secEle;

    for (ll i = 0; i < n; i++)
    {

        ll m;
        cin >> m;
        vector<ll> temp(m);
        for (ll j = 0; j < m; j++)
        {
            cin >> temp[j];
        }
        sort(temp.begin(), temp.end());
        firstMini = min(firstMini, temp[0]);
        secEle.push_back(temp[1]);
    }
    ll sum = 0;
    ll secMin = LLONG_MAX;
    for (ll i = 0; i < secEle.size(); i++)
    {
        secMin = min(secMin, secEle[i]);
        sum += secEle[i];
    }
    sum = sum - secMin;
    sum += firstMini;

    cout << sum << endl;
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