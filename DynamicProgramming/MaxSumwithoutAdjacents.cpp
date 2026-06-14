####################### Recursive Solution
class Solution {
  public:
    int fun(int ind,vector<int>& arr ){
        if(ind==0)return arr[0];
        if(ind<0)return 0;
        
        int notpick=fun(ind-1,arr);
        int pick=arr[ind]+fun(ind-2,arr);
        return max(pick,notpick);
    }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr, int n) {
        return fun(n-1,arr);
        // code here
        
    }
};
###############Memoaization##########

class Solution {
  public:
    int fun(int ind,vector<int>& arr, vector<int>&dp ){
        if(ind==0)return arr[0];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        
        int notpick=fun(ind-1,arr,dp);
        int pick=arr[ind]+fun(ind-2,arr,dp);
        return dp[ind]= max(pick,notpick);
    }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr, int n) {
        vector<int>dp(n,-1);
        return fun(n-1,arr,dp);
        // code here
        
    }
};

############# Tabulation ###########

class Solution {
  public:
    int findMaxSum(vector<int>& arr, int n) {

        vector<int> dp(n);

        dp[0] = arr[0];

        for(int i = 1; i < n; i++) {

            int notpick = dp[i-1];

            int pick = arr[i];
            if(i > 1)
                pick += dp[i-2];

            dp[i] = max(pick, notpick);
        }

        return dp[n-1];
    }
};

######### Space optimization ###########
class Solution {
  public:
    int findMaxSum(vector<int>& arr, int n) {

        vector<int> dp(n);

       int prev=arr[0];
        int prev2=0;

        for(int i = 1; i < n; i++) {

            int notpick = prev;

            int pick = arr[i];
            if(i > 1)
                pick += prev2;

            int cur=max(notpick,pick);
            prev2=prev;
            prev=cur;        }

        return prev;
    }
};