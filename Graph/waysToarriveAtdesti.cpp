class Solution {
public:
    typedef pair<long long, int> p;

    int countPaths(int n, vector<vector<int>>& roads) {

        vector<pair<int, int>> adj[n];

        for (auto &it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        const int mod = 1e9 + 7;

        priority_queue<p, vector<p>, greater<p>> pq;

        vector<long long> dis(n, LLONG_MAX);
        vector<int> ways(n, 0);

        dis[0] = 0;
        ways[0] = 1;

        pq.push({0, 0});

        while (!pq.empty()) {

            auto [d, node] = pq.top();
            pq.pop();

            if (d > dis[node])
                continue;

            for (auto &it : adj[node]) {

                int adjNode = it.first;
                int wt = it.second;

                if (d + wt < dis[adjNode]) {

                    dis[adjNode] = d + wt;
                    ways[adjNode] = ways[node];

                    pq.push({dis[adjNode], adjNode});
                }
                else if (d + wt == dis[adjNode]) {

                    ways[adjNode] =
                        (ways[adjNode] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1];
    }
};