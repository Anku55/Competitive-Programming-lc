#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve() {
    int n, x;
    cin >> n >> x;

    int prev = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int cur;
        cin >> cur;

        ans = max(ans, cur - prev);
        prev = cur;
    }

    ans = max(ans, 2 * (x - prev));

    cout << ans << '\n';
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    


    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// void solve() {
//     int n;
//     cin >> n;

//     cout << 2 * n << " ";

//     for (int i = 1; i < n; i++) {
//         cout << i << " ";
//     }

//     cout << '\n';
// }

// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     // File redirection for local testing
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     // Your code goes here
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }


//     return 0;
// }