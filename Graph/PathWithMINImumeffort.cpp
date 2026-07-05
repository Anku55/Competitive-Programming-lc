class Solution {
public:
    typedef pair<int,pair<int,int>>p; 
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();

        vector<vector<int>>effort(n,vector<int>(m,1e9));
        priority_queue<p,vector<p>,greater<p>>pq;
        pq.push({0,{0,0}});
        effort[0][0]=0;
        int dr[]={1,-1,0,0};
        int dc[]={0,0,-1,1};


        while(!pq.empty()){
            int x =pq.top().second.first;
            int y =pq.top().second.second;
            
            int d=pq.top().first;
            pq.pop();
            if (d > effort[x][y]) continue;

            if(x==n-1&&y==m-1){
                return d;
            }

            for(int i=0;i<4;i++){
                int nx=x+dr[i];
                int ny=y+dc[i];

                if(nx<n && nx>=0 && ny<m && ny>=0){
                    int eff=max(d,abs(heights[x][y]-heights[nx][ny]));
                    if(eff<effort[nx][ny]){
                        effort[nx][ny]=eff;
                        pq.push({eff,{nx,ny}});
                    }

                }
            }



        }
        return -1;
        
    }
};