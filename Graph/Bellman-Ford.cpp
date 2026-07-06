#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int S) {
    const int INF = 1e8;
    vector<int> dist(V, INF);

    dist[S] = 0;

    // Relax all edges V-1 times
    for (int i = 0; i < V - 1; i++) {
        bool updated = false;

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            if (dist[u] != INF && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                updated = true;
            }
        }

        // Optimization
        if (!updated) break;
    }

    // Check for negative weight cycle
    for (auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        if (dist[u] != INF && dist[u] + wt < dist[v]) {
            return {-1};   // Negative cycle exists
        }
    }

    return dist;
}