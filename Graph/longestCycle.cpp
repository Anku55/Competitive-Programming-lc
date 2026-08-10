class Solution {
public:
    int result = -1;
    void dfs(int u, vector<bool>& visited, vector<int>& count,
             vector<int>& inRecursion, vector<int>& edges) {

        if (u != -1) {
            visited[u] = true;
            inRecursion[u] = true;
            int v = edges[u];

            if (v != -1 && !visited[v]) {
                count[v] = count[u] + 1;
                dfs(v, visited, count, inRecursion, edges);
            } else if (v != -1 && inRecursion[v] == true) {
                result = max(result, count[u] - count[v] + 1);
            }
            inRecursion[u] = false;
        }
    }
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> visited(n, false);
        vector<int> count(n, 1);
        vector<int> inRecursion(n, false);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, visited, count, inRecursion, edges);
            }
        }

        return result;
    }
};