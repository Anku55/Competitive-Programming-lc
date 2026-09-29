class Solution {
public:
    int n, m;
    int dp[105][105][205];

    bool func(int i, int j, int val, vector<vector<char>>& grid) {

        if (val < 0)
            return false;
        if (val > n + m)
            return false;
        if (i == n - 1 && j == m - 1) {
            return val == 0;
        }
        if (dp[i][j][val] != -1)
            return dp[i][j][val];

        bool ans = false;

        if (i + 1 < n) {
            int newVal = val;

            if (grid[i + 1][j] == '(')
                newVal++;
            else
                newVal--;

            if (func(i + 1, j, newVal, grid))
                ans = true;
        }
        if (j + 1 < m) {
            int newVal = val;

            if (grid[i][j + 1] == '(')
                newVal++;
            else
                newVal--;

            if (func(i, j + 1, newVal, grid))
                ans = true;
        }

        return dp[i][j][val] = ans;
    }

    bool hasValidPath(vector<vector<char>>& grid) {

        n = grid.size();
        m = grid[0].size();
        if ((n + m - 1) % 2 != 0)
            return false;

        memset(dp, -1, sizeof(dp));

        int val = 0;
        if (grid[0][0] == '(')
            val++;
        else
            val--;

        return func(0, 0, val, grid);
    }
};