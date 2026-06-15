#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            odd++;
        }
    }

    if (odd <= k + 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}