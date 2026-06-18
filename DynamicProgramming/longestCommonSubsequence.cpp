########### Recursive way ##########
class Solution {
public:
    int fun(int ind1 , int ind2 ,string s, string l){
        if(ind1<0||ind2<0){
            return 0;
        }
        if(s[ind1]==l[ind2]){
            return 1+fun(ind1-1,ind2-1,s,l);

        }

        return max(fun(ind1-1,ind2,s,l),fun(ind1,ind2-1,s,l));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();

        return fun(n-1,m-1,text1,text2);
        
    }
};

################# memoaization 
class Solution {
public:
    int fun(int ind1 , int ind2 ,string s, string l,vector<vector<int>>&dp){
        if(ind1<0||ind2<0){
            return 0;
        }
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        if(s[ind1]==l[ind2]){
            return dp[ind1][ind2]= 1+fun(ind1-1,ind2-1,s,l,dp);

        }

        return dp[ind1][ind2]=max(fun(ind1-1,ind2,s,l,dp),fun(ind1,ind2-1,s,l,dp));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();

        vector<vector<int>>dp(n,vector<int>(m,-1));

        return fun(n-1,m-1,text1,text2,dp);
        
    }
};

############## Tabulation ##########

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        string s = text1;
        string l = text2;

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i < n; i++) {
            dp[i][0] = 0;
        }
        for (int i = 0; i < m; i++) {
            dp[0][i] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == l[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }
};

########### Space optimization #######

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        string s = text1;
        string l = text2;

        vector<int>prev(m+1,0),curr(m+1,0);

        for (int i = 0; i <= m; i++) {
            prev[i] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == l[j - 1]) {
                    curr[j] = 1 + prev[j - 1];
                }else {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev=curr;
        }

        return prev[m];
    }
};