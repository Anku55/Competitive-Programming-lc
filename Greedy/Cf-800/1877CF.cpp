#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
int n;
cin>>n;
int x;
int sum=0;
vector<int>arr(n);
for(int i=0;i<n-1;i++){
    cin>>arr[i];
    sum+=arr[i];

}

cout<<-1*sum<<"\n";

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

