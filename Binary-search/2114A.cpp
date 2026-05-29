#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve() {
    string s;
    cin >> s;

    int n = stoi(s);

    int root = sqrt(n);

    if (root * root == n) {
        cout << 0 << " " << root << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // File redirection for local testing
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Your code goes here
    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}
