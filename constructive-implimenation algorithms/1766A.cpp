#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;

    while(n) {
        ans += min(9, n);
        n /= 10;
    }

    cout << ans << '\n';
}

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}