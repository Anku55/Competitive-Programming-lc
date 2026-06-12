#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt=0;

    for(int i=0;i<n;i++){
        if(i>0&&a[i-1]%2==a[i]%2){
            cnt++;

        }
    }

    cout<<cnt<<endl;
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