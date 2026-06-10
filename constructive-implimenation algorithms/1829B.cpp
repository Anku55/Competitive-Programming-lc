#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int l=0;
int r=0;
int maxLen=0;
int cnt=0;

for(int i=0;i<n;i++){
    if(arr[i]==0){
        cnt++;
        maxLen=max(cnt,maxLen);

    }else{
        cnt=0;
    }
}

cout<<maxLen<<"\n";

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--){
        solve();

    }

    
    return 0;
}
 