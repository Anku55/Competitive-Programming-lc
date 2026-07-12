int primMST(int V, vector<vector<pii>> &adj) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> vis(V, 0);
    int mstWeight = 0;

    for (int start = 0; start < V; start++) {
        if (vis[start])
            continue;

        pq.push({0, start});

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
    }

    return mstWeight;
}