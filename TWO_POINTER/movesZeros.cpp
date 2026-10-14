class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        while(i<n&&nums[i]!=0){
            i++;
        }
        while(j<n&&nums[j]==0){
            j++;
        }

        while(i<n && j<n){
            if(nums[i]==0 &&nums[j]!=0){
                swap(nums[i],nums[j]);
            }
            while(i<n&&nums[i]!=0){
                i++;
            }
            j++;
        }
        
    }
};