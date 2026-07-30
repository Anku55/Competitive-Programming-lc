class Solution {
public:
    int fun(int i,string &s ,int &n){
        if(i==n)return 1;
        if(s[i]=='0')return 0;

        int one=fun(i+1,s,n);

        if(i+1<n){
            if(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6')){
                one+=fun(i+2,s,n);
            }
        }

        return one;
    }
    int numDecodings(string s) {
        int n=s.length();
        return fun(0,s,n);
        
    }
};

class Solution {
public:
    int fun(int i,string &s ,int &n,vector<int>&dp){
        if(i==n)return 1;
        if(s[i]=='0')return 0;

        if(dp[i]!=-1)return dp[i];

        int one=fun(i+1,s,n,dp);

        if(i+1<n){
            if(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6')){
                one+=fun(i+2,s,n,dp);
            }
        }

        return dp[i]=one;
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n+1,-1);
        return fun(0,s,n,dp);
        
    }
};