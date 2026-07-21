class Solution {
public:
    const int mod=1e9+7;
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int dfs(int x,int y,vector<vector<int>>&grid, vector<vector<int>>&dp){
        int count=1;
        int n=grid.size();
        int m=grid[0].size();
        if(dp[x][y]!=-1){
            return dp[x][y];
        }

        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny] > grid[x][y]){
                count+=dfs(nx,ny,grid,dp);
                count=count%mod;
            }
            
        }
        return dp[x][y]=count;

    }
    int countPaths(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=(ans+dfs(i,j,grid,dp))%mod;

            }
        }

        return ans;
        
    }
};