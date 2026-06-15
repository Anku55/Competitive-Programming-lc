#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, D;
    cin >> n >> D;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int cnt = 0;
    int l= 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int req = (D / arr[i]) + 1;
        if (i - l + 1 >= req)
        {
            cnt++;
            l += req - 1;
        }
        else
        {
            break;
        }
    }

    cout << cnt << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


  

    
        solve();
    

    return 0;
}