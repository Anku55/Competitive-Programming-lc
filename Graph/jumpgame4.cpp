class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        vector<int> vis(n, false);
        queue<int> q;
        q.push(0);
        vis[0] = true;

        int steps=0;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                int cur=q.front();
                q.pop();
                if(cur==n-1)return steps;

                int left=cur-1;
                int right=cur+1;

                if(left>=0&&!vis[left]){
                    q.push(left);
                    vis[left]=true;
                }
                if(right<=n-1&&!vis[right]){
                    q.push(right);
                    vis[right]=true;
                }

                for(auto &idx :mp[arr[cur]]){
                    if(!vis[idx]){
                        q.push(idx);
                        vis[idx]=true;
                    }
                }

                mp.erase(arr[cur]);
            }
            steps++;
        }
        return 0;
    }
};