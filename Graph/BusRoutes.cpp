class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target)
            return 0;

        unordered_map<int, vector<int>> adj;

        // stop -> routes
        for (int i = 0; i < routes.size(); i++) {
            for (int stop : routes[i]) {
                adj[stop].push_back(i);
            }
        }

        queue<int> q;
        vector<bool> vis(routes.size(), false);

        // Start with all routes containing the source stop
        for (int route : adj[source]) {
            q.push(route);
            vis[route] = true;
        }

        int busCount = 1;

        while (!q.empty()) {
            int n = q.size();

            while (n--) {
                int route = q.front();
                q.pop();

                // Traverse all stops of the current route
                for (int stop : routes[route]) {

                    if (stop == target)
                        return busCount;

                    // Traverse all routes passing through this stop
                    for (int nextRoute : adj[stop]) {
                        if (!vis[nextRoute]) {
                            vis[nextRoute] = true;
                            q.push(nextRoute);
                        }
                    }
                }
            }

            busCount++;
        }

        return -1;
    }
};