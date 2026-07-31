class Solution {
public:
    typedef pair<int, pair<int,int>> P;

    int minimumObstacles(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;

        dist[0][0] = 0;
        pq.push({0,{0,0}});

        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};

        while(!pq.empty()){

            auto [cost,pos]=pq.top();
            pq.pop();

            int x=pos.first;
            int y=pos.second;

            if(cost>dist[x][y])
                continue;

            if(x==n-1 && y==m-1)
                return cost;

            for(int k=0;k<4;k++){

                int nx=x+dx[k];
                int ny=y+dy[k];

                if(nx<0||nx>=n||ny<0||ny>=m)
                    continue;

                int newCost=cost+grid[nx][ny];

                if(newCost<dist[nx][ny]){
                    dist[nx][ny]=newCost;
                    pq.push({newCost,{nx,ny}});
                }
            }
        }

        return dist[n-1][m-1];
    }
};