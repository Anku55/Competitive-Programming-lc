#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int gas=0;
    for(int i=0;i<n-1;i++){
        gas=max(gas,arr[i]-arr[i+1]);
    }
    gas=max(gas,2*(x-arr[n-1]));
    cout<<gas<<"\n";
    
    
    

}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}
