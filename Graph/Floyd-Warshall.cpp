#include <bits/stdc++.h>
using namespace std;

void floydWarshall(vector<vector<int>>& dist) {
    int n = dist.size();
    const int INF = 1e9;

    // Try every vertex as an intermediate node
    for (int via = 0; via < n; via++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (dist[i][via] == INF || dist[via][j] == INF)
                    continue;

                dist[i][j] = min(dist[i][j],
                                 dist[i][via] + dist[via][j]);
            }
        }
    }
}