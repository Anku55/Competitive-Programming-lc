class Solution {
public:

    vector<vector<vector<int>>> dp;

    int cherryPickup(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        dp.assign(n, vector<vector<int>>(
                        m, vector<int>(m, 0)));

        // Base case: last row
        for (int j1 = 0; j1 < m; j1++) {
            for (int j2 = 0; j2 < m; j2++) {

                if (j1 == j2) {
                    dp[n - 1][j1][j2] = grid[n - 1][j1];
                }
                else {
                    dp[n - 1][j1][j2] =
                        grid[n - 1][j1] +
                        grid[n - 1][j2];
                }
            }
        }

        // Bottom -> Top
        for (int i = n - 2; i >= 0; i--) {

            for (int j1 = 0; j1 < m; j1++) {

                for (int j2 = 0; j2 < m; j2++) {

                    int maxi = 0;

                    // Robot 1: j1-1, j1, j1+1
                    // Robot 2: j2-1, j2, j2+1

                    for (int d1 = -1; d1 <= 1; d1++) {

                        for (int d2 = -1; d2 <= 1; d2++) {

                            int nj1 = j1 + d1;
                            int nj2 = j2 + d2;

                            if (nj1 < 0 || nj1 >= m ||
                                nj2 < 0 || nj2 >= m)
                                continue;

                            maxi = max(maxi,
                                       dp[i + 1][nj1][nj2]);
                        }
                    }

                    int cherries = grid[i][j1];

                    if (j1 != j2)
                        cherries += grid[i][j2];

                    dp[i][j1][j2] = cherries + maxi;
                }
            }
        }

        return dp[0][0][m - 1];
    }
};