/*
Problem: Minimum Falling Path Sum
Platform: LeetCode
Link: https://leetcode.com/problems/minimum-falling-path-sum/description/
Difficulty: Medium

Approach:
1. Recursion
2. Memoization
3. Tabulation
4. Space Optimization

Time: 
Space: 
*/
################# Recursive solution of minimum falling sum problem
class Solution {
public:
    int fun (int i,int j,vector<vector<int>>& matrix){
        if(i < 0 || j < 0 || j >= matrix.size()){
    return 1e9;
}
        if(i==0){
            return matrix[0][j];
        }

        int s=matrix[i][j]+fun(i-1,j,matrix);
        int ld=matrix[i][j]+fun(i-1,j-1,matrix);
        int rd=matrix[i][j]+fun(i-1,j+1,matrix);

        return min(s,min(ld,rd));

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans=1e9;
        for(int j = 0; j < n; j++){
        ans = min(ans, fun(n-1, j, matrix));
    }

    return ans;
        
    }
};

optimize the time complexity 
############Memoaization

class Solution {
public:
    int fun (int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp){
        if(i < 0 || j < 0 || j >= matrix.size()){
    return 1e9;
}
        if(i==0){
            return matrix[0][j];
        }

        int s=matrix[i][j]+fun(i-1,j,matrix,dp);
        int ld=matrix[i][j]+fun(i-1,j-1,matrix,dp);
        int rd=matrix[i][j]+fun(i-1,j+1,matrix,dp);

        return min(s,min(ld,rd));

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        int ans=1e9;
        for(int j = 0; j < n; j++){
        ans = min(ans, fun(n-1, j, matrix,dp));
    }

    return ans;
        
    }
};

##############  Tabulation #########
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int j = 0; j < n; j++) {
            dp[0][j] = matrix[0][j];
        }

        int ans = 1e9;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int s = matrix[i][j] +dp[i-1][j];
                int ld=1e9;
                if(j-1>=0)ld = matrix[i][j] + dp[i-1][j-1];
                int rd = 1e9;
                if(j+1<n)rd=matrix[i][j] + dp[i-1][j+1];

                dp[i][j]=min(s,min(ld,rd));
            }
        }

        int mini=dp[n-1][0];
        for(int j=1;j<n;j++){
            mini=min(mini,dp[n-1][j]);
        }

        return mini;
    }
};
