class Solution {
public:
    bool canJump(vector<int>& nums) {

        int rem = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            rem--;

            if(rem < 0) return false;

            rem = max(rem, nums[i]);
        }

        return true;
    }
};