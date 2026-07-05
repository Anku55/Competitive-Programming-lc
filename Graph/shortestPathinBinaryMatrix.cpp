class Solution {
public:
    typedef pair<int,pair<int,int>> p;

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        if (grid[0][0] == 1 || grid[n-1][m-1] == 1)
            return -1;

        int dr[] = {-1,-1,-1,0,0,1,1,1};
        int dc[] = {-1,0,1,-1,1,-1,0,1};

        auto isSafe = [&](int x,int y){
            return x>=0 && x<n && y>=0 && y<m;
        };

        priority_queue<p, vector<p>, greater<p>> pq;

        vector<vector<int>> result(n, vector<int>(m, 1e9));

        result[0][0] = 1;
        pq.push({1,{0,0}});

        while(!pq.empty()){

            int dis = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            if(dis > result[x][y]) continue;

            for(int i=0;i<8;i++){

                int nr = x + dr[i];
                int nc = y + dc[i];

                if(isSafe(nr,nc) && grid[nr][nc]==0){

                    if(dis + 1 < result[nr][nc]){

                        result[nr][nc] = dis + 1;
                        pq.push({result[nr][nc],{nr,nc}});
                    }
                }
            }
        }

        if(result[n-1][m-1] == 1e9)
            return -1;

        return result[n-1][m-1];
    }
};