class Solution {
public:
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        queue<vector<int>> q;
        int steps = 0;
        vector<vector<vector<bool>>> vis(
            n, vector<vector<bool>>(m, vector<bool>(k + 1, false)));
        q.push({0, 0, k});
        vis[0][0][k] = true;

        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                vector<int> cur = q.front();
                q.pop();
                int ci = cur[0];
                int cj = cur[1];
                int ck = cur[2];

                if (ci == n - 1 && cj == m - 1)
                    return steps;

                for (auto& it : dir) {
                    int ni = ci + it[0];
                    int nj = cj + it[1];

                    if (ni < 0 || ni >= n || nj < 0 || nj >= m)
                        continue;

                    if (grid[ni][nj] == 0 && !vis[ni][nj][ck]) {
                        vis[ni][nj][ck] = true;
                        q.push({ni, nj, ck});
                    } else if (grid[ni][nj] == 1 && ck > 0 &&
                               !vis[ni][nj][ck - 1]) {
                        vis[ni][nj][ck - 1] = true;
                        q.push({ni, nj, ck - 1});
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};