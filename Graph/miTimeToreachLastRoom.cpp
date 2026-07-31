class Solution {
public:
    using ll = long long;
    using P = pair<ll, pair<int, int>>;

    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();

        vector<vector<ll>> dist(n, vector<ll>(m, LLONG_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;

        dist[0][0] = 0;
        pq.push({0, {0, 0}});

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};

        while (!pq.empty()) {
            auto [time, pos] = pq.top();
            pq.pop();

            int x = pos.first;
            int y = pos.second;

            if (time > dist[x][y])
                continue;

            if (x == n - 1 && y == m - 1)
                return (int)time;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;

                ll newTime = max(time, (ll)moveTime[nx][ny]) + 1;

                if (newTime < dist[nx][ny]) {
                    dist[nx][ny] = newTime;
                    pq.push({newTime, {nx, ny}});
                }
            }
        }

        return (int)dist[n - 1][m - 1];
    }
};