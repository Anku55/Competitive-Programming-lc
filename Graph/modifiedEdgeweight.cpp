// LeetCode 2699  Modify Graph Edge Weights
// We are given a graph where some edge weights are unknown (`-1`). 
// Our goal is to assign positive weights so that the **shortest path from `source` to `destination` becomes exactly `target`**.

// ### Key Observations

// * Treat every `-1` edge as **INF** initially.
// * Run Dijkstra to find the current shortest path.

// There are three possible cases:

// ### Case 1: `shortest < target`

// If the shortest path is already **less than the target**, it is impossible.

// **Why?**

// We are only allowed to assign **positive** weights to `-1` edges. Increasing unknown edge weights cannot increase the length of a shortest path that already avoids them.

//  Return `{}`.

// ---

// ### Case 2: `shortest == target`

// The required shortest path already exists.

// To prevent any new shorter path from appearing through unknown edges, assign all remaining `-1` edges a very large value (`INF`).

//  Return the modified graph.

// ---

// ### Case 3: `shortest > target`

// Now we need to **reduce** the shortest distance.

// Process every `-1` edge one by one:

// 1. Assign it the minimum possible weight (`1`).
// 2. Run Dijkstra again.
// 3. If the new shortest distance becomes **≤ target**, this edge is part of a candidate shortest path.
// 4. Increase only this edge's weight by

// ```text
// target - currentShortestDistance
// ```

// so that the shortest path becomes **exactly `target`**.

// Finally, assign all remaining `-1` edges to `INF`.

// ---

// #  Algorithm

// 1. Replace every `-1` with `INF`.
// 2. Run Dijkstra.
// 3. If shortest `< target` → return `{}`.
// 4. If shortest `== target` → set all `-1 = INF` and return.
// 5. Otherwise:

//    * Try each `-1` edge as weight `1`.
//    * Run Dijkstra.
//    * If shortest `≤ target`:

//      * Increase this edge by `target - shortest`.
//      * Mark solution found.
// 6. Set every remaining `-1` edge to `INF`.
// 7. Return the graph.

// ---

//  Why Greedy Works

// The first `-1` edge that makes the shortest path reach or go below the target must lie on a shortest candidate path.

// Instead of modifying multiple edges, we:

// * set this edge to the minimum value (`1`),
// * compute the remaining difference,
// * add exactly that difference to this edge.

// This adjusts the shortest path to become **exactly `target`**, while assigning `INF` to all other unknown edges prevents the creation of any unintended shorter paths.

// ---

//  Complexity

// * **Dijkstra:** `O((V + E) log V)`
// * **Worst Case:** Dijkstra runs once for each `-1` edge.

// Overall:

// ```text
// O(K × (V + E) log V)
// ```

// where `K` is the number of unknown (`-1`) edges.

// ---

//  Key Takeaway

// > **Treat unknown edges as blocked (`INF`). Only when necessary, activate one unknown edge with weight `1`, check if the target becomes achievable, then adjust that single edge to make the shortest path exactly equal to the target. Finally, block all remaining unknown edges using `INF`.`
using ll = long long;

class Solution {
public:
    const int INF = 2e9;

    ll dijkstra(int n, vector<vector<int>>& edges, int src, int dest) {
        vector<vector<pair<int,int>>> adj(n);

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            if (w == -1) w = INF;

            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<ll> dist(n, LLONG_MAX);
        priority_queue<pair<ll,int>,
                       vector<pair<ll,int>>,
                       greater<pair<ll,int>>> pq;

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();

            if (d > dist[node]) continue;

            for (auto &[next, wt] : adj[node]) {
                if (dist[next] > d + wt) {
                    dist[next] = d + wt;
                    pq.push({dist[next], next});
                }
            }
        }

        return dist[dest];
    }

    vector<vector<int>> modifiedGraphEdges(int n,
                                           vector<vector<int>>& edges,
                                           int source,
                                           int destination,
                                           int target) {

        ll shortest = dijkstra(n, edges, source, destination);

        if (shortest < target)
            return {};

        bool matched = (shortest == target);

        if (matched) {
            for (auto &e : edges)
                if (e[2] == -1)
                    e[2] = INF;

            return edges;
        }

        for (auto &e : edges) {

            if (e[2] != -1)
                continue;

            e[2] = 1;

            ll newDist = dijkstra(n, edges, source, destination);

            if (newDist <= target) {
                matched = true;
                e[2] += target - newDist;
                break;
            }
        }

        if (!matched)
            return {};

        for (auto &e : edges)
            if (e[2] == -1)
                e[2] = INF;

        return edges;
    }
};