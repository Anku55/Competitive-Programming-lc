class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=-1;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){

                long long gc=gcd(nums[i],nums[j]);

                long long st=(1LL* nums[i]*nums[j])/(gc*gc);
                ans=max(ans, st);
                
                
            }
        }

        return ans;
        
    }
};