################# Recursion ################################
class Solution {
public:
    int fun(int idx,vector<int>& nums){
        if(idx==0)return nums[0];
        if(idx<0)return 0;
        int pick=nums[idx]+fun(idx-2,nums);
        int notPick=fun(idx-1,nums);

        return max(pick,notPick);

    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
      return  fun(n,nums);
        
    }
};


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

################################## Tabulation#################
int rob(vector<int>& nums) {

        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        dp[0]=nums[0];
        int neg=0;
        for(int i=1;i<=n;i++){
            int fs=nums[i];
            if(i>1)fs+=dp[i-2];
            int ss=dp[i-1];
            dp[i]=max(fs,ss);
        }
      return dp[n];
        
    }
};

############################ Space Optimizations ############
class Solution {
public:
    // int fun(int idx,vector<int>& nums,vector<int>&dp){
    //     if(idx==0)return nums[0];
    //     if(idx<0)return 0;
    //     if(dp[idx]!=-1)return dp[idx];
    //     int pick=nums[idx]+fun(idx-2,nums,dp);
    //     int notPick=fun(idx-1,nums,dp);

    //     return dp[idx]= max(pick,notPick);

    // }
    int rob(vector<int>& nums) {

        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        int prev=nums[0];
        int prev2=0;
       
        for(int i=1;i<=n;i++){
            int fs=nums[i];
            if(i>1)fs+=prev2;
            int ss=prev;
           int cur=max(fs,ss);
            prev2=prev;
            prev=cur;
        }
    //   return dp[n];

    return prev;
        
    }
};