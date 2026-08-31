class Solution {
public:
    int k;
    int res;
    void solve (int idx ,vector<int>&nums,unordered_map<int,int>&mp){
        if(idx>=nums.size()){
            res++;
            return;
        }

        solve(idx+1,nums,mp);
        if(!mp[nums[idx]-k] && !mp[nums[idx]+k]){
            mp[nums[idx]]++;
            solve(idx+1,nums,mp);
            mp[nums[idx]]--;
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        res=0;
        this->k = k;
        unordered_map<int,int>mp;
        solve(0,nums,mp);

        return res-1;
    }
};