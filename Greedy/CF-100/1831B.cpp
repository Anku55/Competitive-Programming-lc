#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<long long> longest_subarray_a(2 * n + 1, 0);
    vector<long long> longest_subarray_b(2 * n + 1, 0);

    long long counter = 1;

    // Process array a
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            counter++;
        else
        {
            longest_subarray_a[a[i - 1]] =
                max(longest_subarray_a[a[i - 1]], counter);
            counter = 1;
        }
    }

    longest_subarray_a[a[n - 1]] =
        max(longest_subarray_a[a[n - 1]], counter);

    // Process array b
    counter = 1;

    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            counter++;
        else
        {
            longest_subarray_b[b[i - 1]] =
                max(longest_subarray_b[b[i - 1]], counter);
            counter = 1;
        }
    }

    longest_subarray_b[b[n - 1]] =
        max(longest_subarray_b[b[n - 1]], counter);

    long long ans = 0;

    for (int i = 1; i <= 2 * n; i++)
    {
        ans = max(ans, longest_subarray_a[i] + longest_subarray_b[i]);
    }

    cout << ans << '\n';
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