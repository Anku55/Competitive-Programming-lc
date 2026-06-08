################# Recursive solutions #############
class Solution {
public:
    int totalPaths(int m ,int n){
        if(m==0&&n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        int up=totalPaths(m-1,n);
        int left=totalPaths(m,n-1);
        return up +left;
    }
    int uniquePaths(int m, int n) {

        return totalPaths(m-1, n-1);
        
    }
};

############################ memoaization #########
class Solution {
public:
    int totalPaths(int m ,int n,vector<vector<int>>&dp){
        if(m==0&&n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(dp[m][n]!=-1)return dp[m][n];
        int up=totalPaths(m-1,n,dp);
        int left=totalPaths(m,n-1,dp);
        return dp[m][n]= up +left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return totalPaths(m-1, n-1,dp);
        
    }
};

#########################Tabulation ###########

 int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0]=1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    dp[0][0] = 1;
                } else {
                    int up = 0;
                    int left = 0;
                    if (i > 0)
                        up = dp[i - 1][j];
                    if (j > 0)
                        left = dp[i][j - 1];
                        
                    dp[i][j] = up + left;
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};

############### combonatrics##############
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int R=m-1;
        double res=1;
        for(int i=1;i<=R;i++){
            res=res*(N-R+i)/i;
        }
        
        return (int)res;
    }
};