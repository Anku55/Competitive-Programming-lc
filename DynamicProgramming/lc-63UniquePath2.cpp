
class Solution {
public:
    int totalPaths(int m ,int n,vector<vector<int>>& obstacleGrid){
    if(m<0 || n<0){
        return 0;
    }

    if(obstacleGrid[m][n]==1){
        return 0;
    }

    if(m==0 && n==0){
        return 1;
    }
        int up=totalPaths(m-1,n,obstacleGrid);
        int left=totalPaths(m,n-1,obstacleGrid);
        return up +left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

        return totalPaths(m-1,n-1,obstacleGrid);
        
    }
};