class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int result =0;
        int n=nums.size();
        int mod=1e9+7;
        sort(nums.begin(),nums.end());
                vector<int> power(n, 1);
        for (int i = 1; i < n; ++i) {
            power[i] = (power[i - 1] * 2) % mod;
        }
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                 result = (result + power[r - l]) % mod;

                l++;
            }else{
                r--;
            }
        }

        return result;
        
    }
};