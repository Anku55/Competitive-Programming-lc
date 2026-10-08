class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // auto it = lower_bound(arr.begin(), arr.end(), x);
        // int ind=it-arr;
        // vector<int>ans;
        int n=arr.size();
        vector<int>ans;
        vector<int>temp(n,0);
        for(int i=0;i<n;i++){
            temp[i]=arr[i]-x;
        }
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({abs(temp[i]),i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            int num=pq.top().second;
            ans.push_back(arr[num]);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};