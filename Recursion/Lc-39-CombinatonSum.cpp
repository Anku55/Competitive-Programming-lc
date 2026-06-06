class Solution {
public:
    vector<vector<int>>ans;
    void combinations(int i , int n , vector<int>& candidates, int target ,vector<int>&temp){
        if(target<0)return;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i>n){
            return;
        }
        temp.push_back(candidates[i]);
        combinations(i,n,candidates,target-candidates[i],temp);
        temp.pop_back();
        combinations(i+1,n,candidates,target,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int n=candidates.size()-1;
        combinations(0,n,candidates,target,temp);

        return ans;

        
    }
};