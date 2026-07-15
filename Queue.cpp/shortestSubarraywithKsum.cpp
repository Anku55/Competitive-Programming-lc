class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n+1, 0);

        int ans=1e9;
        int j = 0;
        deque<int> deq;
        while (j < n) {
            if (j == 0) {

                pre[j] = nums[j];

            } else {
                pre[j] = nums[j] + pre[j - 1];
            }

            if(pre[j]>=k){
                ans=min(ans,j+1);
            }
            while(!deq.empty()&&pre[j]-pre[deq.front()]>=k){
                ans=min(ans,j-deq.front());
                deq.pop_front();
            }
            while(!deq.empty()&&pre[j]<pre[deq.back()]){
                deq.pop_back();
            }
            deq.push_back(j);
            j++;
        }
        return (ans==1e9)? -1 : ans;
    }
};