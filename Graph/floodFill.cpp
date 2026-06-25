class Solution {
public:
    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    void dfs(int sr, int sc,vector<vector<int>>& image,vector<vector<int>>& ans,int color ,int iniColor){
        ans[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int r=sr+dr[i];
            int c=sc+dc[i];
            if(r>=0&&r<n&&c>=0&&c<m&&image[r][c] == iniColor &&
    ans[r][c] != color){
                dfs(r,c,image,ans,color,iniColor);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
            vector<vector<int>> ans=image;

            int n=image.size();
            int m=image[0].size();
            int iniColor=image[sr][sc];

            dfs(sr,sc,image,ans,color,iniColor);

            return ans;

    }
};