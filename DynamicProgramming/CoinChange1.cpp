/*
Problem: Coin Change
Platform: LeetCode
Link: https://leetcode.com/problems/coin-change/
Difficulty: Medium

Approach:
1. Recursion
2. Memoization
3. Tabulation
4. Space Optimization

Time: O(n * amount)
Space: O(amount)
*/

########### Recursive/bruteForce way##########
class Solution {
public:
    int fun(int ind ,int amount,vector<int>&coins){
        if(ind==0){
            if(amount%coins[ind]==0){
                return amount/coins[ind];
            }

            return 1e9;
        }
        int notTake=fun(ind-1,amount,coins);
        int take=INT_MAX;
        if(amount>=coins[ind]){
            take=1+fun(ind,amount-coins[ind],coins);
        }

        return min(notTake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int ans= fun(n-1,amount,coins);
        if(ans==1e9)return -1;
        return ans;
        
    }
};

################### Memoaization #########
class Solution {
public:
    int fun(int ind ,int amount,vector<int>&coins,vector<vector<int>>&dp){
        if(ind==0){
            if(amount%coins[ind]==0){
                return amount/coins[ind];
            }

            return 1e9;
        }
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        int notTake=fun(ind-1,amount,coins,dp);
        int take=INT_MAX;
        if(amount>=coins[ind]){
            take=1+fun(ind,amount-coins[ind],coins,dp);
        }

        return dp[ind][amount] =min(notTake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        
        int ans= fun(n-1,amount,coins,dp);
        if(ans==1e9)return -1;
        return ans;
        
    }
};

######################### Tabulation ###########

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1,0));
        for (int target = 0; target <= amount; target++) {
            if (target % coins[0] == 0) {
                dp[0][target] = target / coins[0];
            }else{
                dp[0][target]=1e9;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int target = 0; target <= amount; target++) {

                int notTake = dp[i - 1][target];
                int take = 1e9;
                if (target >= coins[i]) {
                    take = 1 + dp[i][target-coins[i]];

                    
                }
                dp[i][target] = min(notTake, take);
            }
        }
        int ans= dp[n-1][amount];
        return (ans >= 1e9) ? -1 : ans;
    }
};

#################### space Optimixation###########
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>prev(amount +1,0),curr(amount+1,0);
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0){
                prev[i]=i/coins[0];
            }else{
                prev[i]=1e9;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<=amount;j++){
                int notTake=prev[j];
                int take=1e9;
                if(j>=coins[i]){
                    take=1+curr[j-coins[i]];

                }

                curr[j]=min(take,notTake);
            }
            prev=curr;
        }
        int ans=prev[amount];
        return (ans>=1e9) ? -1 : ans;
        
    }
};