class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
          vector<int>adj[numCourses];
        for(auto &it :prerequisites){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);

        }

        vector<int>indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        int cnt=0;
        vector<int>res;

        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int top=q.front();
            q.pop();
            res.push_back(top);
            cnt++;
            for(auto it :adj[top]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }

        if(cnt!=numCourses)return {};

        return res;
        
    }
};