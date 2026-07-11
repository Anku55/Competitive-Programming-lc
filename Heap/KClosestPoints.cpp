class Solution {
public:
    double dis(int x, int y) {
        double distance = sqrt(x * x + y * y);
        return distance;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<vector<int>>ans;
        priority_queue < pair<double, pair<int, int>>> pq;
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            double dist=dis(x,y);
            pq.push({dist,{x,y}});

            if(pq.size()>k){
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            ans.push_back({x,y});
            pq.pop();
        }

        return ans;

    }
};