class Solution {
public:
    const int mod=1e9+7;
    vector<int>prev;
    int dp[2001];
    int solve(int n){
        if(n==0){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int total=(2*solve(n-1))%mod;
        if(prev[n]!=0){
            int duplicate=solve(prev[n]-1);
            total=(total - duplicate +mod)%mod;
        }
        

        return dp[n]= total;
    }
    int distinctSubseqII(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        prev.assign(n+1,0);
        vector<int>lastSeen(26,0);
        for(int i=1;i<=n;i++){
            int idx=s[i-1]-'a';
            prev[i]=lastSeen[idx];
            lastSeen[idx]=i;
        }
        return (solve(n)-1+mod)%mod;
    }
};