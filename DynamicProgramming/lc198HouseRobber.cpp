################# Recursion ################################
// class Solution {
// public:
//     int fun(int idx,vector<int>& nums){
//         if(idx==0)return nums[0];
//         if(idx<0)return 0;
//         int pick=nums[idx]+fun(idx-2,nums);
//         int notPick=fun(idx-1,nums);

//         return max(pick,notPick);

//     }
//     int rob(vector<int>& nums) {
//         int n=nums.size()-1;
//       return  fun(n,nums);
        
//     }
// };


########################## Memoization ############

class Solution {
public:
    int fun(int idx,vector<int>& nums,vector<int>&dp){
        if(idx==0)return nums[0];
        if(idx<0)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int pick=nums[idx]+fun(idx-2,nums,dp);
        int notPick=fun(idx-1,nums,dp);

        return dp[idx]= max(pick,notPick);

    }
    int rob(vector<int>& nums) {

        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
      return  fun(n,nums,dp);
        
    }
};