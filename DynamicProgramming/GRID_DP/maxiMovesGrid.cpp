class Solution {
public:
    int n, m;
    vector<vector<int>> dp;
    vector<pair<int, int>> dir = {{-1, 1}, {0, 1}, {1, 1}};
    int dfs(int row, int col, vector<vector<int>>& grid) {
        int ans = 0;
        if (dp[row][col] != -1)
            return dp[row][col];
        for (auto it : dir) {
            int nr = row + it.first;
            int nc = col + it.second;
            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                grid[row][col] < grid[nr][nc]) {
                ans = max(ans, 1 + dfs(nr, nc, grid));
            }
        }
        return dp[row][col] = ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        dp.assign(n, vector<int>(m, -1));
        int mx = -1e9;
        for (int row = 0; row < n; row++) {
            mx = max(mx, dfs(row, 0, grid));
        }
        return mx;
    }
};