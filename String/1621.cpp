class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<vector<long long>> dp;

    int numberOfSets(int n, int k) {
        dp.assign(k + 1, vector<long long>(n + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[0][i] = 1;
        }

        for (int K = 1; K <= k; K++) {
            vector<int> prevRowSum(n + 1, 0);
            for (int x = n - 1; x >= 0; x--) {
                prevRowSum[x] = (prevRowSum[x + 1] + dp[K-1][x]) % MOD;
            }
            for (int i = n - 1; i >= 0; i--) {

                int take = prevRowSum[i + 1];

                int skip = dp[K][i + 1];

                dp[K][i] = (take + skip) % MOD;
            }
        }

        return dp[k][0];
    }
};