class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int dfs(int x, int y, vector<vector<int>>& matrix,
            vector<vector<int>>& dp) {

        int n = matrix.size();
        int m = matrix[0].size();

        if (dp[x][y] != -1)
            return dp[x][y];

        int cnt = 1;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n &&
                ny >= 0 && ny < m &&
                matrix[nx][ny] > matrix[x][y]) {

                cnt = max(cnt, 1 + dfs(nx, ny, matrix, dp));
            }
        }

        return dp[x][y] = cnt;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, dfs(i, j, matrix, dp));
            }
        }

        return ans;
    }
};