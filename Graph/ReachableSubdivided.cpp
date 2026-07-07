// Original edge (u, v, cnt) ka matlab weight = cnt + 1 hai.
// Dijkstra subdivided graph par nahi, compressed/original graph par chalti hai.
// Edge weight cnt + 1 isliye:
// cnt subdivided nodes cross karne hain.
// +1 final endpoint tak pahunchne ke liye.
// Build adjacency list with edge weight = cnt + 1.
// Run Dijkstra from node 0.
// Count all original nodes with:
// dist[i] <= maxMoves
// For every edge:
// fromU = max(0, maxMoves - dist[u]);
// fromV = max(0, maxMoves - dist[v]);
// Reachable subdivided nodes on this edge:
// min(cnt, fromU + fromV)
// Final answer:
// reachable original nodes + reachable subdivided nodes


class Solution {
public:
    typedef pair<int, int> P;
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<pair<int, int>> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], it[2] + 1});
            adj[it[1]].push_back({it[0], it[2] + 1});
        }

        vector<int> dist(n, INT_MAX);
        priority_queue<P, vector<P>, greater<P>> pq;

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();

            if (d > dist[node])
                continue;

            for (auto [next, wt] : adj[node]) {

                if (d + wt < dist[next]) {
                    dist[next] = d + wt;
                    pq.push({dist[next], next});
                }
            }
        }

        int ans = 0;

        // Original nodes
        for (int i = 0; i < n; i++) {
            if (dist[i] <= maxMoves)
                ans++;
        }

        // Subdivided nodes
        for (auto& e : edges) {

            int u = e[0];
            int v = e[1];
            int cnt = e[2];

            int fromU = 0;
            if (dist[u] <= maxMoves)
                fromU = maxMoves - dist[u];

            int fromV = 0;
            if (dist[v] <= maxMoves)
                fromV = maxMoves - dist[v];

            ans += min(cnt, fromU + fromV);
        }

        return ans;
    }
};