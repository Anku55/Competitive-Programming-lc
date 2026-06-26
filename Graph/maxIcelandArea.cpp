class Solution {
public:
    int dfs(int row, int col, vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        if (row < 0 || row >= n ||
            col < 0 || col >= m ||
            grid[row][col] == 0) {
            return 0;
        }

        grid[row][col] = 0;  // mark visited

        return 1
             + dfs(row - 1, col, grid)
             + dfs(row, col + 1, grid)
             + dfs(row + 1, col, grid)
             + dfs(row, col - 1, grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1) {

                    int area = dfs(i, j, grid);

                    ans = max(ans, area);
                }
            }
        }

        return ans;
    }
};