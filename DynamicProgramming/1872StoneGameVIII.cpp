class Solution {
public:
    int solve(int i, int n, vector<int>& hash, vector<int>& dp) {
        if (i == n - 1)
            return hash[i];
        if (dp[i] != -1)
            return dp[i];
        int take = hash[i] - solve(i + 1, n, hash, dp);
        int notTake = solve(i + 1, n, hash, dp);
        return dp[i] = max(take, notTake);
    }
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        vector<int> hash(n);
        vector<int> dp(n, 0);
        hash[0] = stones[0];
        for (int i = 1; i < n; i++) {
            hash[i] = stones[i] + hash[i - 1];
        }
        dp[n - 1] = hash[n - 1];
        for (int i = n - 2; i >= 1; i--) {

            int take = hash[i] - dp[i + 1];
            int notTake = dp[i + 1];
            dp[i] = max(take, notTake);
        }

        return dp[1];
    }
};