class Solution {
public:
    int bfs(int node, vector<int> adj[], int n) {
        vector<int> dist(n, -1);
        vector<int> parent(n, -1);

        queue<int> q;
        q.push(node);
        dist[node] = 0;

        int ans = INT_MAX;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : adj[u]) {

                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    parent[v] = u;
                    q.push(v);
                } else if (parent[u] != v) {
                    // cycle found
                    ans = min(ans, dist[u] + dist[v] + 1);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]); // important
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            int cur = bfs(i, adj, n);

            if (cur != -1)
                ans = min(ans, cur);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};