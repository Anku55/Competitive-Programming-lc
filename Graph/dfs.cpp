#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>& vis, vector<vector<int>>& adj) {
    vis[node] = 1;

    cout << node << " ";

    for (int nbr : adj[node]) {
        if (!vis[nbr]) {
            dfs(nbr, vis, adj);
        }
    }
}

int main() {

    int n = 5;

    vector<vector<int>> adj(n);

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    vector<int> vis(n, 0);

    dfs(0, vis, adj);

    return 0;
}