#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    bool hasB = false;
    for(char c : s) {
        if(c == 'B') hasB = true;
    }

    vector<long long> a(q);
    for(int i = 0; i < q; i++) {
        cin >> a[i];
    }

    if(!hasB) {
        for(int i = 0; i < q; i++) {
            cout << a[i] << "\n";
        }
        return;
    }

    vector<pair<char,int>> blocks;

    for(int i = 0; i < n; ) {
        int j = i;
        while(j < n && s[j] == s[i]) j++;

        blocks.push_back({s[i], j - i});
        i = j;
    }

    for(long long x : a) {

        long long ans = 0;

        while(x > 0) {

            for(auto &[ch,len] : blocks) {

                if(x == 0) break;

                if(ch == 'A') {

                    if(x <= len) {
                        ans += x;
                        x = 0;
                        break;
                    }

                    x -= len;
                    ans += len;
                }
                else {

                    for(int k = 0; k < len && x > 0; k++) {
                        x /= 2;
                        ans++;
                    }
                }
            }
        }

        cout << ans << "\n";
    }
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