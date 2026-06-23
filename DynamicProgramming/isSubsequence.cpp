class Solution {
public:
    bool fun(int n,int m,string &s,string &t,vector<vector<int>>&dp){
        if(n<0)return true;
        if(m<0)return false;
        if(dp[n][m]!=-1)return dp[n][m];
        if(s[n]==t[m]){
            return dp[n][m]= fun(n-1,m-1,s,t,dp);

        }else{
             return dp[n][m]=fun(n,m-1,s,t,dp);
        }


    }
    bool isSubsequence(string s, string t) {
       int n=s.length();
       int m=t.length();
       vector<vector<int>>dp(n,vector<int>(m,-1));
       return fun(n-1,m-1,s,t,dp);
        
    }
};