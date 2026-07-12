#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int primMST(int V, vector<vector<pii>> &adj) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    vector<int> vis(V, 0);

    // {weight, node}
    pq.push({0, 0});

    int mstWeight = 0;

    while (!pq.empty()) {
        auto [wt, node] = pq.top();
        pq.pop();

        if (vis[node])
            continue;

        vis[node] = 1;
        mstWeight += wt;

        for (auto &[adjNode, edgeWt] : adj[node]) {
            if (!vis[adjNode]) {
                pq.push({edgeWt, adjNode});
            }
        }
    }

    return mstWeight;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<pii>> adj(V);

    for (int i = 0; i < E; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    cout << primMST(V, adj);

    return 0;
}