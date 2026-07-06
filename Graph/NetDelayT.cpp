class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n + 1];
        for (auto& it : times) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v, wt});
        }
        vector<int> dis(n + 1, 1e9);
        dis[k] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        pq.push({0, k});
        while (!pq.empty()) {
            int node = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            if (d > dis[node])
                continue;

            for (auto it : adj[node]) {
                int adjNode = it.first;
                int wt = it.second;

                if (wt + d < dis[adjNode]) {
                    dis[adjNode] = wt + d;
                    pq.push({dis[adjNode], adjNode});
                }
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (dis[i] == 1e9)
                return -1;
            ans = max(ans, dis[i]);
        }

        return ans;
    }
};