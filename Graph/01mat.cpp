class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> dis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {

                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        int dr[] = {0, 0, -1, 1};
        int dc[] = {-1, 1, 0, 0};

        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int d = q.front().second;

            dis[r][c] = d;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int delR = r + dr[i];
                int delC = c + dc[i];
                if (delR >= 0 && delR < n && delC < m && delC >= 0 &&
                    vis[delR][delC] != 1) {
                    q.push({{delR, delC}, d + 1});
                    vis[delR][delC] = 1;
                }
            }
        }

        return dis;
    }
};