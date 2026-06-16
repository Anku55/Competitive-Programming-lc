/*
Problem: Minimum Falling Path Sum
Platform: LeetCode
Link: https://leetcode.com/problems/minimum-falling-path-sum/description/
Difficulty: Medium

Approach:
1. Recursion
2. Memoization
3. Tabulation
4. Space Optimization

Time: 
Space: 
*/
################# Recursive solution of minimum falling sum problem
class Solution {
public:
    int fun (int i,int j,vector<vector<int>>& matrix){
        if(i < 0 || j < 0 || j >= matrix.size()){
    return 1e9;
}
        if(i==0){
            return matrix[0][j];
        }

        int s=matrix[i][j]+fun(i-1,j,matrix);
        int ld=matrix[i][j]+fun(i-1,j-1,matrix);
        int rd=matrix[i][j]+fun(i-1,j+1,matrix);

        return min(s,min(ld,rd));

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans=1e9;
        for(int j = 0; j < n; j++){
        ans = min(ans, fun(n-1, j, matrix));
    }

    return ans;
        
    }
};
