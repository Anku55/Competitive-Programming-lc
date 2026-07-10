class Solution {
public:
    vector<vector<int>>ans;
    void dfs(int node,int dest, vector<int>&path,vector<vector<int>>& graph){
        path.push_back(node);
        if(node==dest){
            ans.push_back(path);
        }
       
        for(auto it : graph[node]){
            
            dfs(it,dest,path,graph);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int src=0;
        int dest=graph.size()-1;
        vector<int>path;
        dfs(src,dest,path,graph);

        return ans;

        
    }
};