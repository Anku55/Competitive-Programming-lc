#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int>& vis, vector<vector<int>>& adj) {

    queue<int> q;

    q.push(start);
    vis[start] = 1;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int nbr : adj[node]) {

            if (!vis[nbr]) {
                vis[nbr] = 1;
                q.push(nbr);
            }
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

    bfs(0, vis, adj);

    return 0;
}
//  the path found by breadth first search to any
// node is the shortest path to that node, 
//i.e the path that contains the smallest number
// of edges in unweighted graphs.