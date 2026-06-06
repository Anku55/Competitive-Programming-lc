class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, int n, vector<int>& nums, vector<int>& temp) {
        if (i > n) {

            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i + 1, n, nums, temp);

        temp.pop_back();
        solve(i + 1, n, nums, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size() - 1;
        solve(0, n, nums, temp);

        return ans;
    }
};
}